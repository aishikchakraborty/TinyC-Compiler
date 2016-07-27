/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     RESTRICT_KEYWORD = 258,
     UNSIGNED_KEYWORD = 259,
     AUTO_KEYWORD = 260,
     ENUM_KEYWORD = 261,
     BREAK_KEYWORD = 262,
     EXTERN_KEYWORD = 263,
     RETURN_KEYWORD = 264,
     VOID_KEYWORD = 265,
     CASE_KEYWORD = 266,
     FLOAT_KEYWORD = 267,
     SHORT_KEYWORD = 268,
     VOLATILE_KEYWORD = 269,
     CHAR_KEYWORD = 270,
     FOR_KEYWORD = 271,
     SIGNED_KEYWORD = 272,
     WHILE_KEYWORD = 273,
     CONST_KEYWORD = 274,
     GOTO_KEYWORD = 275,
     SIZEOF_KEYWORD = 276,
     BOOL_KEYWORD = 277,
     CONTINUE_KEYWORD = 278,
     IF_KEYWORD = 279,
     STATIC_KEYWORD = 280,
     COMPLEX_KEYWORD = 281,
     DEFAULT_KEYWORD = 282,
     INLINE_KEYWORD = 283,
     STRUCT_KEYWORD = 284,
     IMAGINARY_KEYWORD = 285,
     DO_KEYWORD = 286,
     INT_KEYWORD = 287,
     SWITCH_KEYWORD = 288,
     DOUBLE_KEYWORD = 289,
     LONG_KEYWORD = 290,
     TYPEDEF_KEYWORD = 291,
     ELSE_KEYWORD = 292,
     REGISTER_KEYWORD = 293,
     UNION_KEYWORD = 294,
     IDENTIFIER = 295,
     INT_CONSTANT = 296,
     FLOAT_CONSTANT = 297,
     CHAR_CONSTANT = 298,
     STRING_LITERAL = 299,
     POINTER_OP = 300,
     INCREMENT_OP = 301,
     DECREMENT_OP = 302,
     LEFT_SHIFT = 303,
     RIGHT_SHIFT = 304,
     LESS_EQ_OP = 305,
     GREATER_EQ_OP = 306,
     EQ_OP = 307,
     NOT_EQ_OP = 308,
     AND_OP = 309,
     OR_OP = 310,
     ELLIPSIS = 311,
     MUL_ASSIGNMENT = 312,
     DIV_ASSIGNMENT = 313,
     MOD_ASSIGNMENT = 314,
     ADD_ASSIGNMENT = 315,
     SUB_ASSIGNMENT = 316,
     LEFT_ASSIGNMENT = 317,
     RIGHT_ASSIGNMENT = 318,
     AND_ASSIGNMENT = 319,
     XOR_ASSIGNMENT = 320,
     OR_ASSIGNMENT = 321
   };
#endif
/* Tokens.  */
#define RESTRICT_KEYWORD 258
#define UNSIGNED_KEYWORD 259
#define AUTO_KEYWORD 260
#define ENUM_KEYWORD 261
#define BREAK_KEYWORD 262
#define EXTERN_KEYWORD 263
#define RETURN_KEYWORD 264
#define VOID_KEYWORD 265
#define CASE_KEYWORD 266
#define FLOAT_KEYWORD 267
#define SHORT_KEYWORD 268
#define VOLATILE_KEYWORD 269
#define CHAR_KEYWORD 270
#define FOR_KEYWORD 271
#define SIGNED_KEYWORD 272
#define WHILE_KEYWORD 273
#define CONST_KEYWORD 274
#define GOTO_KEYWORD 275
#define SIZEOF_KEYWORD 276
#define BOOL_KEYWORD 277
#define CONTINUE_KEYWORD 278
#define IF_KEYWORD 279
#define STATIC_KEYWORD 280
#define COMPLEX_KEYWORD 281
#define DEFAULT_KEYWORD 282
#define INLINE_KEYWORD 283
#define STRUCT_KEYWORD 284
#define IMAGINARY_KEYWORD 285
#define DO_KEYWORD 286
#define INT_KEYWORD 287
#define SWITCH_KEYWORD 288
#define DOUBLE_KEYWORD 289
#define LONG_KEYWORD 290
#define TYPEDEF_KEYWORD 291
#define ELSE_KEYWORD 292
#define REGISTER_KEYWORD 293
#define UNION_KEYWORD 294
#define IDENTIFIER 295
#define INT_CONSTANT 296
#define FLOAT_CONSTANT 297
#define CHAR_CONSTANT 298
#define STRING_LITERAL 299
#define POINTER_OP 300
#define INCREMENT_OP 301
#define DECREMENT_OP 302
#define LEFT_SHIFT 303
#define RIGHT_SHIFT 304
#define LESS_EQ_OP 305
#define GREATER_EQ_OP 306
#define EQ_OP 307
#define NOT_EQ_OP 308
#define AND_OP 309
#define OR_OP 310
#define ELLIPSIS 311
#define MUL_ASSIGNMENT 312
#define DIV_ASSIGNMENT 313
#define MOD_ASSIGNMENT 314
#define ADD_ASSIGNMENT 315
#define SUB_ASSIGNMENT 316
#define LEFT_ASSIGNMENT 317
#define RIGHT_ASSIGNMENT 318
#define AND_ASSIGNMENT 319
#define XOR_ASSIGNMENT 320
#define OR_ASSIGNMENT 321




/* Copy the first part of user declarations.  */
#line 1 "ass5_13CS30041.y"
 /* C Declarations and Definitions */
#include <cstring>
#include <iostream>
using namespace std;
extern int yylex();
extern int yydebug;
#include "ass5_13CS30041_translator.h"

using namespace std;

extern int yylex();
//extern int yyparse();
void yyerror(string s);

Quad_Array Q_arr;
symboltable sym;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 21 "ass5_13CS30041.y"
{
  int intval;
  float floatval;
  char *charval;
  string *str;
  //exp_attr *expr_attr;
}
/* Line 193 of yacc.c.  */
#line 254 "ass5_13CS30041.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 267 "ass5_13CS30041.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1282

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  66
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNRULES -- Number of states.  */
#define YYNSTATES  345

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    82,    75,     2,
      67,    68,    76,    77,    74,    78,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    88,    90,
      83,    89,    84,    87,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    86,    73,    79,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      24,    28,    33,    37,    41,    44,    47,    54,    62,    64,
      68,    70,    73,    76,    79,    82,    87,    89,    91,    93,
      95,    97,    99,   101,   106,   108,   112,   116,   120,   122,
     126,   130,   132,   136,   140,   142,   146,   150,   154,   158,
     160,   164,   168,   170,   174,   176,   180,   182,   186,   188,
     192,   194,   198,   200,   206,   208,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   240,
     242,   245,   249,   251,   254,   256,   259,   261,   264,   266,
     269,   271,   275,   277,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   320,   322,   325,   330,   336,   342,   349,
     352,   354,   358,   360,   364,   366,   368,   370,   372,   374,
     377,   379,   381,   385,   391,   398,   405,   411,   416,   421,
     423,   424,   426,   427,   429,   430,   432,   435,   438,   442,
     444,   447,   449,   453,   455,   459,   462,   464,   466,   470,
     472,   474,   478,   483,   485,   488,   492,   497,   500,   502,
     505,   509,   512,   514,   516,   518,   520,   522,   524,   528,
     533,   537,   540,   544,   546,   549,   551,   553,   555,   558,
     564,   572,   578,   584,   592,   602,   611,   613,   614,   618,
     621,   624,   627,   631,   633,   636,   638,   640,   645,   649,
     651
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     153,     0,    -1,    40,    -1,    41,    -1,    42,    -1,    43,
      -1,    44,    -1,    67,   111,    68,    -1,    92,    -1,    93,
      69,   111,    70,    -1,    93,    67,    68,    -1,    93,    67,
      94,    68,    -1,    93,    71,    40,    -1,    93,    45,    40,
      -1,    93,    46,    -1,    93,    47,    -1,    67,   137,    68,
      72,   139,    73,    -1,    67,   137,    68,    72,   139,    74,
      73,    -1,   109,    -1,    94,    74,   109,    -1,    93,    -1,
      46,    95,    -1,    47,    95,    -1,    96,    97,    -1,    21,
      95,    -1,    21,    67,   137,    68,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    95,
      -1,    67,   137,    68,    97,    -1,    97,    -1,    98,    76,
      97,    -1,    98,    81,    97,    -1,    98,    82,    97,    -1,
      98,    -1,    99,    77,    98,    -1,    99,    78,    98,    -1,
      99,    -1,   100,    48,    99,    -1,   100,    49,    99,    -1,
     100,    -1,   101,    83,   100,    -1,   101,    84,   100,    -1,
     101,    50,   100,    -1,   101,    51,   100,    -1,   101,    -1,
     102,    52,   101,    -1,   102,    53,   101,    -1,   102,    -1,
     103,    75,   102,    -1,   103,    -1,   104,    85,   103,    -1,
     104,    -1,   105,    86,   104,    -1,   105,    -1,   106,    54,
     105,    -1,   106,    -1,   107,    55,   106,    -1,   107,    -1,
     107,    87,   111,    88,   108,    -1,   108,    -1,    95,   110,
     109,    -1,    89,    -1,    57,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,
      65,    -1,    66,    -1,   109,    -1,   111,    74,   109,    -1,
     108,    -1,   114,    90,    -1,   114,   115,    90,    -1,   117,
      -1,   117,   114,    -1,   118,    -1,   118,   114,    -1,   124,
      -1,   124,   114,    -1,   125,    -1,   125,   114,    -1,   116,
      -1,   115,    74,   116,    -1,   126,    -1,   126,    89,   138,
      -1,     8,    -1,    25,    -1,     5,    -1,    38,    -1,    10,
      -1,    15,    -1,    13,    -1,    32,    -1,    35,    -1,    12,
      -1,    34,    -1,    17,    -1,     4,    -1,    22,    -1,    26,
      -1,    30,    -1,   120,    -1,   118,    -1,   118,   119,    -1,
     124,    -1,   124,   119,    -1,     6,    72,   121,    73,    -1,
       6,    40,    72,   121,    73,    -1,     6,    72,   121,    74,
      73,    -1,     6,    40,    72,   121,    74,    73,    -1,     6,
      40,    -1,   122,    -1,   121,    74,   122,    -1,   123,    -1,
     123,    89,   112,    -1,    40,    -1,    19,    -1,     3,    -1,
      14,    -1,    28,    -1,   131,   127,    -1,   127,    -1,    40,
      -1,    67,   126,    68,    -1,   127,    69,   130,   129,    70,
      -1,   127,    69,    25,   130,   109,    70,    -1,   127,    69,
     132,    25,   109,    70,    -1,   127,    69,   130,    76,    70,
      -1,   127,    67,   133,    68,    -1,   127,    67,   128,    68,
      -1,   136,    -1,    -1,   109,    -1,    -1,   132,    -1,    -1,
      76,    -1,    76,   132,    -1,    76,   131,    -1,    76,   132,
     131,    -1,   124,    -1,   132,   124,    -1,   134,    -1,   134,
      74,    56,    -1,   135,    -1,   134,    74,   135,    -1,   114,
     126,    -1,   114,    -1,    40,    -1,   136,    74,    40,    -1,
     119,    -1,   109,    -1,    72,   139,    73,    -1,    72,   139,
      74,    73,    -1,   138,    -1,   140,   138,    -1,   139,    74,
     138,    -1,   139,    74,   140,   138,    -1,   141,    89,    -1,
     142,    -1,   141,   142,    -1,    69,   112,    70,    -1,    71,
      40,    -1,   144,    -1,   145,    -1,   148,    -1,   149,    -1,
     150,    -1,   152,    -1,    40,    88,   143,    -1,    11,   112,
      88,   143,    -1,    27,    88,   143,    -1,    72,    73,    -1,
      72,   146,    73,    -1,   147,    -1,   146,   147,    -1,   113,
      -1,   143,    -1,    90,    -1,   111,    90,    -1,    24,    67,
     111,    68,   143,    -1,    24,    67,   111,    68,   143,    37,
     143,    -1,    33,    67,   111,    68,   143,    -1,    18,    67,
     111,    68,   143,    -1,    31,   143,    18,    67,   111,    68,
      90,    -1,    16,    67,   151,    90,   151,    90,   151,    68,
     143,    -1,    16,    67,   113,   151,    90,   151,    68,   143,
      -1,   111,    -1,    -1,    20,    40,    90,    -1,    23,    90,
      -1,     7,    90,    -1,     9,    90,    -1,     9,   111,    90,
      -1,   154,    -1,   153,   154,    -1,   155,    -1,   113,    -1,
     114,   126,   156,   145,    -1,   114,   126,   145,    -1,   113,
      -1,   156,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   135,   135,   142,   153,   164,   175,   176,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   193,   194,
     198,   199,   200,   201,   202,   203,   207,   208,   209,   210,
     211,   212,   216,   217,   221,   222,   223,   224,   228,   229,
     230,   234,   235,   236,   239,   240,   241,   242,   243,   246,
     247,   248,   252,   253,   257,   259,   263,   265,   269,   270,
     275,   277,   281,   283,   287,   288,   293,   295,   297,   299,
     301,   303,   305,   307,   309,   311,   313,   317,   319,   323,
     331,   333,   338,   339,   340,   341,   342,   343,   344,   345,
     350,   351,   356,   357,   360,   361,   362,   363,   367,   371,
     377,   379,   386,   388,   390,   396,   398,   400,   402,   404,
     406,   410,   415,   417,   418,   421,   422,   423,   424,   425,
     428,   429,   432,   433,   436,   439,   440,   441,   444,   446,
     447,   456,   457,   458,   459,   460,   461,   462,   463,   466,
     467,   470,   471,   475,   476,   480,   481,   482,   483,   486,
     487,   490,   491,   494,   495,   498,   499,   503,   504,   508,
     512,   513,   514,   518,   519,   520,   521,   525,   529,   530,
     533,   534,   541,   542,   543,   544,   545,   546,   549,   550,
     551,   555,   556,   560,   561,   564,   565,   568,   569,   572,
     573,   574,   577,   578,   579,   580,   583,   584,   587,   588,
     589,   590,   591,   598,   599,   603,   604,   608,   609,   612,
     613
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESTRICT_KEYWORD", "UNSIGNED_KEYWORD",
  "AUTO_KEYWORD", "ENUM_KEYWORD", "BREAK_KEYWORD", "EXTERN_KEYWORD",
  "RETURN_KEYWORD", "VOID_KEYWORD", "CASE_KEYWORD", "FLOAT_KEYWORD",
  "SHORT_KEYWORD", "VOLATILE_KEYWORD", "CHAR_KEYWORD", "FOR_KEYWORD",
  "SIGNED_KEYWORD", "WHILE_KEYWORD", "CONST_KEYWORD", "GOTO_KEYWORD",
  "SIZEOF_KEYWORD", "BOOL_KEYWORD", "CONTINUE_KEYWORD", "IF_KEYWORD",
  "STATIC_KEYWORD", "COMPLEX_KEYWORD", "DEFAULT_KEYWORD", "INLINE_KEYWORD",
  "STRUCT_KEYWORD", "IMAGINARY_KEYWORD", "DO_KEYWORD", "INT_KEYWORD",
  "SWITCH_KEYWORD", "DOUBLE_KEYWORD", "LONG_KEYWORD", "TYPEDEF_KEYWORD",
  "ELSE_KEYWORD", "REGISTER_KEYWORD", "UNION_KEYWORD", "IDENTIFIER",
  "INT_CONSTANT", "FLOAT_CONSTANT", "CHAR_CONSTANT", "STRING_LITERAL",
  "POINTER_OP", "INCREMENT_OP", "DECREMENT_OP", "LEFT_SHIFT",
  "RIGHT_SHIFT", "LESS_EQ_OP", "GREATER_EQ_OP", "EQ_OP", "NOT_EQ_OP",
  "AND_OP", "OR_OP", "ELLIPSIS", "MUL_ASSIGNMENT", "DIV_ASSIGNMENT",
  "MOD_ASSIGNMENT", "ADD_ASSIGNMENT", "SUB_ASSIGNMENT", "LEFT_ASSIGNMENT",
  "RIGHT_ASSIGNMENT", "AND_ASSIGNMENT", "XOR_ASSIGNMENT", "OR_ASSIGNMENT",
  "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'", "','", "'&'", "'*'",
  "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list", "enum_specifier",
  "enumerator_list", "enumerator", "enumeration_constant",
  "type_qualifier", "function_specifier", "declarator",
  "direct_declarator", "identifier_list_opt", "assignment_expression_opt",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "expression_opt", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,   123,   125,    44,    38,    42,    43,    45,   126,
      33,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    92,    92,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    95,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   100,   101,   101,   101,   101,   101,   102,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   111,   111,   112,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   117,   117,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   120,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   124,   124,   124,   125,   126,
     126,   127,   127,   127,   127,   127,   127,   127,   127,   128,
     128,   129,   129,   130,   130,   131,   131,   131,   131,   132,
     132,   133,   133,   134,   134,   135,   135,   136,   136,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   141,   141,
     142,   142,   143,   143,   143,   143,   143,   143,   144,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   152,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       3,     4,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     4,     5,     5,     6,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     1,     3,     5,     6,     6,     5,     4,     4,     1,
       0,     1,     0,     1,     0,     1,     2,     2,     3,     1,
       2,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     3,     4,     1,     2,     3,     4,     2,     1,     2,
       3,     2,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     1,     2,     1,     1,     1,     2,     5,
       7,     5,     5,     7,     9,     8,     1,     0,     3,     2,
       2,     2,     3,     1,     2,     1,     1,     4,     3,     1,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   126,   106,    96,     0,    94,    98,   103,   100,   127,
      99,   105,   125,   107,    95,   108,   128,   109,   101,   104,
     102,    97,   206,     0,    82,    84,   110,    86,    88,     0,
     203,   205,   119,     0,   131,     0,   145,    80,     0,    90,
      92,   130,     0,    83,    85,    87,    89,     1,   204,     0,
     124,     0,   120,   122,     0,   149,   147,   146,     0,    81,
       0,     0,   209,     0,   208,     0,   140,   144,   129,     0,
     115,     0,     0,   132,   150,   148,    91,    92,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     0,     0,     0,   181,    26,
      27,    28,    29,    30,    31,   187,     8,    20,    32,     0,
      34,    38,    41,    44,    49,    52,    54,    56,    58,    60,
      62,    64,    77,     0,   185,   186,   172,   173,     0,   183,
     174,   175,   176,   177,     2,     0,   160,    93,   210,   207,
     157,   156,     0,     0,   151,   153,   139,   144,   142,   143,
     116,     0,   117,   121,    32,    79,   123,   200,   201,     0,
       0,   197,     0,     0,     0,    24,   199,     0,     0,     0,
       0,     0,     0,    21,    22,     0,   111,   159,   113,     0,
       0,    14,    15,     0,     0,     0,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    66,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   188,
     182,   184,     0,     0,   163,     0,     0,     0,   168,   155,
     138,   137,     0,     0,     0,   143,    27,   141,     0,     0,
     118,   202,     0,   196,   197,     0,     0,   198,     0,     0,
     180,     0,     0,   178,     0,     7,   112,   114,     0,    13,
      10,     0,    18,     0,    12,    65,    35,    36,    37,    39,
      40,    42,    43,    47,    48,    45,    46,    50,    51,    53,
      55,    57,    59,    61,     0,    78,     0,   171,   161,     0,
     164,   167,   169,   152,   154,   158,     0,   136,   133,     0,
     179,     0,   197,     0,    25,     0,     0,     0,     0,     0,
      33,    11,     0,     9,     0,   170,   162,   165,     0,   134,
     135,   197,     0,   192,   189,     0,   191,     0,    19,    63,
     166,     0,   197,     0,     0,    16,     0,     0,     0,   190,
     193,    17,   195,     0,   194
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   106,   107,   261,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   197,
     123,   156,    22,    63,    38,    39,    24,    25,   177,    26,
      51,    52,    53,    27,    28,    77,    41,   142,   238,   148,
      42,    57,   143,   144,   145,   146,   179,   224,   225,   226,
     227,   228,   125,   126,   127,   128,   129,   130,   131,   132,
     245,   133,    29,    30,    31,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -283
static const yytype_int16 yypact[] =
{
    1214,  -283,  -283,  -283,   -16,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,   -27,  1214,  1214,  -283,  1214,  1214,  1140,
    -283,  -283,   -30,   -24,  -283,   -19,    32,  -283,    37,  -283,
     459,   -44,    -6,  -283,  -283,  -283,  -283,  -283,  -283,   -24,
    -283,    -4,  -283,    -8,     3,  -283,  -283,    32,   -19,  -283,
     292,   846,  -283,   -27,  -283,   727,  1176,   106,   -44,    98,
    -283,   -32,   922,  -283,  -283,  -283,  -283,    13,     9,   726,
     922,    75,    84,    97,   966,    66,   110,   113,   492,   156,
     131,  -283,  -283,  -283,  -283,   982,   982,   649,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,    72,   146,   922,
    -283,    71,   136,   167,   -18,   165,    85,   142,    83,   178,
     -10,  -283,  -283,    39,  -283,  -283,  -283,  -283,   380,  -283,
    -283,  -283,  -283,  -283,  -283,   802,  -283,  -283,  -283,  -283,
    -283,   -19,   168,   171,   169,  -283,   173,   109,  1026,   107,
    -283,   -23,  -283,  -283,  -283,  -283,  -283,  -283,  -283,    56,
     154,   571,   922,   159,   649,  -283,  -283,   922,   492,   235,
     922,   492,   649,  -283,  -283,     4,  1247,  -283,  1247,   187,
     216,  -283,  -283,   862,   922,   219,  -283,  -283,  -283,  -283,
    -283,  -283,  -283,  -283,  -283,  -283,  -283,   922,  -283,   922,
     922,   922,   922,   922,   922,   922,   922,   922,   922,   922,
     922,   922,   922,   922,   922,   922,   922,   922,   922,  -283,
    -283,  -283,   922,   224,  -283,   152,   846,    45,  -283,  -283,
    -283,  -283,  1104,   225,   922,   109,   196,  -283,   197,   922,
    -283,  -283,   492,   194,   922,   179,    70,  -283,   202,    81,
    -283,   204,    93,  -283,   205,  -283,  -283,  -283,   906,  -283,
    -283,   100,  -283,    10,  -283,  -283,  -283,  -283,  -283,    71,
      71,   136,   136,   167,   167,   167,   167,   -18,   -18,   165,
      85,   142,    83,   178,   -15,  -283,   207,  -283,  -283,   742,
    -283,  -283,  -283,  -283,  -283,  -283,   208,  -283,  -283,   209,
    -283,   182,   922,   492,   210,   492,   922,   492,   210,   802,
    -283,  -283,   922,  -283,   922,  -283,  -283,  -283,   846,  -283,
    -283,   922,   184,  -283,   243,   102,  -283,   157,  -283,  -283,
    -283,   213,   922,   492,   193,  -283,   786,   492,   217,  -283,
    -283,  -283,  -283,   492,  -283
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,  -283,   -20,  -283,   -95,    38,    40,    -9,
      51,    74,    76,    73,    69,    77,  -283,   -68,   -61,  -283,
     -69,   -77,   -21,     2,  -283,   230,  -283,   -82,  -140,  -283,
     241,   -51,  -283,   -14,  -283,   -17,   249,  -283,  -283,   145,
      22,   -56,  -283,  -283,    89,  -283,  -117,   -60,    19,  -282,
    -283,   104,   -83,  -283,    -3,  -283,   201,  -283,  -283,  -283,
    -235,  -283,  -283,   308,  -283,  -283
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     136,   137,    23,   160,   155,   169,    40,   318,    50,   301,
     159,   149,   155,    34,   198,   176,    50,    50,    54,    62,
     153,    34,    55,    66,    32,    67,    43,    44,   175,    45,
      46,    23,   206,   207,    34,     1,   256,    64,   257,   124,
      35,   152,    49,    74,   138,   216,     9,   248,    35,    36,
     240,    12,   154,    55,   318,   254,    33,    36,    56,   218,
     154,    35,   139,    37,   165,   208,   209,   322,   141,    70,
      71,    73,   255,   314,   136,   173,   174,   217,   218,    75,
     313,    72,   176,   178,   218,   250,   331,   237,   253,   154,
     176,   235,   243,   246,   176,   175,   176,   338,   249,   157,
     153,   252,    61,   175,   266,   267,   268,   124,    36,     1,
       1,    58,     1,   218,   222,   263,   223,   180,   181,   182,
       9,     9,   262,     9,   229,    12,    12,    59,    12,   219,
     218,   147,   239,    55,   291,    74,   265,   163,   303,   183,
     244,   184,   161,   185,   218,   286,   241,   199,   284,   305,
     178,   162,   200,   201,   155,   218,   166,   285,   178,   300,
     212,   307,   178,   310,   178,   136,   290,   218,   311,   214,
     334,   150,   151,   296,   312,   243,   218,   167,   299,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   273,   274,   275,
     276,   168,   154,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   202,   203,   204,   205,   210,   211,   171,
     323,    74,   324,   170,   326,   288,   289,   213,   136,   317,
     335,   336,   215,   243,   141,   196,   230,   325,   154,   231,
     269,   270,   242,   232,   271,   272,   329,   233,   136,   247,
     339,   328,   243,   251,   342,   258,   259,   136,   330,   264,
     344,   277,   278,   243,   287,   295,   297,   298,   218,   302,
     304,   306,   321,   308,   332,   136,   317,   315,   319,   320,
     333,   337,   309,   340,   282,   343,   279,   281,    76,   280,
      69,    68,   234,   283,   154,     1,     2,     3,     4,    78,
       5,    79,     6,    80,     7,     8,     9,    10,    81,    11,
      82,    12,    83,    84,    13,    85,    86,    14,    15,    87,
      16,   294,    17,    88,    18,    89,    19,    20,   327,   221,
      21,   292,    90,    91,    92,    93,    94,    48,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,    60,    98,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   105,     1,     2,     3,     4,    78,     5,    79,
       6,    80,     7,     8,     9,    10,    81,    11,    82,    12,
      83,    84,    13,    85,    86,    14,    15,    87,    16,     0,
      17,    88,    18,    89,    19,    20,     0,     0,    21,     0,
      90,    91,    92,    93,    94,     0,    95,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,    60,   220,     0,    99,   100,   101,   102,   103,
     104,     0,     1,     2,     3,     4,     0,     5,     0,     6,
     105,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21,     0,    78,
       0,    79,     0,    80,     0,     0,     0,     0,    81,     0,
      82,     0,    83,    84,     0,    85,    86,     0,     0,    87,
       0,     0,     0,    88,     0,    89,     0,     0,     0,     0,
       0,    60,    90,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    97,
       0,     0,     0,     0,    60,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     1,     2,     3,     4,     0,     5,
       0,     6,   105,     7,     8,     9,    10,     0,    11,     0,
      12,     0,    84,    13,     0,     0,    14,    15,     0,    16,
       0,    17,     0,    18,     0,    19,    20,     0,     0,    21,
       0,   134,    91,    92,    93,    94,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,     0,     0,    99,   100,   101,   102,
     103,   104,     1,     2,     0,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
      84,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20,     0,     0,     0,     0,   134,
      91,    92,    93,    94,     0,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,     0,    99,   100,   101,   102,   103,   104,
       1,     2,     3,     4,     0,     5,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,    84,     0,    13,
       0,     0,    14,    15,     0,    16,     0,    17,     0,    18,
       0,    19,    20,    84,     0,    21,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,     0,    60,
       0,    99,   100,   101,   102,   103,   104,    84,     0,    97,
       0,   222,     0,   223,   135,   316,   158,    99,   100,   101,
     102,   103,   104,    84,     0,     0,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,    97,     0,   222,     0,   223,   135,   341,
       0,    99,   100,   101,   102,   103,   104,    84,     0,    97,
       0,   222,     0,   223,   135,     0,     0,    99,   100,   101,
     102,   103,   104,    84,     0,     0,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,   135,     0,
       0,    99,   100,   101,   102,   103,   104,    84,     0,    97,
     260,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,    84,     0,     0,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,    97,     0,     0,     0,     0,   309,     0,
       0,    99,   100,   101,   102,   103,   104,    84,     0,    97,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,    84,     0,     0,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,   134,    91,    92,    93,    94,     0,    95,    96,
       0,     0,     0,   164,     0,     0,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,    84,     0,   172,
       0,     0,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,   134,    91,    92,    93,
      94,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,     0,     0,     0,     0,     0,     0,
       0,    99,   236,   101,   102,   103,   104,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
      47,     0,    21,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
     293,     0,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,     0,    21,     1,
       2,     3,     4,     0,     5,     0,     6,     0,     7,     8,
       9,    10,     0,    11,     0,    12,     0,     0,    13,     0,
       0,    14,    15,     0,    16,     0,    17,     0,    18,     0,
      19,    20,     0,     0,    21,     0,   140,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       1,     2,    21,     4,     0,     0,     0,     6,     0,     7,
       8,     9,    10,     0,    11,     0,    12,     0,     0,    13,
       0,     0,     0,    15,     0,     0,     0,    17,     0,    18,
       0,    19,    20
};

static const yytype_int16 yycheck[] =
{
      61,    61,     0,    80,    72,    88,    23,   289,    40,   244,
      79,    67,    80,    40,   109,    97,    40,    40,    35,    40,
      71,    40,    36,    67,    40,    69,    24,    25,    97,    27,
      28,    29,    50,    51,    40,     3,   176,    40,   178,    60,
      67,    73,    72,    57,    65,    55,    14,   164,    67,    76,
      73,    19,    72,    67,   336,   172,    72,    76,    36,    74,
      80,    67,    65,    90,    84,    83,    84,   302,    66,    73,
      74,    68,    68,    88,   135,    95,    96,    87,    74,    57,
      70,    89,   164,    97,    74,   168,   321,   148,   171,   109,
     172,   147,   161,   162,   176,   164,   178,   332,   167,    90,
     151,   170,    89,   172,   199,   200,   201,   128,    76,     3,
       3,    74,     3,    74,    69,   184,    71,    45,    46,    47,
      14,    14,   183,    14,   141,    19,    19,    90,    19,    90,
      74,    25,    25,   147,    89,   149,   197,    40,    68,    67,
     161,    69,    67,    71,    74,   222,    90,    76,   217,    68,
     164,    67,    81,    82,   222,    74,    90,   218,   172,   242,
      75,    68,   176,   258,   178,   226,   226,    74,    68,    86,
      68,    73,    74,   234,    74,   244,    74,    67,   239,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   206,   207,   208,
     209,    88,   222,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    77,    78,    48,    49,    52,    53,    88,
     303,   235,   305,    67,   307,    73,    74,    85,   289,   289,
      73,    74,    54,   302,   232,    89,    68,   306,   258,    68,
     202,   203,    88,    74,   204,   205,   314,    74,   309,    90,
     333,   312,   321,    18,   337,    68,    40,   318,   318,    40,
     343,   210,   211,   332,    40,    40,    70,    70,    74,    90,
      68,    67,    90,    68,    90,   336,   336,    70,    70,    70,
      37,    68,    72,    90,   215,    68,   212,   214,    58,   213,
      49,    42,   147,   216,   314,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   232,    30,    31,    32,    33,    34,    35,   309,   128,
      38,   227,    40,    41,    42,    43,    44,    29,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    73,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,     3,     4,     5,     6,    -1,     8,    -1,    10,
      90,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    38,    -1,     7,
      -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    16,    -1,
      18,    -1,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,
      -1,    72,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,     3,     4,     5,     6,    -1,     8,
      -1,    10,    90,    12,    13,    14,    15,    -1,    17,    -1,
      19,    -1,    21,    22,    -1,    -1,    25,    26,    -1,    28,
      -1,    30,    -1,    32,    -1,    34,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    78,
      79,    80,     3,     4,    -1,     6,    -1,    -1,    -1,    10,
      -1,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    22,    -1,    -1,    -1,    26,    -1,    -1,    -1,    30,
      -1,    32,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    77,    78,    79,    80,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    21,    -1,    22,
      -1,    -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,
      -1,    34,    35,    21,    -1,    38,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    75,    76,    77,    78,    79,    80,    21,    -1,    67,
      -1,    69,    -1,    71,    72,    73,    90,    75,    76,    77,
      78,    79,    80,    21,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    67,    -1,    69,    -1,    71,    72,    73,
      -1,    75,    76,    77,    78,    79,    80,    21,    -1,    67,
      -1,    69,    -1,    71,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    21,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    21,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    21,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,    21,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    21,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,    21,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    79,    80,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
       0,    -1,    38,     3,     4,     5,     6,    -1,     8,    -1,
      10,    -1,    12,    13,    14,    15,    -1,    17,    -1,    19,
      56,    -1,    22,    -1,    -1,    25,    26,    -1,    28,    -1,
      30,    -1,    32,    -1,    34,    35,    -1,    -1,    38,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    13,
      14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,    -1,
      -1,    25,    26,    -1,    28,    -1,    30,    -1,    32,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    13,    14,    15,
      -1,    17,    -1,    19,    -1,    -1,    22,    -1,    -1,    25,
      26,    -1,    28,    -1,    30,    -1,    32,    -1,    34,    35,
       3,     4,    38,     6,    -1,    -1,    -1,    10,    -1,    12,
      13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,    22,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    30,    -1,    32,
      -1,    34,    35
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,    10,    12,    13,    14,
      15,    17,    19,    22,    25,    26,    28,    30,    32,    34,
      35,    38,   113,   114,   117,   118,   120,   124,   125,   153,
     154,   155,    40,    72,    40,    67,    76,    90,   115,   116,
     126,   127,   131,   114,   114,   114,   114,     0,   154,    72,
      40,   121,   122,   123,   126,   124,   131,   132,    74,    90,
      72,    89,   113,   114,   145,   156,    67,    69,   127,   121,
      73,    74,    89,    68,   124,   131,   116,   126,     7,     9,
      11,    16,    18,    20,    21,    23,    24,    27,    31,    33,
      40,    41,    42,    43,    44,    46,    47,    67,    73,    75,
      76,    77,    78,    79,    80,    90,    92,    93,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   111,   113,   143,   144,   145,   146,   147,
     148,   149,   150,   152,    40,    72,   109,   138,   113,   145,
      40,   114,   128,   133,   134,   135,   136,    25,   130,   132,
      73,    74,    73,   122,    95,   108,   112,    90,    90,   111,
     112,    67,    67,    40,    67,    95,    90,    67,    88,   143,
      67,    88,    67,    95,    95,   111,   118,   119,   124,   137,
      45,    46,    47,    67,    69,    71,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    89,   110,    97,    76,
      81,    82,    77,    78,    48,    49,    50,    51,    83,    84,
      52,    53,    75,    85,    86,    54,    55,    87,    74,    90,
      73,   147,    69,    71,   138,   139,   140,   141,   142,   126,
      68,    68,    74,    74,   130,   132,    76,   109,   129,    25,
      73,    90,    88,   111,   113,   151,   111,    90,   137,   111,
     143,    18,   111,   143,   137,    68,   119,   119,    68,    40,
      68,    94,   109,   111,    40,   109,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   101,   101,   102,
     103,   104,   105,   106,   111,   109,   112,    40,    73,    74,
     138,    89,   142,    56,   135,    40,   109,    70,    70,   109,
     143,   151,    90,    68,    68,    68,    67,    68,    68,    72,
      97,    68,    74,    70,    88,    70,    73,   138,   140,    70,
      70,    90,   151,   143,   143,   111,   143,   139,   109,   108,
     138,   151,    90,    37,    68,    73,    74,    68,   151,   143,
      90,    73,   143,    68,   143
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 136 "ass5_13CS30041.y"
    {
        (yyval.expr_attr) = new exp_attr;
        string t = (*((yyvsp[(1) - (1)].str)));
        sym.lookup(t);
        (yyval.expr_attr)->loc = t;
    ;}
    break;

  case 3:
#line 143 "ass5_13CS30041.y"
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "int";
        (yyval.expr_attr)->loc = sym.gentemp(type);
        Q_arr.emit((yyval.expr_attr)->loc, (yyvsp[(1) - (1)].intval), EQ_OP);
        init_value *init = new init_value;
        init->int_val = (yyvsp[(1) - (1)].intval);
        sym.lookup((yyval.expr_attr)->loc)->init_val = init;
    ;}
    break;

  case 4:
#line 154 "ass5_13CS30041.y"
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "double";
        (yyval.expr_attr)->loc = sym.gentemp(type);
        Q_arr.emit((yyval.expr_attr)->loc, (yyvsp[(1) - (1)].floatval), EQ_OP);
        init_value *init = new init_value;
        init->int_val = (yyvsp[(1) - (1)].floatval);
        sym.lookup((yyval.expr_attr)->loc)->init_val = init;
    ;}
    break;

  case 5:
#line 165 "ass5_13CS30041.y"
    {
        (yyval.expr_attr) = new exp_attr;
        type_inf type;
        type.type_name = "char";
        (yyval.expr_attr)->loc = sym.gentemp(type);
        Q_arr.emit((yyval.expr_attr)->loc, (yyvsp[(1) - (1)].charval), EQ_OP);
        init_value *init = new init_value;
        init->int_val = (yyvsp[(1) - (1)].charval);
        sym.lookup((yyval.expr_attr)->loc)->init_val = init;
    ;}
    break;

  case 6:
#line 175 "ass5_13CS30041.y"
    {;}
    break;

  case 7:
#line 176 "ass5_13CS30041.y"
    {(yyval.expr_attr) = (yyvsp[(2) - (3)].expr_attr);;}
    break;

  case 8:
#line 179 "ass5_13CS30041.y"
    {;}
    break;

  case 9:
#line 180 "ass5_13CS30041.y"
    {;}
    break;

  case 10:
#line 181 "ass5_13CS30041.y"
    {;}
    break;

  case 11:
#line 182 "ass5_13CS30041.y"
    {;}
    break;

  case 12:
#line 183 "ass5_13CS30041.y"
    {;}
    break;

  case 13:
#line 184 "ass5_13CS30041.y"
    {;}
    break;

  case 14:
#line 185 "ass5_13CS30041.y"
    {;}
    break;

  case 15:
#line 186 "ass5_13CS30041.y"
    {;}
    break;

  case 16:
#line 187 "ass5_13CS30041.y"
    {;}
    break;

  case 17:
#line 188 "ass5_13CS30041.y"
    {;}
    break;

  case 18:
#line 193 "ass5_13CS30041.y"
    {;}
    break;

  case 19:
#line 194 "ass5_13CS30041.y"
    {;}
    break;

  case 20:
#line 198 "ass5_13CS30041.y"
    {;}
    break;

  case 21:
#line 199 "ass5_13CS30041.y"
    {;}
    break;

  case 22:
#line 200 "ass5_13CS30041.y"
    {;}
    break;

  case 23:
#line 201 "ass5_13CS30041.y"
    {;}
    break;

  case 24:
#line 202 "ass5_13CS30041.y"
    {;}
    break;

  case 25:
#line 203 "ass5_13CS30041.y"
    {;}
    break;

  case 26:
#line 207 "ass5_13CS30041.y"
    {;}
    break;

  case 27:
#line 208 "ass5_13CS30041.y"
    {;}
    break;

  case 28:
#line 209 "ass5_13CS30041.y"
    {;}
    break;

  case 29:
#line 210 "ass5_13CS30041.y"
    {;}
    break;

  case 30:
#line 211 "ass5_13CS30041.y"
    {;}
    break;

  case 31:
#line 212 "ass5_13CS30041.y"
    {;}
    break;

  case 32:
#line 216 "ass5_13CS30041.y"
    {;}
    break;

  case 33:
#line 217 "ass5_13CS30041.y"
    {;}
    break;

  case 34:
#line 221 "ass5_13CS30041.y"
    {;}
    break;

  case 35:
#line 222 "ass5_13CS30041.y"
    {;}
    break;

  case 36:
#line 223 "ass5_13CS30041.y"
    {;}
    break;

  case 37:
#line 224 "ass5_13CS30041.y"
    {;}
    break;

  case 38:
#line 228 "ass5_13CS30041.y"
    {;}
    break;

  case 39:
#line 229 "ass5_13CS30041.y"
    {;}
    break;

  case 40:
#line 230 "ass5_13CS30041.y"
    {;}
    break;

  case 41:
#line 234 "ass5_13CS30041.y"
    {;}
    break;

  case 42:
#line 235 "ass5_13CS30041.y"
    {;}
    break;

  case 43:
#line 236 "ass5_13CS30041.y"
    {;}
    break;

  case 44:
#line 239 "ass5_13CS30041.y"
    {;}
    break;

  case 45:
#line 240 "ass5_13CS30041.y"
    {;}
    break;

  case 46:
#line 241 "ass5_13CS30041.y"
    {;}
    break;

  case 47:
#line 242 "ass5_13CS30041.y"
    {;}
    break;

  case 48:
#line 243 "ass5_13CS30041.y"
    {;}
    break;

  case 49:
#line 246 "ass5_13CS30041.y"
    {;}
    break;

  case 50:
#line 247 "ass5_13CS30041.y"
    {;}
    break;

  case 51:
#line 248 "ass5_13CS30041.y"
    {;}
    break;

  case 52:
#line 252 "ass5_13CS30041.y"
    {;}
    break;

  case 53:
#line 253 "ass5_13CS30041.y"
    {;}
    break;

  case 54:
#line 257 "ass5_13CS30041.y"
    {//printf("exclusive_or_expression -> and_expression\n");
                        ;}
    break;

  case 55:
#line 259 "ass5_13CS30041.y"
    {//printf("exclusive_or_expression -> exclusive_or_expression ^ and_expression\n");
;}
    break;

  case 56:
#line 263 "ass5_13CS30041.y"
    {//printf("inclusive_or_expression -> exclusive_or_expression\n");
;}
    break;

  case 57:
#line 265 "ass5_13CS30041.y"
    {//printf("inclusive_or_expression -> inclusive_or_expression | exclusive_or_expression\n");
;}
    break;

  case 58:
#line 269 "ass5_13CS30041.y"
    {;}
    break;

  case 59:
#line 270 "ass5_13CS30041.y"
    {
        //printf("logical_or_expression -> logical_or_expression && inclusive_or_expression\n");
    ;}
    break;

  case 60:
#line 275 "ass5_13CS30041.y"
    {//printf("logical_or_expression -> logical_and_expression\n");
;}
    break;

  case 61:
#line 277 "ass5_13CS30041.y"
    {//printf("logical_or_expression -> logical_or_expression || logical_and_expression\n");
;}
    break;

  case 62:
#line 281 "ass5_13CS30041.y"
    {//printf("conditional_expression -> logical_or_expression\n");
    ;}
    break;

  case 63:
#line 283 "ass5_13CS30041.y"
    {//printf("conditional_expression -> logical_or_expression ? expression : conditional_expression\n");
    ;}
    break;

  case 64:
#line 287 "ass5_13CS30041.y"
    {printf("assignment_expression -> conditional_expression\n");;}
    break;

  case 65:
#line 288 "ass5_13CS30041.y"
    {//printf("assignment_expression -> unary_expression assignment_operator assignment_expression\n");
    ;}
    break;

  case 66:
#line 293 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '='\n");
;}
    break;

  case 67:
#line 295 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '*='\n");
;}
    break;

  case 68:
#line 297 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '/='\n");
;}
    break;

  case 69:
#line 299 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '%='\n");
;}
    break;

  case 70:
#line 301 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '+='\n");
;}
    break;

  case 71:
#line 303 "ass5_13CS30041.y"
    {//printf("assignment_operator -> '-='\n");
;}
    break;

  case 72:
#line 305 "ass5_13CS30041.y"
    {//printf("assignment_operator -> <<=\n");
;}
    break;

  case 73:
#line 307 "ass5_13CS30041.y"
    {//printf("assignment_operator -> >>=\n");
;}
    break;

  case 74:
#line 309 "ass5_13CS30041.y"
    {//printf("assignment_operator -> &=\n");
;}
    break;

  case 75:
#line 311 "ass5_13CS30041.y"
    {//printf("assignment_operator -> ^=\n");
;}
    break;

  case 76:
#line 313 "ass5_13CS30041.y"
    {//printf("assignment_expression -> '|='\n");
;}
    break;

  case 77:
#line 317 "ass5_13CS30041.y"
    {//printf("expression -> assignment_expression\n");
;}
    break;

  case 78:
#line 319 "ass5_13CS30041.y"
    {//printf("expression -> expression , assignment_expression\n");
;}
    break;

  case 79:
#line 323 "ass5_13CS30041.y"
    {//printf("constant_expression -> conditional_expression\n");
;}
    break;

  case 80:
#line 331 "ass5_13CS30041.y"
    {//printf("declaration -> declaration_specifiers\n");
;}
    break;

  case 81:
#line 333 "ass5_13CS30041.y"
    {//printf("declaration -> declaration_specifiers init_declarator_list\n");
;}
    break;

  case 82:
#line 338 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> storage_class_specifier\n");;}
    break;

  case 83:
#line 339 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> storage_class_specifier declaration_specifiers\n");;}
    break;

  case 84:
#line 340 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> type_specifier\n");;}
    break;

  case 85:
#line 341 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> type_specifier declaration_specifiers\n");;}
    break;

  case 86:
#line 342 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> type_qualifier\n");;}
    break;

  case 87:
#line 343 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> type_qualifier declaration_specifiers\n");;}
    break;

  case 88:
#line 344 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> function_specifier\n");;}
    break;

  case 89:
#line 345 "ass5_13CS30041.y"
    {printf("declaration_specifiers -> function_specifier declaration_specifiers\n");;}
    break;

  case 90:
#line 350 "ass5_13CS30041.y"
    {printf("init_declarator_list -> init_declarator\n");;}
    break;

  case 91:
#line 351 "ass5_13CS30041.y"
    {printf("init_declarator_list -> init_declarator_list , init_declarator\n");;}
    break;

  case 92:
#line 356 "ass5_13CS30041.y"
    {printf("init_declarator -> declarator\n");;}
    break;

  case 93:
#line 357 "ass5_13CS30041.y"
    {printf("init_declarator -> declarator = initializer\n");;}
    break;

  case 94:
#line 360 "ass5_13CS30041.y"
    {printf("storage_class_specifier -> extern\n");;}
    break;

  case 95:
#line 361 "ass5_13CS30041.y"
    {printf("storage_class_specifier -> static\n");;}
    break;

  case 96:
#line 362 "ass5_13CS30041.y"
    {printf("storage_class_specifier -> auto\n");;}
    break;

  case 97:
#line 363 "ass5_13CS30041.y"
    {printf("storage_class_specifier -> register\n");;}
    break;

  case 98:
#line 368 "ass5_13CS30041.y"
    {
			(yyval.expr_attr)->type.type_name = "void"; 
		;}
    break;

  case 99:
#line 372 "ass5_13CS30041.y"
    {
			(yyval.expr_attr)->type.type_name = "char";
			(yyval.expr_attr)->type.next = NULL;
			//printf("type_specifier -> char\n");
		;}
    break;

  case 100:
#line 377 "ass5_13CS30041.y"
    {//printf("type_specifier -> short\n");
;}
    break;

  case 101:
#line 380 "ass5_13CS30041.y"
    {
			(yyval.expr_attr)->type.type_name = "int";
			(yyval.expr_attr)->type.next = NULL;
			
			//printf("type_specifier -> int\n");
		;}
    break;

  case 102:
#line 386 "ass5_13CS30041.y"
    {//printf("type_specifier -> long\n");
;}
    break;

  case 103:
#line 388 "ass5_13CS30041.y"
    {//printf("type_specifier -> float\n");
;}
    break;

  case 104:
#line 391 "ass5_13CS30041.y"
    {
			(yyval.expr_attr)->type.type_name = "double";
			(yyval.expr_attr)->type.next = NULL;
			//printf("type_specifier -> double\n");
		;}
    break;

  case 105:
#line 396 "ass5_13CS30041.y"
    {//printf("type_specifier -> signed\n");
;}
    break;

  case 106:
#line 398 "ass5_13CS30041.y"
    {//printf("type_specifier -> unsigned\n");
;}
    break;

  case 107:
#line 400 "ass5_13CS30041.y"
    {//printf("type_specifier -> _Bool\n");
;}
    break;

  case 108:
#line 402 "ass5_13CS30041.y"
    {//printf("type_specifier -> _Complex\n");
;}
    break;

  case 109:
#line 404 "ass5_13CS30041.y"
    {//printf("type_specifier -> _Imaginary\n");
;}
    break;

  case 111:
#line 411 "ass5_13CS30041.y"
    {
			(yyval.expr_attr) = (yyvsp[(1) - (1)].expr_attr);
			//printf("specifier_qualifier_list -> type_specifier\n");
		;}
    break;

  case 112:
#line 415 "ass5_13CS30041.y"
    {//printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list\n");
;}
    break;

  case 113:
#line 417 "ass5_13CS30041.y"
    {printf("specifier_qualifier_list -> type_qualifier\n");;}
    break;

  case 114:
#line 418 "ass5_13CS30041.y"
    {printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list\n");;}
    break;

  case 115:
#line 421 "ass5_13CS30041.y"
    {printf("enum_specifier -> enum {enumerator_list}\n");;}
    break;

  case 116:
#line 422 "ass5_13CS30041.y"
    {printf("enum_specifier -> enum IDENTIFIER {enumerator_list} \n");;}
    break;

  case 117:
#line 423 "ass5_13CS30041.y"
    {printf("enum_specifier -> enum {enumerator_list, }\n");;}
    break;

  case 118:
#line 424 "ass5_13CS30041.y"
    {printf("enum_specifier -> enum IDENTIFIER {enumerator_list ,}\n");;}
    break;

  case 119:
#line 425 "ass5_13CS30041.y"
    {printf("enum_specifier->enum IDENTIFIER\n");;}
    break;

  case 120:
#line 428 "ass5_13CS30041.y"
    {printf("enumerator_list -> enumerator\n");;}
    break;

  case 121:
#line 429 "ass5_13CS30041.y"
    {printf("enumerator_list -> enumerator_list , enumerator\n");;}
    break;

  case 122:
#line 432 "ass5_13CS30041.y"
    {printf("enumerator -> enumeration_constant\n");;}
    break;

  case 123:
#line 433 "ass5_13CS30041.y"
    {printf("enumerator -> enumeration_constant = constant_expression\n");;}
    break;

  case 124:
#line 436 "ass5_13CS30041.y"
    {printf("enumeration_constant -> IDENTIFIER\n");;}
    break;

  case 125:
#line 439 "ass5_13CS30041.y"
    {printf("type_qualifier -> const\n");;}
    break;

  case 126:
#line 440 "ass5_13CS30041.y"
    {printf("type_qualifier -> restrict\n");;}
    break;

  case 127:
#line 441 "ass5_13CS30041.y"
    {printf("type_qualifier -> volatile\n");;}
    break;

  case 128:
#line 444 "ass5_13CS30041.y"
    {printf("function_specifier -> inline\n");;}
    break;

  case 129:
#line 446 "ass5_13CS30041.y"
    {printf("declarator -> pointer direct_declarator\n");;}
    break;

  case 130:
#line 448 "ass5_13CS30041.y"
    {
			//$$ = $1;
			//printf("declarator -> direct_declarator\n");
		;}
    break;

  case 131:
#line 456 "ass5_13CS30041.y"
    {printf("direct_declarator -> IDENTIFIER\n");;}
    break;

  case 132:
#line 457 "ass5_13CS30041.y"
    {printf("direct_declarator -> (declarator)\n");;}
    break;

  case 133:
#line 458 "ass5_13CS30041.y"
    {printf("direct_declarator -> direct_declarator[type_qualifier_list_opt assignment_expression_opt]\n");;}
    break;

  case 134:
#line 459 "ass5_13CS30041.y"
    {printf("direct_declarator ->direct_declarator [static type_qualifier_list assignment_expression]\n");;}
    break;

  case 135:
#line 460 "ass5_13CS30041.y"
    {printf("direct_declarator -> direct_declarator[type_qualifier_list static assignment_expression]\n");;}
    break;

  case 136:
#line 461 "ass5_13CS30041.y"
    {printf("direct_declarator -> direct_declarator[type_qualifier_list_opt *]\n");;}
    break;

  case 137:
#line 462 "ass5_13CS30041.y"
    {printf("direct_declarator -> direct_declarator (parameter_type_list)\n");;}
    break;

  case 138:
#line 463 "ass5_13CS30041.y"
    {printf("direct_declarator -> direct_declarator (identifier_list_opt)\n");;}
    break;

  case 139:
#line 466 "ass5_13CS30041.y"
    {printf("identifier_list_opt -> identifier_list\n");;}
    break;

  case 141:
#line 470 "ass5_13CS30041.y"
    {printf("assignment_expression_opt -> assignment_expression\n");;}
    break;

  case 143:
#line 475 "ass5_13CS30041.y"
    {printf("type_qualifier_list_opt -> type_qualifier_list\n");;}
    break;

  case 145:
#line 480 "ass5_13CS30041.y"
    {printf("pointer -> '*'\n");;}
    break;

  case 146:
#line 481 "ass5_13CS30041.y"
    {printf("pointer -> *type_qualifier_list\n");;}
    break;

  case 147:
#line 482 "ass5_13CS30041.y"
    {printf("pointer -> *pointer\n");;}
    break;

  case 148:
#line 483 "ass5_13CS30041.y"
    {printf("pointer -> *type_qualifier_list pointer\n");;}
    break;

  case 149:
#line 486 "ass5_13CS30041.y"
    {printf("type_qualifier_list -> type_qualifier\n");;}
    break;

  case 150:
#line 487 "ass5_13CS30041.y"
    {printf("type_qualifier_list -> type_qualifier_list type_qualifier\n");;}
    break;

  case 151:
#line 490 "ass5_13CS30041.y"
    {printf("parameter_type_list -> parameter_list\n");;}
    break;

  case 152:
#line 491 "ass5_13CS30041.y"
    {printf("parameter_type_list -> parameter_list, ELLIPSIS\n");;}
    break;

  case 153:
#line 494 "ass5_13CS30041.y"
    {printf("parameter_list -> parameter_declaration\n");;}
    break;

  case 154:
#line 495 "ass5_13CS30041.y"
    {printf("parameter_list -> parameter_list, parameter_declaration\n");;}
    break;

  case 155:
#line 498 "ass5_13CS30041.y"
    {printf("parameter_declaration -> declaration_specifiers declarator\n");;}
    break;

  case 156:
#line 499 "ass5_13CS30041.y"
    {printf("parameter_declaration -> declaration_specifiers\n");;}
    break;

  case 157:
#line 503 "ass5_13CS30041.y"
    {printf("identifier_list -> IDENTIFIER\n");;}
    break;

  case 158:
#line 504 "ass5_13CS30041.y"
    {printf("identifier_list -> identifier_list, IDENTIFIER\n");;}
    break;

  case 159:
#line 508 "ass5_13CS30041.y"
    {printf("type_name -> specifier_qualifier_list\n");;}
    break;

  case 160:
#line 512 "ass5_13CS30041.y"
    {printf("initializer -> assignment_expression\n");;}
    break;

  case 161:
#line 513 "ass5_13CS30041.y"
    {printf("initializer -> {initializer_list}\n");;}
    break;

  case 162:
#line 514 "ass5_13CS30041.y"
    {printf("initializer -> {initializer_list, }\n");;}
    break;

  case 163:
#line 518 "ass5_13CS30041.y"
    {printf("initializer_list -> initializer\n");;}
    break;

  case 164:
#line 519 "ass5_13CS30041.y"
    {printf("initializer_list -> designation initializer\n");;}
    break;

  case 165:
#line 520 "ass5_13CS30041.y"
    {printf("initializer_list -> initializer_list, initializer\n");;}
    break;

  case 166:
#line 521 "ass5_13CS30041.y"
    {printf("initializer_list -> initializer_list, designation initializer\n");;}
    break;

  case 167:
#line 525 "ass5_13CS30041.y"
    {printf("designation -> designator_list -\n");;}
    break;

  case 168:
#line 529 "ass5_13CS30041.y"
    {printf("designator_list -> designator\n");;}
    break;

  case 169:
#line 530 "ass5_13CS30041.y"
    {printf("designator_list -> designator_list designator\n");;}
    break;

  case 170:
#line 533 "ass5_13CS30041.y"
    {printf("designator -> [constant_expression]\n");;}
    break;

  case 171:
#line 534 "ass5_13CS30041.y"
    {printf("designator -> IDENTIFIER\n");;}
    break;

  case 172:
#line 541 "ass5_13CS30041.y"
    {printf("statement -> labeled_statement\n");;}
    break;

  case 173:
#line 542 "ass5_13CS30041.y"
    {printf("statement -> compound_statement\n");;}
    break;

  case 174:
#line 543 "ass5_13CS30041.y"
    {printf("statement -> expression_statement\n");;}
    break;

  case 175:
#line 544 "ass5_13CS30041.y"
    {printf("statement -> selection_statement\n");;}
    break;

  case 176:
#line 545 "ass5_13CS30041.y"
    {printf("statement -> iteration_statement\n");;}
    break;

  case 177:
#line 546 "ass5_13CS30041.y"
    {printf("statement -> jump_statement\n");;}
    break;

  case 178:
#line 549 "ass5_13CS30041.y"
    {printf("labeled_statement -> IDENTIFIER : statement\n");;}
    break;

  case 179:
#line 550 "ass5_13CS30041.y"
    {printf("labeled_statement -> case constant_expression : statement\n");;}
    break;

  case 180:
#line 551 "ass5_13CS30041.y"
    {printf("labeled_statement -> default : statement\n");;}
    break;

  case 181:
#line 555 "ass5_13CS30041.y"
    {printf("compound_statement -> {}\n");;}
    break;

  case 182:
#line 556 "ass5_13CS30041.y"
    {printf("compound_statement -> {block_item_list}\n");;}
    break;

  case 183:
#line 560 "ass5_13CS30041.y"
    {printf("block_item_list -> block_item\n");;}
    break;

  case 184:
#line 561 "ass5_13CS30041.y"
    {printf("block_item_list -> block_item_list block_item\n");;}
    break;

  case 185:
#line 564 "ass5_13CS30041.y"
    {printf("block_item -> declaration\n");;}
    break;

  case 186:
#line 565 "ass5_13CS30041.y"
    {printf("block_item -> statement\n");;}
    break;

  case 187:
#line 568 "ass5_13CS30041.y"
    {printf("expression_statement -> ;\n");;}
    break;

  case 188:
#line 569 "ass5_13CS30041.y"
    {printf("expression_statement -> expression ;\n");;}
    break;

  case 189:
#line 572 "ass5_13CS30041.y"
    {printf("selection_statement -> if (expression) statement\n");;}
    break;

  case 190:
#line 573 "ass5_13CS30041.y"
    {printf("selection_statement -> if(expression) statement else statement\n");;}
    break;

  case 191:
#line 574 "ass5_13CS30041.y"
    {printf("selection_statement -> switch(expression) statement\n");;}
    break;

  case 192:
#line 577 "ass5_13CS30041.y"
    {printf("iteration_statement -> while(expression) statement\n");;}
    break;

  case 193:
#line 578 "ass5_13CS30041.y"
    {printf("iteration_statement -> do statement while(expression);\n");;}
    break;

  case 194:
#line 579 "ass5_13CS30041.y"
    {printf("iteration_statement -> for(expression_opt expression_opt expression_opt) statement\n");;}
    break;

  case 195:
#line 580 "ass5_13CS30041.y"
    {printf("iteration_statement -> for (declaration expression_opt expression_opt) statement\n");;}
    break;

  case 196:
#line 583 "ass5_13CS30041.y"
    {printf("expression_opt -> expression\n");;}
    break;

  case 198:
#line 587 "ass5_13CS30041.y"
    {printf("jump_statement -> goto IDENTIFIER :\n");;}
    break;

  case 199:
#line 588 "ass5_13CS30041.y"
    {printf("jump_statement -> continue ;\n");;}
    break;

  case 200:
#line 589 "ass5_13CS30041.y"
    {printf("jump_statement -> break;\n");;}
    break;

  case 201:
#line 590 "ass5_13CS30041.y"
    {printf("jump_statement -> return;\n");;}
    break;

  case 202:
#line 591 "ass5_13CS30041.y"
    {printf("jump_statement -> return expression;\n");;}
    break;

  case 203:
#line 598 "ass5_13CS30041.y"
    {printf("translation_unit -> external_declaration\n");;}
    break;

  case 204:
#line 599 "ass5_13CS30041.y"
    {printf("translation_unit -> translation_unit external_declaration\n");;}
    break;

  case 205:
#line 603 "ass5_13CS30041.y"
    {printf("external_declaration -> function_definition\n");;}
    break;

  case 206:
#line 604 "ass5_13CS30041.y"
    {printf("external_declaration -> declaration\n");;}
    break;

  case 207:
#line 608 "ass5_13CS30041.y"
    {printf("function_definition -> declaration_specifiers declarator declaration_list compound_statement\n");;}
    break;

  case 208:
#line 609 "ass5_13CS30041.y"
    {printf("function_definition -> declaration_specifiers declarator compound_statement\n");;}
    break;

  case 209:
#line 612 "ass5_13CS30041.y"
    {printf("declaration_list -> declaration\n");;}
    break;

  case 210:
#line 613 "ass5_13CS30041.y"
    {printf("declaration_list -> declaration_list declaration\n");;}
    break;


/* Line 1267 of yacc.c.  */
#line 3129 "ass5_13CS30041.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 618 "ass5_13CS30041.y"

void yyerror(string s) 
{
	cout << s << endl;
}

int main()
{
    bool failure = yyparse();
    int size = Q_arr.arr.size();
    for(int i = 0; i<size;i++)
    {
        cout<<i<<": "; Q_arr.arr[i].print();
    }
}


