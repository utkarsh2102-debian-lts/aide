/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         confparse
#define yylex           conflex
#define yyerror         conferror
#define yydebug         confdebug
#define yynerrs         confnerrs

#define yylval          conflval
#define yychar          confchar

/* Copy the first part of user declarations.  */
#line 1 "src/conf_yacc.y" /* yacc.c:339  */
 

/*	
 * Copyright (C) 1999-2006,2010-2013,2015,2016 Rami Lehti, Pablo Virolainen,
 * Richard van den Berg, Hannes von Haugwitz
 * $Header$
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "aide.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <errno.h>
#include <string.h>
#include "list.h"
#include "gen_list.h"
#include "db.h"
#include "db_config.h"
#include "symboltable.h"
#include "util.h"
#include "commandconf.h"

DB_ATTR_TYPE retval=0;
extern int conflex();
void conferror(const char*);

extern char *conftext;
extern long conf_lineno;



#line 119 "src/conf_yacc.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "conf_yacc.h".  */
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
#line 45 "src/conf_yacc.y" /* yacc.c:355  */

  char* s;
  DB_ATTR_TYPE i;
  RESTRICTION_TYPE r;

#line 319 "src/conf_yacc.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE conflval;

int confparse (void);

#endif /* !YY_CONF_SRC_CONF_YACC_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 336 "src/conf_yacc.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,    81,    80,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    19,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   157,   157,   157,   159,   159,   159,   159,   159,   160,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   162,   162,   162,   163,   163,   163,
     163,   164,   164,   164,   164,   165,   169,   170,   174,   178,
     181,   186,   189,   192,   195,   198,   201,   204,   205,   210,
     211,   221,   222,   223,   225,   226,   227,   237,   237,   238,
     238,   239,   239,   239,   240,   240,   241,   241,   241,   242,
     242,   242,   243,   243,   245,   245,   245,   246,   246,   246,
     247,   249,   251,   253,   253,   260,   260,   267,   267,   274,
     274,   281,   282,   284,   286,   288,   290,   292,   294,   296,
     305,   312,   316,   324,   332,   336,   340,   344,   348,   352,
     356,   364,   368,   372,   376,   380,   384,   386,   390,   394,
     398,   405,   411,   416
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TDEFINE", "TUNDEF", "TIFDEF", "TIFNDEF",
  "TIFNHOST", "TIFHOST", "TELSE", "TENDIF", "TINCLUDE", "TBEGIN_CONFIG",
  "TEND_CONFIG", "TBEGIN_DB", "TEND_DB", "TEND_DBNOMD", "TID", "TSTRING",
  "'='", "TACLNOSYMLINKFOLLOW", "TWARNDEADSYMLINKS", "TGROUPED",
  "TSUMMARIZECHANGES", "TNEWLINE", "TVERBOSE", "TDATABASEADDMETADATA",
  "TREPORTDETAILEDINIT", "TREPORTBASE16", "TREPORTQUIET",
  "TREPORTIGNOREE2FSATTRS", "TCONFIG_FILE", "TDATABASE", "TDATABASE_OUT",
  "TDATABASE_NEW", "TDATABASE_ATTRS", "TREPORT_URL", "TGZIPDBOUT",
  "TROOT_PREFIX", "TUMASK", "TTRUE", "TFALSE", "TRECSTOP",
  "TCONFIG_VERSION", "TSELRXRULE", "TEQURXRULE", "TNEGRXRULE", "TRIGHTS",
  "TUSER", "TGROUP", "TINODE", "TLINKCOUNT", "TFTYPE", "TSIZE",
  "TGROWINGSIZE", "TATIME", "TCTIME", "TMTIME", "TACL", "TXATTRS",
  "TSELINUX", "TE2FSATTRS", "TTIGER", "TSHA1", "TRMD160", "TMD2", "TMD4",
  "TMD5", "TSHA256", "TSHA512", "TWHIRLPOOL", "TL", "TR", "TGZIPHEADER",
  "TDBSPEC", "TUNKNOWN", "TNAME", "TERROR", "TEOF", "'+'", "'-'", "','",
  "$accept", "lines", "line", "rule", "equrule", "negrule", "newlineoreof",
  "restriction", "expr", "primary", "other", "hash", "definestmt",
  "undefstmt", "ifdefstmt", "$@1", "ifndefstmt", "$@2", "ifhoststmt",
  "$@3", "ifnhoststmt", "$@4", "ifstmtlist", "groupdef", "db_in", "db_out",
  "db_new", "verbose", "report", "db_attrs", "beginconfigstmt",
  "endconfigstmt", "acl_no_symlink_follow", "warn_dead_symlinks",
  "database_add_metadata", "report_detailed_init",
  "report_ignore_e2fsattrs", "report_base16", "report_quiet", "grouped",
  "root_prefix", "summarize_changes", "gzipdbout", "recursion_stopper",
  "config_version", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    43,
      45,    44
};
# endif

#define YYPACT_NINF -135

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-135)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -135,     5,  -135,  -135,   -11,    64,    68,    77,    79,    84,
      94,  -135,  -135,  -135,   111,   -19,    31,    40,    44,  -135,
     117,    48,    51,    67,    69,   118,   120,   132,   148,   196,
     149,    74,   150,   151,   153,   243,   243,    28,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,   154,  -135,  -135,  -135,  -135,  -135,  -135,   196,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,    37,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,    20,     6,    80,     6,
      80,  -135,  -135,  -135,  -135,    12,  -135,  -135,  -135,  -135,
    -135,    37,   196,   196,   155,    80,  -135,    80,  -135,  -135,
     119,  -135,  -135,  -135,  -135,  -135,  -135,    93,  -135,  -135,
    -135,  -135,   195,  -135
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,    40,     0,     0,     0,     0,     0,     0,
       0,   101,    38,    39,     0,     0,     0,     0,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    35,
       2,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    18,    22,    17,    33,    34,    32,
      29,    21,    19,    27,    25,    26,    30,    24,    31,    23,
      28,    20,     0,    82,    83,    85,    89,    87,   100,     0,
     102,   103,   104,   105,   115,   117,   118,   119,    97,   106,
     107,   108,   109,   111,   112,   113,   114,   110,    94,    95,
      96,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    68,    69,    99,    53,    55,    54,
      98,   120,   121,   116,   122,   123,    50,     0,     0,     0,
       0,    50,    47,    48,    43,     0,    81,     3,     3,     3,
       3,    93,     0,     0,     0,     0,    41,     0,    42,    46,
       0,    84,    86,    90,    88,    51,    52,    49,    44,    45,
       3,    91,     0,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,     0,  -135,  -135,  -135,  -135,   -44,   -33,   -34,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -134,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   160,    40,    41,    42,    43,   144,   137,   126,   127,
     128,   129,    44,    45,    46,   147,    47,   148,    48,   150,
      49,   149,   161,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       1,   138,   140,   139,   145,     2,     3,    72,     4,     5,
       6,     7,     8,     9,   162,   163,   164,    10,    11,    12,
      13,    80,    81,    14,   101,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   142,    26,    27,    28,
      29,    30,    31,    32,   -56,   151,   141,    33,    34,    35,
      36,    37,   142,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,    82,    83,   120,   121,   122,   123,   124,   125,    38,
      84,    85,    73,    39,    86,    87,    74,   154,    89,    90,
     143,    91,    92,   154,   156,    75,   158,    76,   -56,   -56,
     -56,   159,    77,   155,   142,   157,   143,    93,    94,    95,
      96,   168,    78,   169,   131,   132,   152,   153,   165,   166,
       3,   167,     4,     5,     6,     7,     8,     9,   170,   171,
      79,    10,    11,    12,    13,    88,    97,    14,    98,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      99,    26,    27,    28,    29,    30,    31,    32,   143,   152,
     153,    33,    34,    35,    36,    37,   100,   130,   133,   134,
     172,   135,   146,   141,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     3,    39,     4,     5,
       6,     7,     8,     9,     0,   173,     0,    10,    11,    12,
      13,     0,     0,    14,   101,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,     0,    26,    27,    28,
      29,    30,    31,    32,     0,     0,     0,    33,    34,    35,
      36,    37,     0,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   136,     0,   120,   121,   122,   123,   124,   125,    38,
       0,     0,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,     0,     0,
     120,   121,   122,   123,   124,   125
};

static const yytype_int16 yycheck[] =
{
       0,    35,    36,    36,    37,     0,     1,    18,     3,     4,
       5,     6,     7,     8,   148,   149,   150,    12,    13,    14,
      15,    40,    41,    18,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    24,    32,    33,    34,
      35,    36,    37,    38,    24,    79,    18,    42,    43,    44,
      45,    46,    24,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    40,    41,    67,    68,    69,    70,    71,    72,    74,
      40,    41,    18,    78,    40,    41,    18,    81,    40,    41,
      78,    40,    41,    81,   138,    18,   140,    18,    78,    79,
      80,   145,    18,   137,    24,   139,    78,    40,    41,    40,
      41,   155,    18,   157,    40,    41,    79,    80,   152,   153,
       1,   154,     3,     4,     5,     6,     7,     8,     9,    10,
      19,    12,    13,    14,    15,    18,    18,    18,    18,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      18,    32,    33,    34,    35,    36,    37,    38,    78,    79,
      80,    42,    43,    44,    45,    46,    18,    18,    18,    18,
     170,    18,    18,    18,    81,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,     1,    78,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    13,    14,
      15,    -1,    -1,    18,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    18,    -1,    67,    68,    69,    70,    71,    72,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    -1,    -1,
      67,    68,    69,    70,    71,    72
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    83,     0,     1,     3,     4,     5,     6,     7,     8,
      12,    13,    14,    15,    18,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    32,    33,    34,    35,
      36,    37,    38,    42,    43,    44,    45,    46,    74,    78,
      84,    85,    86,    87,    94,    95,    96,    98,   100,   102,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    18,    18,    18,    18,    18,    18,    18,    19,
      40,    41,    40,    41,    40,    41,    40,    41,    18,    40,
      41,    40,    41,    40,    41,    40,    41,    18,    18,    18,
      18,    18,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      67,    68,    69,    70,    71,    72,    90,    91,    92,    93,
      18,    40,    41,    18,    18,    18,    18,    89,    90,    89,
      90,    18,    24,    78,    88,    89,    18,    97,    99,   103,
     101,    90,    79,    80,    81,    90,    88,    90,    88,    88,
      83,   104,   104,   104,   104,    90,    90,    89,    88,    88,
       9,    10,    83,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    86,    87,    85,    86,    87,    88,    88,    89,
      89,    90,    90,    90,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    93,    93,    93,    93,    93,    93,
      93,    94,    95,    97,    96,    99,    98,   101,   100,   103,
     102,   104,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   119,   119,   120,   120,   121,   122,   121,   123,   123,
     124,   124,   125,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     2,     4,     4,     3,     1,     1,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     2,     4,     3,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 35:
#line 165 "src/conf_yacc.y" /* yacc.c:1646  */
    {
            newlinelastinconfig=1;
	    YYACCEPT;
          }
#line 1600 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 37:
#line 170 "src/conf_yacc.y" /* yacc.c:1646  */
    {
          error(220,"Got @@dbspec.Stopping\n");
	  YYACCEPT;
          }
#line 1609 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 38:
#line 174 "src/conf_yacc.y" /* yacc.c:1646  */
    {
	  error(220,"Got @@begin_db. Stopping\n");
	  YYACCEPT;
          }
#line 1618 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 39:
#line 178 "src/conf_yacc.y" /* yacc.c:1646  */
    {
	  conferror("Error while reading configuration");
          }
#line 1626 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 40:
#line 181 "src/conf_yacc.y" /* yacc.c:1646  */
    {
	  conferror("Error while reading configuration");
	  YYABORT;
          }
#line 1635 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 41:
#line 187 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-2].s)); conf->selrxlst=append_rxlist((yyvsp[-2].s),(yyvsp[-1].i),conf->selrxlst, RESTRICTION_NULL); }
#line 1641 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 42:
#line 190 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-2].s)); conf->equrxlst=append_rxlist((yyvsp[-2].s),(yyvsp[-1].i),conf->equrxlst, RESTRICTION_NULL); }
#line 1647 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 43:
#line 193 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-1].s)); conf->negrxlst=append_rxlist((yyvsp[-1].s),0,conf->negrxlst, RESTRICTION_NULL); }
#line 1653 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 44:
#line 196 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-3].s)); conf->selrxlst=append_rxlist((yyvsp[-3].s),(yyvsp[-1].i),conf->selrxlst, (yyvsp[-2].r)); }
#line 1659 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 45:
#line 199 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-3].s)); conf->equrxlst=append_rxlist((yyvsp[-3].s),(yyvsp[-1].i),conf->equrxlst, (yyvsp[-2].r)); }
#line 1665 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 46:
#line 202 "src/conf_yacc.y" /* yacc.c:1646  */
    { decode_string((yyvsp[-2].s)); conf->negrxlst=append_rxlist((yyvsp[-2].s),0,conf->negrxlst, (yyvsp[-1].r)); }
#line 1671 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 48:
#line 205 "src/conf_yacc.y" /* yacc.c:1646  */
    {
            newlinelastinconfig=0;
	    YYACCEPT;
          }
#line 1680 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 49:
#line 210 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.r) =(yyvsp[-2].r)  | (yyvsp[0].r) ; }
#line 1686 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 50:
#line 211 "src/conf_yacc.y" /* yacc.c:1646  */
    {
       if((retval=get_restrictionval((yyvsp[0].s))) != RESTRICTION_NULL) {
            (yyval.r)=retval;
       } else {
            conf_lineno++;
            conferror("Error in restriction");
            YYABORT;
       }
    }
#line 1700 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 51:
#line 221 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[-2].i)  | (yyvsp[0].i) ; }
#line 1706 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 52:
#line 222 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[-2].i)  & (~(yyvsp[0].i) ); }
#line 1712 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 53:
#line 223 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1718 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 54:
#line 225 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ; }
#line 1724 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 55:
#line 226 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ; }
#line 1730 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 56:
#line 227 "src/conf_yacc.y" /* yacc.c:1646  */
    { if((retval=get_groupval((yyvsp[0].s))) != DB_ATTR_UNDEF) {
	    (yyval.i)=retval;
	  }
	  else {
		  conf_lineno++; // Hack
	    conferror("Error in expression");
	    YYABORT;
	  }
	  }
#line 1744 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 57:
#line 237 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1750 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 58:
#line 237 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1756 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 59:
#line 238 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1762 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1768 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 61:
#line 239 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1774 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 62:
#line 239 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1780 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 63:
#line 239 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1786 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 64:
#line 240 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1792 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 65:
#line 240 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1798 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 66:
#line 241 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1804 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 67:
#line 241 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1810 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 68:
#line 241 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) = (yyvsp[0].i);}
#line 1816 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 69:
#line 242 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) = (yyvsp[0].i);}
#line 1822 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 70:
#line 242 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1828 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 71:
#line 242 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1834 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 72:
#line 243 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1840 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 73:
#line 243 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1846 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1852 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 75:
#line 245 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1858 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 76:
#line 245 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1864 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 77:
#line 246 "src/conf_yacc.y" /* yacc.c:1646  */
    {(yyval.i) =(yyvsp[0].i) ;}
#line 1870 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 78:
#line 246 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1876 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 79:
#line 246 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1882 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 80:
#line 247 "src/conf_yacc.y" /* yacc.c:1646  */
    { (yyval.i) =(yyvsp[0].i) ;}
#line 1888 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 81:
#line 249 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_define((yyvsp[-1].s),(yyvsp[0].s)); }
#line 1894 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 82:
#line 251 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_undefine((yyvsp[0].s)); }
#line 1900 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 83:
#line 253 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
  if(do_ifxdef(1,(yyvsp[0].s))==-1){
    error(0,"ifdef error\n");
    YYABORT; 
  };
 }
#line 1911 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 85:
#line 260 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
  if(do_ifxdef(0,(yyvsp[0].s))==-1){
    error(0,"ifndef error\n");
    YYABORT; 
  };
 }
#line 1922 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 86:
#line 265 "src/conf_yacc.y" /* yacc.c:1646  */
    { error(220,"Ifndef statement ended\n");}
#line 1928 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 87:
#line 267 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
  if(do_ifxhost(1,(yyvsp[0].s))==-1){
    error(0,"ifhost error\n");
    YYABORT;
  };
 }
#line 1939 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 89:
#line 274 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
  if(do_ifxhost(0,(yyvsp[0].s))==-1){
    error(0,"ifnhost error\n");
    YYABORT; 
  };
 }
#line 1950 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 91:
#line 281 "src/conf_yacc.y" /* yacc.c:1646  */
    { error(220,"Endif stmt matched\n");}
#line 1956 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 92:
#line 282 "src/conf_yacc.y" /* yacc.c:1646  */
    {error(220,"Endifelse stmt matched\n");}
#line 1962 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 93:
#line 284 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_groupdef((yyvsp[-2].s),(yyvsp[0].i)); }
#line 1968 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 94:
#line 286 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_dbdef(DB_OLD,(yyvsp[0].s)); }
#line 1974 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 95:
#line 288 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_dbdef(DB_WRITE,(yyvsp[0].s)); }
#line 1980 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 96:
#line 290 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_dbdef(DB_NEW,(yyvsp[0].s)); }
#line 1986 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 97:
#line 292 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_verbdef((yyvsp[0].s)); }
#line 1992 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 98:
#line 294 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_repurldef((yyvsp[0].s)); }
#line 1998 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 99:
#line 296 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  DB_ATTR_TYPE attr;
  if((attr = (yyvsp[0].i)&(~DB_HASHES))){
    error(0, "%li: invalid attribute(s) in database_attrs: %llx\n", conf_lineno-1, attr);
    YYABORT;
  }
  conf->db_attrs=(yyvsp[0].i);
}
#line 2011 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 100:
#line 305 "src/conf_yacc.y" /* yacc.c:1646  */
    {
#ifdef WITH_MHASH
  conf->do_configmd=1;
  conf->old_confmdstr=strdup((yyvsp[0].s));
#endif
}
#line 2022 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 101:
#line 312 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  YYACCEPT;
}
#line 2030 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 102:
#line 316 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=1;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
#line 2042 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 103:
#line 324 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
#ifdef WITH_ACL
  conf->no_acl_on_symlinks=0;
#else
  error(0,"ACL-support not compiled in.\n");
#endif
}
#line 2054 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 104:
#line 332 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->warn_dead_symlinks=1;
}
#line 2062 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 105:
#line 336 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->warn_dead_symlinks=0;
}
#line 2070 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 106:
#line 340 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->database_add_metadata=1;
}
#line 2078 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 107:
#line 344 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->database_add_metadata=0;
}
#line 2086 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 108:
#line 348 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_detailed_init=1;
}
#line 2094 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 109:
#line 352 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_detailed_init=0;
}
#line 2102 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 110:
#line 356 "src/conf_yacc.y" /* yacc.c:1646  */
    {
#ifdef WITH_E2FSATTRS
  do_report_ignore_e2fsattrs((yyvsp[0].s));
#else
  error(0,"e2fsattrs-support not compiled in.\n");
#endif
}
#line 2114 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 111:
#line 364 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_base16=1;
}
#line 2122 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 112:
#line 368 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_base16=0;
}
#line 2130 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 113:
#line 372 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_quiet=1;
}
#line 2138 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 114:
#line 376 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->report_quiet=0;
}
#line 2146 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 115:
#line 380 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->grouped=1;
}
#line 2154 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 116:
#line 384 "src/conf_yacc.y" /* yacc.c:1646  */
    { do_rootprefix((yyvsp[0].s)); }
#line 2160 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 117:
#line 386 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->grouped=0;
}
#line 2168 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 118:
#line 390 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->summarize_changes=1;
}
#line 2176 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 119:
#line 394 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->summarize_changes=0;
}
#line 2184 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 120:
#line 398 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=1; 
#else 
 error(0,"Gzip-support not compiled in.\n");
#endif
}
#line 2196 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 121:
#line 405 "src/conf_yacc.y" /* yacc.c:1646  */
    { 
#ifdef WITH_ZLIB
conf->gzip_dbout=0; 
#endif
}
#line 2206 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 122:
#line 411 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  /* FIXME implement me */  
  
}
#line 2215 "src/conf_yacc.c" /* yacc.c:1646  */
    break;

  case 123:
#line 416 "src/conf_yacc.y" /* yacc.c:1646  */
    {
  conf->config_version=strdup((yyvsp[0].s));
}
#line 2223 "src/conf_yacc.c" /* yacc.c:1646  */
    break;


#line 2227 "src/conf_yacc.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 420 "src/conf_yacc.y" /* yacc.c:1906  */



void conferror(const char *msg){
  error(0,"%li:%s:%s\n",conf_lineno-1,msg,conftext);

}

const char* aide_key_1=CONFHMACKEY_01;
const char* db_key_1=DBHMACKEY_01;

