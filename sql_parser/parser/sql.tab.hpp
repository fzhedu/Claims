/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton interface for Bison GLR parsers in C
   
      Copyright (C) 2002-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_SQL_TAB_HPP_INCLUDED
# define YY_YY_SQL_TAB_HPP_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     BOOL = 261,
     APPROXNUM = 262,
     USERVAR = 263,
     ASSIGN = 264,
     OR = 265,
     XOR = 266,
     ANDOP = 267,
     REGEXP = 268,
     LIKE = 269,
     IS = 270,
     IN = 271,
     NOT = 272,
     BETWEEN = 273,
     COMPARISON = 274,
     SHIFT = 275,
     MOD = 276,
     UMINUS = 277,
     ADD = 278,
     ALL = 279,
     ALTER = 280,
     ANALYZE = 281,
     AND = 282,
     ANY = 283,
     APPEND = 284,
     AS = 285,
     ASC = 286,
     AUTO_INCREMENT = 287,
     BEFORE = 288,
     BIGINT = 289,
     BINARY = 290,
     BIT = 291,
     BLOB = 292,
     BOTH = 293,
     BY = 294,
     CALL = 295,
     CASCADE = 296,
     CASE = 297,
     CHANGE = 298,
     CHAR = 299,
     CHECK = 300,
     COLLATE = 301,
     COLUMN = 302,
     COMMENT = 303,
     CONDITION = 304,
     CONSTRAINT = 305,
     CONTINUE = 306,
     CONVERT = 307,
     CREATE = 308,
     CROSS = 309,
     CURRENT_DATE = 310,
     CURRENT_TIME = 311,
     CURRENT_TIMESTAMP = 312,
     CURRENT_USER = 313,
     CURSOR = 314,
     DATABASE = 315,
     DATABASES = 316,
     DATE = 317,
     DATETIME = 318,
     DAY_HOUR = 319,
     DAY = 320,
     DAY_MICROSECOND = 321,
     DAY_MINUTE = 322,
     DAY_SECOND = 323,
     DECIMAL = 324,
     DECLARE = 325,
     DEFAULT = 326,
     DELAYED = 327,
     DELETE = 328,
     DESC = 329,
     DESCRIBE = 330,
     DETERMINISTIC = 331,
     DISTINCT = 332,
     DISTINCTROW = 333,
     DIV = 334,
     DOUBLE = 335,
     DROP = 336,
     DUAL = 337,
     EACH = 338,
     ELSE = 339,
     ELSEIF = 340,
     ENCLOSED = 341,
     END = 342,
     ENUM = 343,
     ESCAPED = 344,
     EXISTS = 345,
     EXIT = 346,
     EXPLAIN = 347,
     FETCH = 348,
     FLOAT = 349,
     FOR = 350,
     FORCE = 351,
     FOREIGN = 352,
     FROM = 353,
     FULL = 354,
     FULLTEXT = 355,
     GRANT = 356,
     GROUP = 357,
     HAVING = 358,
     HIGH_PRIORITY = 359,
     HOUR_MICROSECOND = 360,
     HOUR_MINUTE = 361,
     HOUR_SECOND = 362,
     IF = 363,
     IGNORE = 364,
     INDEX = 365,
     INFILE = 366,
     INNER = 367,
     INOUT = 368,
     INSENSITIVE = 369,
     INSERT = 370,
     INT = 371,
     INTEGER = 372,
     INTERVAL = 373,
     INTO = 374,
     ITERATE = 375,
     JOIN = 376,
     KEY = 377,
     KEYS = 378,
     KILL = 379,
     LEADING = 380,
     LEAVE = 381,
     LEFT = 382,
     LIMIT = 383,
     LINES = 384,
     LOAD = 385,
     LOCALTIME = 386,
     LOCALTIMESTAMP = 387,
     LOCK = 388,
     LONG = 389,
     LONGBLOB = 390,
     LONGTEXT = 391,
     LOOP = 392,
     LOW_PRIORITY = 393,
     MATCH = 394,
     MEDIUMBLOB = 395,
     MEDIUMINT = 396,
     MEDIUMTEXT = 397,
     MINUTE_MICROSECOND = 398,
     MINUTE_SECOND = 399,
     MODIFIES = 400,
     NATURAL = 401,
     NO_WRITE_TO_BINLOG = 402,
     NULLX = 403,
     NUMBER = 404,
     ON = 405,
     DUPLICATE = 406,
     OPTIMIZE = 407,
     OPTION = 408,
     OPTIONALLY = 409,
     ORDER = 410,
     OUT = 411,
     OUTER = 412,
     OUTFILE = 413,
     PARTITIONED = 414,
     PRECISION = 415,
     PRIMARY = 416,
     PROCEDURE = 417,
     PROJECTION = 418,
     PURGE = 419,
     QUICK = 420,
     QUARTER = 421,
     READ = 422,
     READS = 423,
     REAL = 424,
     REFERENCES = 425,
     RELEASE = 426,
     RENAME = 427,
     REPEAT = 428,
     REPLACE = 429,
     REQUIRE = 430,
     RESTRICT = 431,
     RETURN = 432,
     REVOKE = 433,
     RIGHT = 434,
     ROLLUP = 435,
     SAMPLE = 436,
     SCHEMA = 437,
     SCHEMAS = 438,
     SECOND_MICROSECOND = 439,
     SELECT = 440,
     SENSITIVE = 441,
     SEPARATOR = 442,
     SET = 443,
     SHOW = 444,
     SMALLINT = 445,
     SOME = 446,
     SONAME = 447,
     SPATIAL = 448,
     SPECIFIC = 449,
     SQL = 450,
     SQLEXCEPTION = 451,
     SQLSTATE = 452,
     SQLWARNING = 453,
     SQL_BIG_RESULT = 454,
     SQL_CALC_FOUND_ROWS = 455,
     SQL_SMALL_RESULT = 456,
     SSL = 457,
     STARTING = 458,
     STRAIGHT_JOIN = 459,
     TABLE = 460,
     TEMPORARY = 461,
     TEXT = 462,
     TERMINATED = 463,
     THEN = 464,
     TIME = 465,
     TIMESTAMP = 466,
     TINYBLOB = 467,
     TINYINT = 468,
     TINYTEXT = 469,
     TO = 470,
     TRAILING = 471,
     TRIGGER = 472,
     UNDO = 473,
     UNION = 474,
     UNIQUE = 475,
     UNLOCK = 476,
     UNSIGNED = 477,
     UPDATE = 478,
     USAGE = 479,
     USE = 480,
     USING = 481,
     UTC_DATE = 482,
     UTC_TIME = 483,
     UTC_TIMESTAMP = 484,
     VALUES = 485,
     VARBINARY = 486,
     VARCHAR = 487,
     VARYING = 488,
     WHEN = 489,
     WHERE = 490,
     WHILE = 491,
     WITH = 492,
     WRITE = 493,
     YEAR = 494,
     YEAR_MONTH = 495,
     ZEROFILL = 496,
     WEEK = 497,
     DO = 498,
     MAX_QUERIES_PER_HOUR = 499,
     MAX_UPDATES_PER_HOUR = 500,
     MAX_CONNECTIONS_PER_HOUR = 501,
     MAX_USER_CONNECTIONS = 502,
     USER = 503,
     TRUNCATE = 504,
     FAST = 505,
     MEDIUM = 506,
     EXTENDED = 507,
     CHANGED = 508,
     LEAVES = 509,
     MASTER = 510,
     QUERY = 511,
     CACHE = 512,
     SLAVE = 513,
     BEGINT = 514,
     COMMIT = 515,
     START = 516,
     TRANSACTION = 517,
     NO = 518,
     CHAIN = 519,
     AUTOCOMMIT = 520,
     SAVEPOINT = 521,
     ROLLBACK = 522,
     LOCAL = 523,
     TABLES = 524,
     ISOLATION = 525,
     LEVEL = 526,
     GLOBAL = 527,
     SESSION = 528,
     UNCOMMITTED = 529,
     COMMITTED = 530,
     REPEATABLE = 531,
     SERIALIZABLE = 532,
     IDENTIFIED = 533,
     PASSWORD = 534,
     PRIVILEGES = 535,
     BACKUP = 536,
     CHECKSUM = 537,
     REPAIR = 538,
     USE_FRM = 539,
     RESTORE = 540,
     CHARACTER = 541,
     COLLATION = 542,
     COLUMNS = 543,
     ENGINE = 544,
     LOGS = 545,
     STATUS = 546,
     STORAGE = 547,
     ENGINES = 548,
     ERRORS = 549,
     GRANTS = 550,
     INNODB = 551,
     PROCESSLIST = 552,
     TRIGGERS = 553,
     VARIABLES = 554,
     WARNINGS = 555,
     FLUSH = 556,
     HOSTS = 557,
     DES_KEY_FILE = 558,
     USER_RESOURCES = 559,
     CONNECTION = 560,
     RESET = 561,
     PREPARE = 562,
     DEALLOCATE = 563,
     EXECUTE = 564,
     WORK = 565,
     BTREE = 566,
     HASH = 567,
     BDB = 568,
     OPEN = 569,
     FSUBSTRING = 570,
     FTRIM = 571,
     FDATE_ADD = 572,
     FDATE_SUB = 573,
     FCOUNT = 574,
     FUPPER = 575,
     FCAST = 576,
     FCOALESCE = 577,
     FCONVERT = 578,
     FSUM = 579,
     FAVG = 580,
     FMIN = 581,
     FMAX = 582
   };
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2579 of glr.c  */
#line 38 "sql.ypp"

	int intval;		
	double floatval;
	char* strval;
	int subtok;
	class AstNode * ast_node;


/* Line 2579 of glr.c  */
#line 392 "sql.tab.hpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


int yyparse (struct ParseResult* result);

#endif /* !YY_YY_SQL_TAB_HPP_INCLUDED  */
