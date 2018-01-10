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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDint = 258,
    CIDint = 259,
    IDfloat = 260,
    CIDfloat = 261,
    IDstring = 262,
    CIDstring = 263,
    TIPi = 264,
    TIPf = 265,
    TIPs = 266,
    BGIN = 267,
    END = 268,
    ASSIGN = 269,
    CALL = 270,
    PRINT = 271,
    IF = 272,
    ELSE = 273,
    ENDIF = 274,
    FOR = 275,
    ENDFOR = 276,
    WHILE = 277,
    ENDWHILE = 278,
    COMP = 279,
    EQUAL = 280,
    DIFF = 281,
    ADD = 282,
    MIN = 283,
    POW = 284,
    MUL = 285,
    DIV = 286,
    STRING = 287,
    INT = 288
  };
#endif
/* Tokens.  */
#define IDint 258
#define CIDint 259
#define IDfloat 260
#define CIDfloat 261
#define IDstring 262
#define CIDstring 263
#define TIPi 264
#define TIPf 265
#define TIPs 266
#define BGIN 267
#define END 268
#define ASSIGN 269
#define CALL 270
#define PRINT 271
#define IF 272
#define ELSE 273
#define ENDIF 274
#define FOR 275
#define ENDFOR 276
#define WHILE 277
#define ENDWHILE 278
#define COMP 279
#define EQUAL 280
#define DIFF 281
#define ADD 282
#define MIN 283
#define POW 284
#define MUL 285
#define DIV 286
#define STRING 287
#define INT 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "DarthPlus.y" /* yacc.c:1909  */

int intval;
float floatval;
char* strval;

#line 126 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
