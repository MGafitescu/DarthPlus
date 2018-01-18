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
int UpdateBoolVal(char *name,int  val);

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
    LE = 283,
    GE = 284,
    EQUAL = 285,
    DIFF = 286,
    NOT = 287,
    AND = 288,
    OR = 289,
    ADD = 290,
    MIN = 291,
    POW = 292,
    MUL = 293,
    DIV = 294,
    BEGIN_FUNCTION = 295,
    END_FUNCTION = 296,
    ENDL = 297,
    STRING = 298,
    INT = 299,
    FLOAT = 300,
    BOOL = 301
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
#define ADD 290
#define MIN 291
#define POW 292
#define MUL 293
#define DIV 294
#define BEGIN_FUNCTION 295
#define END_FUNCTION 296
#define ENDL 297
#define STRING 298
#define INT 299
#define FLOAT 300
#define BOOL 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 36 "DarthPlus.y" /* yacc.c:355  */

int intval;
double floatval;
char* strval;
int boolval;
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
	int val;
} boolnode;

#line 264 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   445

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  295

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      58,    59,    48,    49,    57,    51,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    52,
      61,     2,    62,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    47,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      45,    46
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
     230,   231,   232,   233,   234,   239,   240,   241,   242,   243,
     244,   248,   249,   254,   258,   263,   269,   274,   280,   285,
     286,   290,   295,   300,   301,   305,   309,   310,   314,   319,
     320,   324,   328,   333,   334,   338,   342,   343,   344,   345,
     350,   351,   352,   353,   354,   355,   356,   357,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   375,   376,   377,
     378,   383,   384,   385,   386,   387,   388,   389,   390,   391
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
  "LE", "GE", "EQUAL", "DIFF", "NOT", "AND", "OR", "ADD", "MIN", "POW",
  "MUL", "DIV", "BEGIN_FUNCTION", "END_FUNCTION", "ENDL", "STRING", "INT",
  "FLOAT", "BOOL", "'^'", "'*'", "'+'", "'/'", "'-'", "';'", "'['", "']'",
  "'{'", "'}'", "','", "'('", "')'", "'?'", "'<'", "'>'", "$accept",
  "progr", "declarations", "declaration", "variable_decl", "array_decl",
  "struct_decl", "struct_var_decl", "data_id_type", "const_decl",
  "param_list_decl", "params_decl", "param_decl", "function_decl",
  "param_list", "params", "param", "body", "list", "statement", "test",
  "function_call", "control", "else", "exprlog", "exprlognr", "exprlogst",
  "exprfor", "assgnst", "assgnint", "assgnbl", "assgnfl", "numberint",
  "numberfl", "gnumber", "ebool", "estring", "econst", "exprint", "exprfl",
  "exprst", "print", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    94,    42,    43,
      47,    45,    59,    91,    93,   123,   125,    44,    40,    41,
      63,    60,    62
};
# endif

#define YYPACT_NINF -164

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-164)))

#define YYTABLE_NINF -110

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     271,    38,   145,   140,   151,    19,     6,   141,   -28,   -23,
    -164,  -164,  -164,  -164,     0,    48,     8,    77,    54,    90,
      71,   120,    73,  -164,   372,   135,  -164,  -164,   406,   162,
      15,   170,    11,   180,    45,   181,    16,   410,   209,   221,
     222,   227,  -164,  -164,  -164,  -164,   168,   176,   189,   196,
     206,   315,  -164,   220,  -164,   236,   243,   246,   247,  -164,
     249,  -164,  -164,   156,   177,   179,   188,   248,   255,  -164,
     211,   260,  -164,  -164,  -164,   264,   261,  -164,  -164,  -164,
     266,   274,  -164,  -164,  -164,   278,   281,  -164,  -164,  -164,
     329,   331,   328,   335,   299,    12,    28,    25,    -6,   187,
      34,   187,   344,   187,   207,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,   313,   406,  -164,    15,  -164,    15,  -164,    15,  -164,
      15,  -164,  -164,  -164,  -164,  -164,  -164,   304,   152,    28,
    -164,   352,   154,   155,    25,  -164,  -164,  -164,   357,    -6,
    -164,   -27,   187,   187,    51,  -164,  -164,  -164,   232,   126,
     298,   306,   311,   312,   317,   319,   325,   330,   332,    66,
     209,   336,   320,   107,   190,   191,   213,   215,   339,   367,
     368,   370,   371,   333,  -164,  -164,  -164,  -164,  -164,   372,
    -164,   340,   375,   377,   378,  -164,   207,    42,    28,    28,
      28,    28,    28,   207,   207,   134,    25,    25,    25,    25,
      25,   -19,    15,    -6,  -164,   109,   208,    67,   187,   187,
      25,    25,    25,    25,    25,    25,    -6,    -6,  -164,  -164,
    -164,  -164,  -164,  -164,  -164,  -164,  -164,   374,   372,    25,
     372,  -164,   207,   276,  -164,  -164,  -164,  -164,   376,  -164,
     369,   102,   102,   382,  -164,   379,   380,  -164,   373,   110,
     110,   385,  -164,  -164,  -164,  -164,  -164,   393,  -164,   357,
     357,   357,   357,   357,   357,   -27,   -27,   372,   334,   388,
     295,  -164,  -164,  -164,  -164,  -164,   353,  -164,   344,  -164,
     372,   414,  -164,   372,  -164
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
      24,    22,   106,   108,   109,   107,     0,     0,     0,     0,
       0,     0,    52,     0,    58,     0,     0,     0,     0,    25,
       0,     4,     2,     0,     0,     0,     0,     0,    31,    32,
       0,    88,    90,    89,    26,     0,    92,    94,    93,    29,
       0,   102,   104,   103,    27,     0,    98,   100,    99,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    51,    53,    60,    54,    55,
      57,    56,    59,    34,    35,    40,    41,    36,    37,    38,
      39,     0,     0,    14,     0,    16,     0,    15,     0,    17,
       0,    10,    13,    12,    11,    19,    18,     0,    88,     0,
     110,    85,    88,    92,     0,    97,    96,   118,    87,     0,
     127,    84,     0,     0,    86,    68,    69,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,    92,   102,    98,    90,    94,
     104,   100,     0,    44,    45,    50,    47,    48,    49,     0,
      33,     0,     0,     0,     0,    20,    43,     0,     0,     0,
       0,     0,     0,    43,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     134,   133,   135,   136,   138,   137,   139,     0,     0,     0,
       0,    62,     0,     0,    91,    95,   105,   101,     0,   117,
     116,   114,   112,   115,   113,     0,     0,   126,   125,   123,
     121,   124,   122,   129,   130,   128,    71,    73,    74,    75,
      76,    79,    80,    77,    78,    81,    82,     0,     0,     0,
       0,    46,    42,   111,   120,   119,    66,    64,     0,    65,
       0,     0,    83,    67,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   434,   -30,  -164,  -164,  -164,  -164,  -164,
    -164,  -164,   321,  -164,  -109,  -164,   200,  -164,  -163,   -51,
    -164,   -93,  -164,  -164,   -89,   205,  -164,  -164,  -164,  -100,
    -164,  -164,   -22,   413,   -91,   -31,   -33,  -164,  -120,   -87,
     -95,  -164
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    95,    50,    12,
      67,    68,    69,    13,   182,   183,   184,    26,    51,    52,
      62,    53,    54,   291,   154,   155,   156,   171,    55,    56,
      57,    58,   145,   146,   147,   157,   150,    59,   141,   158,
     159,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     106,    84,   172,   151,    81,    89,    23,    94,    74,    82,
     148,   185,   169,   186,   173,    90,    91,    92,    93,   197,
      76,   212,   213,    71,    27,    77,   243,    86,    72,   212,
     213,    22,    87,   142,   143,    28,   138,    83,    72,    77,
     263,    72,   160,   161,   162,   163,    14,   164,   165,   166,
     167,    15,   149,    29,   211,    81,    78,   205,   217,    73,
      82,    31,    88,   214,   215,   137,   216,    30,   136,    73,
      78,   188,    73,   187,   140,   278,   168,   280,   250,   251,
     252,   253,   254,   144,   218,   219,   139,   248,    83,   198,
     199,   200,   201,   202,   255,   256,    32,   226,   227,   218,
     219,   249,   191,   185,   192,   186,   193,    33,   194,    34,
     185,   185,   186,   186,   286,   212,   213,   140,   265,   258,
     259,   260,   261,   262,    35,   237,   263,   293,    37,   267,
     268,   275,   276,   269,   270,   271,   272,   273,   274,    36,
     218,   219,   218,   219,     1,     2,     3,     4,     5,   185,
      18,   186,   201,   202,    16,    19,   226,   227,    24,    17,
     209,   210,    20,   188,   113,   187,   240,    21,   266,   114,
     188,   188,   187,   187,   212,   213,   140,   140,   140,   140,
     140,   206,   207,   208,   209,   210,   115,    61,   292,   117,
     264,   116,   106,   257,   118,   142,   143,    81,    86,   119,
      72,    77,    82,    87,   120,   124,    70,   124,   126,   188,
     196,   187,   203,   204,    75,   174,   175,   176,   177,   152,
     178,   179,   180,   181,    80,    85,   100,   106,    96,   106,
      83,    73,    78,    88,   101,   106,   220,   221,   222,   223,
      97,    98,   106,   124,   126,   153,    99,   102,   -21,   -23,
      83,    73,    78,    88,   103,   206,   207,   208,   209,   210,
     220,   221,   222,   223,   104,   123,   128,   257,   130,   224,
     225,   -24,   107,   -22,     1,     2,     3,     4,     5,   206,
     207,   208,   209,   210,    38,    39,    40,    41,   108,    42,
      43,    44,    45,   224,   225,   109,    46,    47,   110,   111,
      48,   112,    49,    38,    39,    40,    41,   121,    42,    43,
      44,    45,   122,   124,   126,    46,    47,   282,   125,    48,
     127,    49,   289,    38,    39,    40,    41,   128,    42,    43,
      44,    45,   129,   105,   130,    46,    47,   131,   133,    48,
     132,    49,    38,    39,    40,    41,   134,    42,    43,    44,
      45,   135,   170,   189,    46,    47,   195,   228,    48,   287,
      49,    38,    39,    40,    41,   229,    42,    43,    44,    45,
     230,   231,   239,    46,    47,   290,   232,    48,   233,    49,
      38,    39,    40,    41,   234,    42,    43,    44,    45,   235,
     242,   236,    46,    47,   244,   238,    48,  -106,    49,   198,
     199,   200,   201,   202,   206,   207,   208,   209,   210,    63,
      64,    65,    66,    90,    91,    92,    93,   199,   200,   201,
     202,   207,   208,   209,   210,  -108,  -109,   219,  -107,   245,
     241,   246,   247,   202,   277,   283,   210,   294,   284,   285,
     288,    25,   281,   190,   279,    79
};

static const yytype_uint16 yycheck[] =
{
      51,    34,   102,    98,    10,    36,     0,    37,    30,    15,
      97,   104,   101,   104,   103,     3,     4,     5,     6,   139,
       9,    48,    49,     8,    52,    14,   189,    11,    13,    48,
      49,    12,    16,     8,     9,    58,     8,    43,    13,    14,
      59,    13,     8,     9,    10,    11,     8,    13,    14,    15,
      16,    13,    58,    53,   149,    10,    45,   144,   153,    44,
      15,    53,    46,   152,   153,    95,   153,    19,    56,    44,
      45,   104,    44,   104,    96,   238,    42,   240,   198,   199,
     200,   201,   202,    58,    33,    34,    58,   196,    43,    47,
      48,    49,    50,    51,   203,   204,    19,    30,    31,    33,
      34,    59,   124,   196,   126,   196,   128,    53,   130,    19,
     203,   204,   203,   204,   277,    48,    49,   139,   213,   206,
     207,   208,   209,   210,    53,    59,    59,   290,    55,   218,
     219,   226,   227,   220,   221,   222,   223,   224,   225,    19,
      33,    34,    33,    34,     3,     4,     5,     6,     7,   242,
      10,   242,    50,    51,     9,    15,    30,    31,    17,    14,
      50,    51,    11,   196,     8,   196,    59,    16,    59,    13,
     203,   204,   203,   204,    48,    49,   198,   199,   200,   201,
     202,    47,    48,    49,    50,    51,     9,    52,   288,    10,
     212,    14,   243,    59,    15,     8,     9,    10,    11,    11,
      13,    14,    15,    16,    16,    53,    44,    53,    53,   242,
      58,   242,    58,    58,    44,     8,     9,    10,    11,    32,
      13,    14,    15,    16,    44,    44,    58,   278,    19,   280,
      43,    44,    45,    46,    58,   286,    28,    29,    30,    31,
      19,    19,   293,    53,    53,    58,    19,    58,    58,    58,
      43,    44,    45,    46,    58,    47,    48,    49,    50,    51,
      28,    29,    30,    31,    58,    54,    53,    59,    53,    61,
      62,    58,    52,    58,     3,     4,     5,     6,     7,    47,
      48,    49,    50,    51,     8,     9,    10,    11,    52,    13,
      14,    15,    16,    61,    62,    52,    20,    21,    52,    52,
      24,    52,    26,     8,     9,    10,    11,    59,    13,    14,
      15,    16,    57,    53,    53,    20,    21,    41,    54,    24,
      54,    26,    27,     8,     9,    10,    11,    53,    13,    14,
      15,    16,    54,    18,    53,    20,    21,     8,    10,    24,
       9,    26,     8,     9,    10,    11,    11,    13,    14,    15,
      16,    52,     8,    40,    20,    21,    52,    59,    24,    25,
      26,     8,     9,    10,    11,    59,    13,    14,    15,    16,
      59,    59,    52,    20,    21,    22,    59,    24,    59,    26,
       8,     9,    10,    11,    59,    13,    14,    15,    16,    59,
      57,    59,    20,    21,    54,    59,    24,    58,    26,    47,
      48,    49,    50,    51,    47,    48,    49,    50,    51,     3,
       4,     5,     6,     3,     4,     5,     6,    48,    49,    50,
      51,    48,    49,    50,    51,    58,    58,    34,    58,    54,
      59,    54,    54,    51,    60,    59,    51,    23,    59,    59,
      52,     7,   242,   122,   239,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    64,    65,    66,    67,
      68,    69,    72,    76,     8,    13,     9,    14,    10,    15,
      11,    16,    12,     0,    17,    66,    80,    52,    58,    53,
      19,    53,    19,    53,    19,    53,    19,    55,     8,     9,
      10,    11,    13,    14,    15,    16,    20,    21,    24,    26,
      71,    81,    82,    84,    85,    91,    92,    93,    94,   100,
     104,    52,    83,     3,     4,     5,     6,    73,    74,    75,
      44,     8,    13,    44,    95,    44,     9,    14,    45,    96,
      44,    10,    15,    43,    99,    44,    11,    16,    46,    98,
       3,     4,     5,     6,    67,    70,    19,    19,    19,    19,
      58,    58,    58,    58,    58,    18,    82,    52,    52,    52,
      52,    52,    52,     8,    13,     9,    14,    10,    15,    11,
      16,    59,    57,    54,    53,    54,    53,    54,    53,    54,
      53,     8,     9,    10,    11,    52,    56,    67,     8,    58,
      95,   101,     8,     9,    58,    95,    96,    97,   102,    58,
      99,   103,    32,    58,    87,    88,    89,    98,   102,   103,
       8,     9,    10,    11,    13,    14,    15,    16,    42,    87,
       8,    90,    92,    87,     8,     9,    10,    11,    13,    14,
      15,    16,    77,    78,    79,    84,    97,    98,    99,    40,
      75,    95,    95,    95,    95,    52,    58,   101,    47,    48,
      49,    50,    51,    58,    58,   102,    47,    48,    49,    50,
      51,   103,    48,    49,    87,    87,   102,   103,    33,    34,
      28,    29,    30,    31,    61,    62,    30,    31,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    52,
      59,    59,    57,    81,    54,    54,    54,    54,    77,    59,
     101,   101,   101,   101,   101,    77,    77,    59,   102,   102,
     102,   102,   102,    59,    95,   103,    59,    87,    87,   102,
     102,   102,   102,   102,   102,   103,   103,    60,    81,    88,
      81,    79,    41,    59,    59,    59,    81,    25,    52,    27,
      22,    86,    92,    81,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    68,    68,    68,    68,    69,    70,
      70,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    85,    85,    85,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    88,    88,
      88,    89,    89,    90,    91,    92,    93,    94,    95,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    98,    98,
      98,    98,    99,    99,    99,    99,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   104,   104,   104,   104,   104,   104,   104,   104,   104
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
       3,     3,     3,     5,     3,     3,     3,     3,     1,     1,
       1,     4,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     4,     3,     3,     3,     3,     3,     3,     1,     4,
       4,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     4,     4,     4,     4,     4,     4,     4,     4,     4
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
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 120 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[0].intnode).name)) printf("%s declared\n",(yyvsp[0].intnode).name); else {printf("%s redeclaration\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 122 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[0].boolnode).name)) printf("%s declared\n",(yyvsp[0].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[0].stringnode).name)) printf("%s declared\n",(yyvsp[0].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[0].floatnode).name)) printf("%s declared\n",(yyvsp[0].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 147 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[-2].intnode).name)) printf("%s declared\n",(yyvsp[-2].intnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].intnode).name);exit(0);}
											UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 149 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[-2].stringnode).name)) printf("%s declared\n",(yyvsp[-2].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].stringnode).name);exit(0);}
											UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 151 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[-2].boolnode).name)) printf("%s declared\n",(yyvsp[-2].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].boolnode).name);exit(0);}
											UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[-2].floatnode).name)) printf("%s declared\n",(yyvsp[-2].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].floatnode).name);exit(0);}
											UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 218 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditie logica din if se evalueaza la: %d.\n",(yyvsp[-5].boolval));}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 220 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditie logica din while se evalueaza la: %d. \n",(yyvsp[-3].boolval));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 228 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 229 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 230 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 231 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-1].boolval);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 232 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=!(yyvsp[0].boolval);}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 233 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].boolval)&&(yyvsp[0].boolval);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 234 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].boolval)||(yyvsp[0].boolval);}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 239 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)<=(yyvsp[0].floatval);}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 240 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)>=(yyvsp[0].floatval);}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)<(yyvsp[0].floatval);}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 242 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)>(yyvsp[0].floatval);}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 243 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)==(yyvsp[0].floatval);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 244 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)!=(yyvsp[0].floatval);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 248 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=!strcmp((yyvsp[-2].strval),(yyvsp[0].strval));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 249 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=strcmp((yyvsp[-2].strval),(yyvsp[0].strval));}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 254 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditia logica din for se evalueaza la: %d\n",(yyvsp[-2].boolval));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 258 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].stringnode).name);exit(0);} 
									else printf("%s primeste \"%s\"\n",(yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 263 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].intnode).name);exit(0);} 
									else printf("%s primeste %d\n",(yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 269 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].boolnode).name);exit(0);} 
									else printf("%s primeste %d\n",(yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 274 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].floatnode).name);exit(0);} 
									else printf("%s primeste %f\n",(yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 280 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
						if (!intnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].intnode).name);exit(0);}
						else (yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 285 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 286 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
							(yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 295 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						if (!floatnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].floatnode).name);exit(0);}
						else (yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 300 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 301 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						(yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 309 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 310 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].intval);}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 314 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						if (!boolnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].boolnode).name);exit(0);}
						else (yyval.boolval)=boolnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 319 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 320 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						(yyval.boolval)=boolnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 328 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						if (!stringnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].stringnode).name);exit(0);}
						else strcpy((yyval.strval),stringnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 333 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 334 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						strcpy((yyval.strval),stringnodes[i].val);
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 350 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 352 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 353 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 354 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 355 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 356 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = pow((yyvsp[-2].intval),(yyvsp[0].intval));}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 357 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-1].intval);}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 362 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 365 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval);}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 366 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval);}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 367 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval);}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 368 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval);}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 369 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = pow((yyvsp[-2].floatval),(yyvsp[0].floatval));}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 375 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[0].strval));}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 376 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),strcat((yyvsp[-2].strval),(yyvsp[0].strval)));}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 377 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),(yyvsp[-1].strval));}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 378 "DarthPlus.y" /* yacc.c:1646  */
    {char temp[100];strcpy(temp,(yyvsp[-2].strval));for(int i=0;i<(yyvsp[0].intval)-1;i++) strcat(temp,(yyvsp[-2].strval)); strcpy((yyval.strval),temp);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 383 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].intnode).name,intnodes[FindIntNode((yyvsp[-1].intnode).name)].val);}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 384 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%f\n",(yyvsp[-1].floatnode).name,floatnodes[FindFloatNode((yyvsp[-1].floatnode).name)].val);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 385 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].boolnode).name,boolnodes[FindBoolNode((yyvsp[-1].boolnode).name)].val);}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 386 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%s\n",(yyvsp[-1].stringnode).name,stringnodes[FindStringNode((yyvsp[-1].stringnode).name)].val);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 387 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].intnode).name,intnodes[FindIntNode((yyvsp[-1].intnode).name)].val);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 388 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%f\n",(yyvsp[-1].floatnode).name,floatnodes[FindFloatNode((yyvsp[-1].floatnode).name)].val);}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 389 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].boolnode).name,boolnodes[FindBoolNode((yyvsp[-1].boolnode).name)].val);}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 390 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%s\n",(yyvsp[-1].stringnode).name,stringnodes[FindStringNode((yyvsp[-1].stringnode).name)].val);}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 391 "DarthPlus.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2053 "y.tab.c" /* yacc.c:1646  */
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
#line 394 "DarthPlus.y" /* yacc.c:1906  */

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
   boolnodes[nr_bnodes].val=0;
	boolnodes[nr_bnodes].init = 0;
	nr_bnodes++;
	return 1;
}

int UpdateBoolVal(char *name,int val)
{
	int i;
	i =FindBoolNode(name);
	if (i == -1)
	return 0;
    boolnodes[i].val=val;
	boolnodes[i].init = 1;
}

int AddStringNode(char *name)
{
	if (FindStringNode(name)!=-1)
	return 0;
	strcpy(stringnodes[nr_snodes].name,name);
	strcpy(stringnodes[nr_snodes].val,"\0");
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
