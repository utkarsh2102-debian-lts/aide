/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_CONF_SRC_CONF_YACC_H_INCLUDED
# define YY_CONF_SRC_CONF_YACC_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int confdebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TDEFINE = 258,
    TUNDEF = 259,
    TIFDEF = 260,
    TIFNDEF = 261,
    TIFNHOST = 262,
    TIFHOST = 263,
    TELSE = 264,
    TENDIF = 265,
    TINCLUDE = 266,
    TBEGIN_CONFIG = 267,
    TEND_CONFIG = 268,
    TBEGIN_DB = 269,
    TEND_DB = 270,
    TEND_DBNOMD = 271,
    TID = 272,
    TSTRING = 273,
    TACLNOSYMLINKFOLLOW = 274,
    TWARNDEADSYMLINKS = 275,
    TGROUPED = 276,
    TSUMMARIZECHANGES = 277,
    TNEWLINE = 278,
    TVERBOSE = 279,
    TDATABASEADDMETADATA = 280,
    TREPORTDETAILEDINIT = 281,
    TREPORTBASE16 = 282,
    TREPORTQUIET = 283,
    TREPORTIGNOREE2FSATTRS = 284,
    TCONFIG_FILE = 285,
    TDATABASE = 286,
    TDATABASE_OUT = 287,
    TDATABASE_NEW = 288,
    TDATABASE_ATTRS = 289,
    TREPORT_URL = 290,
    TGZIPDBOUT = 291,
    TROOT_PREFIX = 292,
    TUMASK = 293,
    TTRUE = 294,
    TFALSE = 295,
    TRECSTOP = 296,
    TCONFIG_VERSION = 297,
    TSELRXRULE = 298,
    TEQURXRULE = 299,
    TNEGRXRULE = 300,
    TRIGHTS = 301,
    TUSER = 302,
    TGROUP = 303,
    TINODE = 304,
    TLINKCOUNT = 305,
    TFTYPE = 306,
    TSIZE = 307,
    TGROWINGSIZE = 308,
    TATIME = 309,
    TCTIME = 310,
    TMTIME = 311,
    TACL = 312,
    TXATTRS = 313,
    TSELINUX = 314,
    TE2FSATTRS = 315,
    TTIGER = 316,
    TSHA1 = 317,
    TRMD160 = 318,
    TMD2 = 319,
    TMD4 = 320,
    TMD5 = 321,
    TSHA256 = 322,
    TSHA512 = 323,
    TWHIRLPOOL = 324,
    TL = 325,
    TR = 326,
    TGZIPHEADER = 327,
    TDBSPEC = 328,
    TUNKNOWN = 329,
    TNAME = 330,
    TERROR = 331,
    TEOF = 332
  };
#endif
/* Tokens.  */
#define TDEFINE 258
#define TUNDEF 259
#define TIFDEF 260
#define TIFNDEF 261
#define TIFNHOST 262
#define TIFHOST 263
#define TELSE 264
#define TENDIF 265
#define TINCLUDE 266
#define TBEGIN_CONFIG 267
#define TEND_CONFIG 268
#define TBEGIN_DB 269
#define TEND_DB 270
#define TEND_DBNOMD 271
#define TID 272
#define TSTRING 273
#define TACLNOSYMLINKFOLLOW 274
#define TWARNDEADSYMLINKS 275
#define TGROUPED 276
#define TSUMMARIZECHANGES 277
#define TNEWLINE 278
#define TVERBOSE 279
#define TDATABASEADDMETADATA 280
#define TREPORTDETAILEDINIT 281
#define TREPORTBASE16 282
#define TREPORTQUIET 283
#define TREPORTIGNOREE2FSATTRS 284
#define TCONFIG_FILE 285
#define TDATABASE 286
#define TDATABASE_OUT 287
#define TDATABASE_NEW 288
#define TDATABASE_ATTRS 289
#define TREPORT_URL 290
#define TGZIPDBOUT 291
#define TROOT_PREFIX 292
#define TUMASK 293
#define TTRUE 294
#define TFALSE 295
#define TRECSTOP 296
#define TCONFIG_VERSION 297
#define TSELRXRULE 298
#define TEQURXRULE 299
#define TNEGRXRULE 300
#define TRIGHTS 301
#define TUSER 302
#define TGROUP 303
#define TINODE 304
#define TLINKCOUNT 305
#define TFTYPE 306
#define TSIZE 307
#define TGROWINGSIZE 308
#define TATIME 309
#define TCTIME 310
#define TMTIME 311
#define TACL 312
#define TXATTRS 313
#define TSELINUX 314
#define TE2FSATTRS 315
#define TTIGER 316
#define TSHA1 317
#define TRMD160 318
#define TMD2 319
#define TMD4 320
#define TMD5 321
#define TSHA256 322
#define TSHA512 323
#define TWHIRLPOOL 324
#define TL 325
#define TR 326
#define TGZIPHEADER 327
#define TDBSPEC 328
#define TUNKNOWN 329
#define TNAME 330
#define TERROR 331
#define TEOF 332

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 45 "src/conf_yacc.y" /* yacc.c:1909  */

  char* s;
  DB_ATTR_TYPE i;
  RESTRICTION_TYPE r;

#line 214 "src/conf_yacc.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE conflval;

int confparse (void);

#endif /* !YY_CONF_SRC_CONF_YACC_H_INCLUDED  */
