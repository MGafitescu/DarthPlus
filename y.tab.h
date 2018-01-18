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
    LE = 283,
    GE = 284,
    EQUAL = 285,
    DIFF = 286,
    NOT = 287,
    AND = 288,
    OR = 289,
    UMINUS = 290,
    BEGIN_FUNCTION = 291,
    END_FUNCTION = 292,
    ENDL = 293,
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
#define LE 283
#define GE 284
#define EQUAL 285
#define DIFF 286
#define NOT 287
#define AND 288
#define OR 289
#define UMINUS 290
#define BEGIN_FUNCTION 291
#define END_FUNCTION 292
#define ENDL 293
#define STRING 294
#define INT 295
#define FLOAT 296
#define BOOL 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 60 "DarthPlus.y" /* yacc.c:1909  */

int intval;
double floatval;
char* strval;
int boolval;
struct  IND
{
	char name[100];
	int val;
} intnode;

struct  SND
{
	char name[100];
	char val[100];
} stringnode;

struct  FND
{
	char name[100];
	double val;
} floatnode;

struct BND
{
	char name[100];
	int val;
} boolnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
} intfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}stringfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}floatfuncnode;

struct 
{
	char name[100];
	int nr_inodes;
	int nr_snodes;
	int nr_fnodes;
	int nr_bnodes;
	struct IND intnodes[10];
	struct SND stringnodes[10];
	struct BND boolnodes[10];
	struct FND floatnodes[10];
}boolfuncnode;

#line 220 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
