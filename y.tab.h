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
    BGIN = 261,
    END = 262,
    ASSIGN = 263,
    CALL = 264,
    TIPi = 265,
    TIPf = 266,
    TIPs = 267,
    PRINT = 268,
    IF = 269,
    ENDIF = 270,
    FOR = 271,
    ENDFOR = 272,
    WHILE = 273,
    ENDWHILE = 274,
    COMP = 275,
    EGAL = 276,
    DIFERIT = 277,
    STRING = 278,
    INT = 279
  };
#endif
/* Tokens.  */
#define IDint 258
#define IDfloat 259
#define IDstring 260
#define BGIN 261
#define END 262
#define ASSIGN 263
#define CALL 264
#define TIPi 265
#define TIPf 266
#define TIPs 267
#define PRINT 268
#define IF 269
#define ENDIF 270
#define FOR 271
#define ENDFOR 272
#define WHILE 273
#define ENDWHILE 274
#define COMP 275
#define EGAL 276
#define DIFERIT 277
#define STRING 278
#define INT 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 9 "DarthPlus.y" /* yacc.c:1909  */

int intval;
float floatval;
char* strval;

#line 108 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
