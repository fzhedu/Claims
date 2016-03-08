/*
 * Copyright [2012-2015] DaSE@ECNU
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * /Claims/node_manager/slave_node.cpp
 *
 *  Created on: Jan 4, 2016
 *      Author: fzh
 *		   Email: fzhedu@gmail.com
 *
 * Description:
 *
 */
#include <glog/logging.h>
#include <string>
#include <utility>
#include <iostream>
#include "./slave_node.h"
#include "../common/Message.h"
#include "caf/io/all.hpp"

#include "../Environment.h"
using std::make_pair;

namespace claims {
SlaveNode* SlaveNode::instance_ = 0;
class SlaveNodeActor : public event_based_actor {
 public:
  SlaveNodeActor(SlaveNode* slave_node) : slave_node_(slave_node) {}

  behavior make_behavior() override {
    std::cout << "slave node actor is OK!" << std::endl;
    return {

        [=](ExitAtom) {
          cout << "slave " << slave_node_->get_node_id() << " finish!" << endl;
          quit();
        },
        [=](SendPlanAtom, Message4K str) {
          PhysicalQueryPlan* new_plan =
              new PhysicalQueryPlan(PhysicalQueryPlan::deserialize4K(str));
          Environment::getInstance()
              ->getIteratorExecutorSlave()
              ->createNewThreadAndRun(new_plan);
          string log_message =
              "Slave: received plan segment and create new thread and run it!";
          cout << log_message << endl;
          LOG(INFO) << log_message;
        },
        caf::others >> [=]() { cout << "unkown message" << endl; }

    };
  }

  SlaveNode* slave_node_;
};

SlaveNode* SlaveNode::GetInstance() {
  if (NULL == instance_) {
    instance_ = new SlaveNode();
  }
  return instance_;
}

SlaveNode::SlaveNode() : BaseNode() { CreateActor(); }
SlaveNode::SlaveNode(string node_ip, uint16_t node_port)
    : BaseNode(node_ip, node_port) {
  CreateActor();
}
SlaveNode::~SlaveNode() {}
void SlaveNode::CreateActor() {
  auto slave_actor = caf::spawn<SlaveNodeActor>(this);
  try {
    caf::io::publish(slave_actor, get_node_port());
  } catch (caf::bind_failure& e) {
  } catch (caf::network_error& e) {
  }
}

RetCode SlaveNode::RegisterToMaster() {
  RetCode ret = 0;
  caf::scoped_actor self;
  try {
    auto master_actor =
        caf::io::remote_actor(master_addr_.first, master_addr_.second);
    self->sync_send(master_actor, RegisterAtom::value, get_node_ip(),
                    get_node_port())
        .await([&](OkAtom, unsigned int id) {
                 set_node_id(id);
                 LOG(INFO) << "register node succeed!";
               },
               [&](const caf::sync_exited_msg& msg) {
                 LOG(WARNING) << "register link fail";
               },
               caf::after(std::chrono::seconds(kTimeout)) >>
                   [&]() {
                     ret = -1;
                     LOG(WARNING) << "slave register timeout!";
                   });
  } catch (caf::network_error& e) {
    ret = -1;
    LOG(WARNING) << "cann't connect to " << master_addr_.first << " , "
                 << master_addr_.second << " in register";
  }
  return ret;
}

} /* namespace claims */