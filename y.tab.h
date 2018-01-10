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
    TIPi = 258,
    TIPf = 259,
    TIPs = 260,
    TIPb = 261,
    IDint = 262,
    IDfloat = 263,
    IDstring = 264,
    IDbool = 265,
    CIDint = 266,
    CIDfloat = 267,
    CIDstring = 268,
    CIDbool = 269,
    BGIN = 270,
    END = 271,
    ASSIGN = 272,
    PRINT = 273,
    IF = 274,
    ELSE = 275,
    ENDIF = 276,
    FOR = 277,
    ENDFOR = 278,
    WHILE = 279,
    ENDWHILE = 280,
    COMP = 281,
    EQUAL = 282,
    DIFF = 283,
    NOT = 284,
    AND = 285,
    OR = 286,
    ADD = 287,
    MIN = 288,
    POW = 289,
    MUL = 290,
    DIV = 291,
    BEGIN_FUNCTION = 292,
    END_FUNCTION = 293,
    STRING = 294,
    INT = 295,
    FLOAT = 296,
    BOOL = 297
  };
#endif
/* Tokens.  */
#define TIPi 258
#define TIPf 259
#define TIPs 260
#define TIPb 261
#define IDint 262
#define IDfloat 263
#define IDstring 264
#define IDbool 265
#define CIDint 266
#define CIDfloat 267
#define CIDstring 268
#define CIDbool 269
#define BGIN 270
#define END 271
#define ASSIGN 272
#define PRINT 273
#define IF 274
#define ELSE 275
#define ENDIF 276
#define FOR 277
#define ENDFOR 278
#define WHILE 279
#define ENDWHILE 280
#define COMP 281
#define EQUAL 282
#define DIFF 283
#define NOT 284
#define AND 285
#define OR 286
#define ADD 287
#define MIN 288
#define POW 289
#define MUL 290
#define DIV 291
#define BEGIN_FUNCTION 292
#define END_FUNCTION 293
#define STRING 294
#define INT 295
#define FLOAT 296
#define BOOL 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "DarthPlus.y" /* yacc.c:1909  */

int intval;
double floatval;
char* strval;
int boolval;

#line 145 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
