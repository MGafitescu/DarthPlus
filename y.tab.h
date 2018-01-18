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
    TIPstruct = 262,
    IDint = 263,
    IDfloat = 264,
    IDstring = 265,
    IDbool = 266,
    IDstruct = 267,
    CIDint = 268,
    CIDfloat = 269,
    CIDstring = 270,
    CIDbool = 271,
    BGIN = 272,
    END = 273,
    ASSIGN = 274,
    PRINT = 275,
    IF = 276,
    ELSE = 277,
    ENDIF = 278,
    FOR = 279,
    ENDFOR = 280,
    WHILE = 281,
    ENDWHILE = 282,
    COMP = 283,
    EQUAL = 284,
    DIFF = 285,
    NOT = 286,
    AND = 287,
    OR = 288,
    ADD = 289,
    MIN = 290,
    POW = 291,
    MUL = 292,
    DIV = 293,
    BEGIN_FUNCTION = 294,
    END_FUNCTION = 295,
    STRING = 296,
    INT = 297,
    FLOAT = 298,
    BOOL = 299
  };
#endif
/* Tokens.  */
#define TIPi 258
#define TIPf 259
#define TIPs 260
#define TIPb 261
#define TIPstruct 262
#define IDint 263
#define IDfloat 264
#define IDstring 265
#define IDbool 266
#define IDstruct 267
#define CIDint 268
#define CIDfloat 269
#define CIDstring 270
#define CIDbool 271
#define BGIN 272
#define END 273
#define ASSIGN 274
#define PRINT 275
#define IF 276
#define ELSE 277
#define ENDIF 278
#define FOR 279
#define ENDFOR 280
#define WHILE 281
#define ENDWHILE 282
#define COMP 283
#define EQUAL 284
#define DIFF 285
#define NOT 286
#define AND 287
#define OR 288
#define ADD 289
#define MIN 290
#define POW 291
#define MUL 292
#define DIV 293
#define BEGIN_FUNCTION 294
#define END_FUNCTION 295
#define STRING 296
#define INT 297
#define FLOAT 298
#define BOOL 299

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "DarthPlus.y" /* yacc.c:1909  */

int intval;
double floatval;
char* strval;
char boolval[6];
struct  
{
	char name[100];
	int val;
} intnode;

struct  
{
	char name[100];
	char val[100];
} stringnode;

struct  
{
	char name[100];
	double val;
} floatnode;

struct  
{
	char name[100];
	char val[6];
} boolnode;

#line 172 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
