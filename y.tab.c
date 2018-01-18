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




/* Copy the first part of user declarations.  */
#line 1 "DarthPlus.y" /* yacc.c:339  */

#include <string.h>
#include "structuri.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
extern FILE* yyin;
extern char* yytext;
extern int yylineno;
int yylex();
int yyerror(char * s);
struct IntNode intnodes[100];
int nr_inodes = 0;
struct StringNode stringnodes[100];
int nr_snodes = 0;
struct FloatNode floatnodes[100];
int nr_fnodes = 0;
struct BoolNode boolnodes[100];
int nr_bnodes = 0;
int FindIntNode(char* name);
int AddIntNode(char *name);
int UpdateIntVal(char *name,int val);

int FindStringNode(char* name);
int AddStringNode(char *name);
int UpdateStringVal(char *name,char* val);

int FindFloatNode(char* name);
int AddFloatNode(char *name);
int UpdateFloatVal(char *name,double val);

int FindBoolNode(char* name);
int AddBoolNode(char *name);
int UpdateBoolVal(char *name,char  *val);

#line 102 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
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
#line 36 "DarthPlus.y" /* yacc.c:355  */

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

#line 260 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 277 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   422

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  275

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      56,    57,    46,    47,    55,    49,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   109,   110,   113,   114,   115,   116,   117,
     120,   122,   123,   124,   127,   128,   129,   130,   133,   136,
     137,   140,   141,   142,   143,   144,   147,   149,   151,   153,
     157,   158,   161,   162,   165,   166,   167,   168,   169,   170,
     171,   172,   175,   178,   179,   182,   183,   186,   187,   188,
     189,   193,   197,   198,   201,   202,   203,   204,   205,   206,
     207,   210,   214,   218,   219,   220,   223,   224,   228,   229,
     230,   231,   232,   233,   234,   239,   240,   241,   245,   246,
     251,   255,   260,   266,   271,   277,   282,   283,   287,   292,
     297,   298,   302,   306,   307,   311,   316,   317,   321,   325,
     330,   331,   335,   339,   340,   341,   342,   347,   348,   349,
     350,   351,   352,   353,   354,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   372,   373,   374,   375,   380,   381
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIPi", "TIPf", "TIPs", "TIPb",
  "TIPstruct", "IDint", "IDfloat", "IDstring", "IDbool", "IDstruct",
  "CIDint", "CIDfloat", "CIDstring", "CIDbool", "BGIN", "END", "ASSIGN",
  "PRINT", "IF", "ELSE", "ENDIF", "FOR", "ENDFOR", "WHILE", "ENDWHILE",
  "COMP", "EQUAL", "DIFF", "NOT", "AND", "OR", "ADD", "MIN", "POW", "MUL",
  "DIV", "BEGIN_FUNCTION", "END_FUNCTION", "STRING", "INT", "FLOAT",
  "BOOL", "'^'", "'*'", "'+'", "'/'", "'-'", "';'", "'['", "']'", "'{'",
  "'}'", "','", "'('", "')'", "'?'", "$accept", "progr", "declarations",
  "declaration", "variable_decl", "array_decl", "struct_decl",
  "struct_var_decl", "data_id_type", "const_decl", "param_list_decl",
  "params_decl", "param_decl", "function_decl", "param_list", "params",
  "param", "body", "list", "statement", "test", "function_call", "control",
  "else", "exprlog", "exprlognr", "exprlogst", "exprfor", "assgnst",
  "assgnint", "assgnbl", "assgnfl", "numberint", "numberfl", "gnumber",
  "ebool", "estring", "econst", "exprint", "exprfl", "exprst", "print", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,    94,    42,    43,    47,    45,
      59,    91,    93,   123,   125,    44,    40,    41,    63
};
# endif

#define YYPACT_NINF -180

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-180)))

#define YYTABLE_NINF -107

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     360,    13,    21,    75,    23,     0,    31,   145,    -3,     2,
    -180,  -180,  -180,  -180,    18,    73,    48,    82,    54,    99,
      77,   134,   107,  -180,   331,   122,  -180,  -180,   136,   115,
      35,   132,   103,   147,    83,   149,    38,   379,   183,   186,
     195,   216,  -180,  -180,  -180,  -180,   120,   187,   197,   220,
     223,   274,  -180,   189,  -180,   205,   227,   243,   246,  -180,
     247,  -180,  -180,   180,   181,   191,   221,   242,   250,  -180,
     278,   261,  -180,  -180,  -180,   279,   284,  -180,  -180,  -180,
     285,   292,  -180,  -180,  -180,   296,   298,  -180,  -180,  -180,
     342,   345,   343,   357,   306,    10,    28,    24,    47,     9,
      71,     9,   361,     9,   169,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,  -180,
    -180,   337,   136,  -180,    35,  -180,    35,  -180,    35,  -180,
      35,  -180,  -180,  -180,  -180,  -180,  -180,   346,   182,    28,
    -180,   326,   198,   215,    24,  -180,  -180,  -180,   332,    47,
    -180,   170,     9,     9,    89,  -180,  -180,  -180,   212,   157,
     338,   341,    81,   183,   347,   349,   102,   235,   259,   260,
     273,   350,   351,   352,   353,   348,   339,  -180,  -180,  -180,
    -180,  -180,   331,  -180,   358,   359,   362,   363,  -180,   169,
     151,    28,    28,    28,    28,    28,   169,   169,   313,    24,
      24,    24,    24,    24,    29,    35,    47,  -180,   104,   199,
      -1,     9,     9,    24,    24,    24,    47,    47,  -180,  -180,
     354,   331,    24,   331,  -180,   169,   210,  -180,  -180,  -180,
    -180,   356,  -180,   340,   203,   203,   367,  -180,   364,   365,
    -180,   344,   224,   224,   368,  -180,  -180,  -180,  -180,  -180,
     369,  -180,   332,   332,   332,   170,   170,   331,   293,   370,
     254,  -180,  -180,  -180,  -180,  -180,   312,  -180,   361,  -180,
     331,   374,  -180,   331,  -180
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       8,     9,     7,     5,    10,     0,    13,     0,    12,     0,
      11,     0,     0,     1,     0,     0,    61,     3,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    23,
      24,    22,   103,   105,   106,   104,     0,     0,     0,     0,
       0,     0,    52,     0,    58,     0,     0,     0,     0,    25,
       0,     4,     2,     0,     0,     0,     0,     0,    31,    32,
       0,    85,    87,    86,    26,     0,    89,    91,    90,    29,
       0,    99,   101,   100,    27,     0,    95,    97,    96,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    51,    53,    60,    54,    55,
      57,    56,    59,    34,    35,    40,    41,    36,    37,    38,
      39,     0,     0,    14,     0,    16,     0,    15,     0,    17,
       0,    10,    13,    12,    11,    19,    18,     0,    85,     0,
     107,    82,    85,    89,     0,    94,    93,   115,    84,     0,
     124,    81,     0,     0,    83,    68,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,    89,    99,
      95,    87,    91,   101,    97,     0,    44,    45,    50,    47,
      48,    49,     0,    33,     0,     0,     0,     0,    20,    43,
       0,     0,     0,     0,     0,     0,    43,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,   128,
       0,     0,     0,     0,    62,     0,     0,    88,    92,   102,
      98,     0,   114,   113,   111,   109,   112,   110,     0,     0,
     123,   122,   120,   118,   121,   119,   126,   127,   125,    71,
      73,    74,    75,    76,    77,    78,    79,     0,     0,     0,
       0,    46,    42,   108,   117,   116,    66,    64,     0,    65,
       0,     0,    80,    67,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -180,  -180,  -180,   393,   -27,  -180,  -180,  -180,  -180,  -180,
    -180,  -180,   281,  -180,   -42,  -180,   176,  -180,  -179,   -51,
    -180,  -102,  -180,  -180,   -92,   196,  -180,  -180,  -180,   -95,
    -180,  -180,   -24,   387,  -100,   -31,   -33,  -180,   -84,   -70,
     -90,  -180
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    95,    50,    12,
      67,    68,    69,    13,   175,   176,   177,    26,    51,    52,
      62,    53,    54,   271,   154,   155,   156,   164,    55,    56,
      57,    58,   145,   146,   147,   157,   150,    59,   141,   158,
     159,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,    84,   178,   226,   179,    89,    74,   165,   151,   162,
      94,   166,    22,    90,    91,    92,    93,   142,   143,    81,
      86,    14,    72,    77,    82,    87,    15,   148,   216,   217,
      16,    23,   142,   143,    20,    17,   138,    72,    77,    21,
     152,    72,   258,    71,   260,   205,   206,    27,    72,    86,
      83,    73,    78,    88,    87,   190,   246,    81,    28,   204,
     207,   208,    82,   210,   136,   153,    73,    78,   137,    29,
      73,   181,   140,   180,   198,   205,   206,    73,   266,   160,
     144,   161,    88,   209,   139,    18,   246,   178,    83,   179,
      19,   273,    30,    81,   178,   178,   179,   179,    82,    31,
     184,    32,   185,   149,   186,    33,   187,   233,   234,   235,
     236,   237,    76,   211,   212,   140,   248,    77,    34,   250,
     251,   211,   212,   178,    83,   179,   255,   256,    35,   241,
     242,   243,   244,   245,   211,   212,   211,   212,   220,    63,
      64,    65,    66,   252,   253,   254,    78,   231,     1,     2,
       3,     4,     5,    36,   238,   239,   181,    70,   180,   223,
      37,   249,    24,   181,   181,   180,   180,   140,   140,   140,
     140,   140,    61,   272,    75,   106,   100,   167,   168,   169,
     170,   247,   171,   172,   173,   174,   216,   217,   113,    80,
     115,    85,   181,   114,   180,   116,   191,   192,   193,   194,
     195,   117,    96,   205,   206,    97,   118,   106,   232,   106,
      83,    73,    78,    88,    98,   106,   205,   206,    38,    39,
      40,    41,   106,    42,    43,    44,    45,   213,   214,   215,
      46,    47,   119,   124,    48,    99,    49,   120,   189,   107,
     213,   214,   215,   101,   199,   200,   201,   202,   203,   124,
     262,   194,   195,   102,   196,   108,   240,   199,   200,   201,
     202,   203,    38,    39,    40,    41,   126,    42,    43,    44,
      45,   197,   202,   203,    46,    47,   103,   109,    48,   104,
      49,   269,    38,    39,    40,    41,   124,    42,    43,    44,
      45,   -21,   105,   110,    46,    47,   111,   112,    48,   121,
      49,    38,    39,    40,    41,   122,    42,    43,    44,    45,
     126,   128,   124,    46,    47,   -23,   -24,    48,   267,    49,
      38,    39,    40,    41,   130,    42,    43,    44,    45,   -22,
     123,   125,    46,    47,   270,   126,    48,   127,    49,    38,
      39,    40,    41,   128,    42,    43,    44,    45,   129,   130,
     131,    46,    47,   133,   132,    48,   135,    49,   199,   200,
     201,   202,   203,     1,     2,     3,     4,     5,   134,   163,
     240,   191,   192,   193,   194,   195,   182,   199,   200,   201,
     202,   203,    90,    91,    92,    93,   192,   193,   194,   195,
     200,   201,   202,   203,   225,   218,   188,   274,   219,   222,
      25,   261,   212,   183,   221,   224,  -103,  -105,  -106,  -104,
     227,   228,   257,   263,   229,   230,   195,   203,   259,    79,
     268,   264,   265
};

static const yytype_uint16 yycheck[] =
{
      51,    34,   104,   182,   104,    36,    30,   102,    98,   101,
      37,   103,    12,     3,     4,     5,     6,     8,     9,    10,
      11,     8,    13,    14,    15,    16,    13,    97,    29,    30,
       9,     0,     8,     9,    11,    14,     8,    13,    14,    16,
      31,    13,   221,     8,   223,    46,    47,    50,    13,    11,
      41,    42,    43,    44,    16,   139,    57,    10,    56,   149,
     152,   153,    15,   153,    54,    56,    42,    43,    95,    51,
      42,   104,    96,   104,   144,    46,    47,    42,   257,     8,
      56,    10,    44,   153,    56,    10,    57,   189,    41,   189,
      15,   270,    19,    10,   196,   197,   196,   197,    15,    51,
     124,    19,   126,    56,   128,    51,   130,   191,   192,   193,
     194,   195,     9,    32,    33,   139,   206,    14,    19,   211,
     212,    32,    33,   225,    41,   225,   216,   217,    51,   199,
     200,   201,   202,   203,    32,    33,    32,    33,    57,     3,
       4,     5,     6,   213,   214,   215,    43,   189,     3,     4,
       5,     6,     7,    19,   196,   197,   189,    42,   189,    57,
      53,    57,    17,   196,   197,   196,   197,   191,   192,   193,
     194,   195,    50,   268,    42,   226,    56,     8,     9,    10,
      11,   205,    13,    14,    15,    16,    29,    30,     8,    42,
       9,    42,   225,    13,   225,    14,    45,    46,    47,    48,
      49,    10,    19,    46,    47,    19,    15,   258,    57,   260,
      41,    42,    43,    44,    19,   266,    46,    47,     8,     9,
      10,    11,   273,    13,    14,    15,    16,    28,    29,    30,
      20,    21,    11,    51,    24,    19,    26,    16,    56,    50,
      28,    29,    30,    56,    45,    46,    47,    48,    49,    51,
      40,    48,    49,    56,    56,    50,    57,    45,    46,    47,
      48,    49,     8,     9,    10,    11,    51,    13,    14,    15,
      16,    56,    48,    49,    20,    21,    56,    50,    24,    56,
      26,    27,     8,     9,    10,    11,    51,    13,    14,    15,
      16,    56,    18,    50,    20,    21,    50,    50,    24,    57,
      26,     8,     9,    10,    11,    55,    13,    14,    15,    16,
      51,    51,    51,    20,    21,    56,    56,    24,    25,    26,
       8,     9,    10,    11,    51,    13,    14,    15,    16,    56,
      52,    52,    20,    21,    22,    51,    24,    52,    26,     8,
       9,    10,    11,    51,    13,    14,    15,    16,    52,    51,
       8,    20,    21,    10,     9,    24,    50,    26,    45,    46,
      47,    48,    49,     3,     4,     5,     6,     7,    11,     8,
      57,    45,    46,    47,    48,    49,    39,    45,    46,    47,
      48,    49,     3,     4,     5,     6,    46,    47,    48,    49,
      46,    47,    48,    49,    55,    57,    50,    23,    57,    50,
       7,   225,    33,   122,    57,    57,    56,    56,    56,    56,
      52,    52,    58,    57,    52,    52,    49,    49,   222,    32,
      50,    57,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    60,    61,    62,    63,
      64,    65,    68,    72,     8,    13,     9,    14,    10,    15,
      11,    16,    12,     0,    17,    62,    76,    50,    56,    51,
      19,    51,    19,    51,    19,    51,    19,    53,     8,     9,
      10,    11,    13,    14,    15,    16,    20,    21,    24,    26,
      67,    77,    78,    80,    81,    87,    88,    89,    90,    96,
     100,    50,    79,     3,     4,     5,     6,    69,    70,    71,
      42,     8,    13,    42,    91,    42,     9,    14,    43,    92,
      42,    10,    15,    41,    95,    42,    11,    16,    44,    94,
       3,     4,     5,     6,    63,    66,    19,    19,    19,    19,
      56,    56,    56,    56,    56,    18,    78,    50,    50,    50,
      50,    50,    50,     8,    13,     9,    14,    10,    15,    11,
      16,    57,    55,    52,    51,    52,    51,    52,    51,    52,
      51,     8,     9,    10,    11,    50,    54,    63,     8,    56,
      91,    97,     8,     9,    56,    91,    92,    93,    98,    56,
      95,    99,    31,    56,    83,    84,    85,    94,    98,    99,
       8,    10,    83,     8,    86,    88,    83,     8,     9,    10,
      11,    13,    14,    15,    16,    73,    74,    75,    80,    93,
      94,    95,    39,    71,    91,    91,    91,    91,    50,    56,
      97,    45,    46,    47,    48,    49,    56,    56,    98,    45,
      46,    47,    48,    49,    99,    46,    47,    83,    83,    98,
      99,    32,    33,    28,    29,    30,    29,    30,    57,    57,
      57,    57,    50,    57,    57,    55,    77,    52,    52,    52,
      52,    73,    57,    97,    97,    97,    97,    97,    73,    73,
      57,    98,    98,    98,    98,    98,    57,    91,    99,    57,
      83,    83,    98,    98,    98,    99,    99,    58,    77,    84,
      77,    75,    40,    57,    57,    57,    77,    25,    50,    27,
      22,    82,    88,    77,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    62,    62,    62,
      63,    63,    63,    63,    64,    64,    64,    64,    65,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    70,    70,    71,    71,    71,    71,    71,    71,
      71,    71,    72,    73,    73,    74,    74,    75,    75,    75,
      75,    76,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    79,    80,    81,    81,    81,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    84,    84,    84,    85,    85,
      86,    87,    88,    89,    90,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    97,    97,    97,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,    99,    99,   100,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     5,     5,     5,     5,     5,     2,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       0,     1,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     7,     0,     1,     1,     3,     1,     1,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     1,     2,
       2,     0,     4,     8,     6,     6,     0,     2,     1,     1,
       1,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       5,     3,     3,     3,     3,     1,     1,     1,     4,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     4,     1,     1,     1,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     1,     4,     4,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     4,     4
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
        case 2:
#line 106 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Program corect sintactic\n");}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[0].intnode).name)) printf("%s declared\n",(yyvsp[0].intnode).name); else {printf("%s redeclaration\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 122 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[0].boolnode).name)) printf("%s declared\n",(yyvsp[0].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[0].stringnode).name)) printf("%s declared\n",(yyvsp[0].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[0].floatnode).name)) printf("%s declared\n",(yyvsp[0].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1597 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[-2].intnode).name)) printf("%s declared\n",(yyvsp[-2].intnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].intnode).name);exit(0);}
											UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[-2].stringnode).name)) printf("%s declared\n",(yyvsp[-2].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].stringnode).name);exit(0);}
											UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[-2].boolnode).name)) printf("%s declared\n",(yyvsp[-2].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].boolnode).name);exit(0);}
											UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[-2].floatnode).name)) printf("%s declared\n",(yyvsp[-2].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].floatnode).name);exit(0);}
											UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 218 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut if.\n");}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 219 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut for. \n");}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 220 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut while. \n");}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 255 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].stringnode).name);exit(0);} 
									else printf("%s primeste \"%s\"\n",(yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 260 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].intnode).name);exit(0);} 
									else printf("%s primeste %d\n",(yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 266 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].boolnode).name);exit(0);} 
									else printf("%s primeste %s\n",(yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 271 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].floatnode).name);exit(0);} 
									else printf("%s primeste %f\n",(yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 277 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
						if (!intnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].intnode).name);exit(0);}
						else (yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 282 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 283 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
							(yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 292 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						if (!floatnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].floatnode).name);exit(0);}
						else (yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 297 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 298 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						(yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 306 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 307 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].intval);}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 311 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						if (!boolnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].boolnode).name);exit(0);}
						else strcpy((yyval.boolval),boolnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 316 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.boolval),(yyvsp[0].boolval));}
#line 1749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 317 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						strcpy((yyval.boolval),boolnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 325 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						if (!stringnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].stringnode).name);exit(0);}
						else strcpy((yyval.strval),stringnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 330 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 331 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						strcpy((yyval.strval),stringnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 347 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 349 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 350 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 351 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 352 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 353 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = pow((yyvsp[-2].intval),(yyvsp[0].intval));}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 354 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-1].intval);}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 359 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 362 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 363 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 364 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 365 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval);}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 366 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = pow((yyvsp[-2].floatval),(yyvsp[0].floatval));}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 372 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 373 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),strcat((yyvsp[-2].strval),(yyvsp[0].strval)));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 374 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[-1].strval));}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 375 "DarthPlus.y" /* yacc.c:1646  */
    {char temp[100];strcpy(temp,(yyvsp[-2].strval));for(int i=0;i<(yyvsp[0].intval)-1;i++) strcat(temp,(yyvsp[-2].strval)); strcpy((yyval.strval),temp);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 380 "DarthPlus.y" /* yacc.c:1646  */
    {printf("S-a recunoscut: %s\n",(yyval.strval));}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 381 "DarthPlus.y" /* yacc.c:1646  */
    {printf("S-a recunoscut: %d\n",(yyval.intval));}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1901 "y.tab.c" /* yacc.c:1646  */
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
#line 384 "DarthPlus.y" /* yacc.c:1906  */

int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int FindIntNode(char* name)
{
	int i;
	for (i = 0;i<nr_inodes;i++)
	{
		if (!strcmp(name,intnodes[i].name))
		return i;
	}
	return -1;
}

int AddIntNode(char *name)
{
	if (FindIntNode(name)!=-1)
	return 0;
	strcpy(intnodes[nr_inodes].name,name);
	intnodes[nr_inodes].val = 0;
	intnodes[nr_inodes].init = 0;
	nr_inodes++;
	return 1;
}

int UpdateIntVal(char *name,int val)
{
	int i;
	i =FindIntNode(name);
	if (i == -1)
	return 0;
	intnodes[i].val = val;
	intnodes[i].init = 1;
}

int FindBoolNode(char* name)
{
	int i;
	for (i = 0;i<nr_bnodes;i++)
	{
		if (!strcmp(name,boolnodes[i].name))
		return i;
	}
	return -1;
}

int FindStringNode(char* name)
{
	int i;
	for (i = 0;i<nr_snodes;i++)
	{
		if (!strcmp(name,stringnodes[i].name))

		return i;
	}
	return -1;
}

int AddBoolNode(char *name)
{
	if (FindBoolNode(name)!=-1)
	return 0;
	strcpy(boolnodes[nr_bnodes].name,name);
	strcpy(boolnodes[nr_bnodes].val , "\0");
	boolnodes[nr_bnodes].init = 0;
	nr_bnodes++;
	return 1;
}

int UpdateBoolVal(char *name,char *val)
{
	int i;
	i =FindBoolNode(name);
	if (i == -1)
	return 0;
    strcpy(boolnodes[i].val,val);
	boolnodes[i].init = 1;
}

int AddStringNode(char *name)
{
	if (FindStringNode(name)!=-1)
	return 0;
	strcpy(stringnodes[nr_snodes].name,name);
	strcpy(stringnodes[nr_snodes].val,"");
	stringnodes[nr_snodes].init = 0;
	nr_snodes++;
	return 1;
}

int UpdateStringVal(char *name,char * val)
{
	int i;
	i =FindStringNode(name);
	if (i == -1)
	return 0;
	strcpy(stringnodes[i].val,val);
	stringnodes[i].init = 1;
}

int FindFloatNode(char* name)
{
	int i;
	for (i = 0;i<nr_fnodes;i++)
	{
		if (!strcmp(name,floatnodes[i].name))
		return i;
	}
	return -1;
}

int AddFloatNode(char *name)
{
	if (FindFloatNode(name)!=-1)
	return 0;
	strcpy(floatnodes[nr_fnodes].name,name);
	floatnodes[nr_fnodes].val = 0;
	floatnodes[nr_fnodes].init = 0;
	nr_fnodes++;
	return 1;
}

int UpdateFloatVal(char *name,double val)
{
	int i;
	i =FindFloatNode(name);
	if (i == -1)
	return 0;
	floatnodes[i].val = val;
	floatnodes[i].init = 1;
}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
