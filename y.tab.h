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
    IDfloat = 259,
    IDstring = 260,
    IDbool = 261,
    BGIN = 262,
    END = 263,
    ASSIGN = 264,
    CALL = 265,
    TIPi = 266,
    TIPf = 267,
    TIPs = 268,
    TIPb = 269,
    PRINT = 270,
    IF = 271,
    ELSE = 272,
    ENDIF = 273,
    FOR = 274,
    ENDFOR = 275,
    WHILE = 276,
    ENDWHILE = 277,
    COMP = 278,
    EQUAL = 279,
    DIFF = 280,
    ADD = 281,
    MIN = 282,
    POW = 283,
    MUL = 284,
    DIV = 285,
    NOT = 286,
    AND = 287,
    OR = 288,
    STRING = 289,
    INT = 290,
    FLOAT = 291,
    BOOL = 292
  };
#endif
/* Tokens.  */
#define IDint 258
#define IDfloat 259
#define IDstring 260
#define IDbool 261
#define BGIN 262
#define END 263
#define ASSIGN 264
#define CALL 265
#define TIPi 266
#define TIPf 267
#define TIPs 268
#define TIPb 269
#define PRINT 270
#define IF 271
#define ELSE 272
#define ENDIF 273
#define FOR 274
#define ENDFOR 275
#define WHILE 276
#define ENDWHILE 277
#define COMP 278
#define EQUAL 279
#define DIFF 280
#define ADD 281
#define MIN 282
#define POW 283
#define MUL 284
#define DIV 285
#define NOT 286
#define AND 287
#define OR 288
#define STRING 289
#define INT 290
#define FLOAT 291
#define BOOL 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "DarthPlus.y" /* yacc.c:1909  */

int intval;
double floatval;
char* strval;
int boolval;

#line 135 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
