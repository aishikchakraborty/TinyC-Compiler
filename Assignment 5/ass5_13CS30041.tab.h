/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 189 "ass5_13CS30041.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

