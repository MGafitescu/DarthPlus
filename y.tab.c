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
int UpdateStringVal(char *name,int val);

int FindFloatNode(char* name);
int AddFloatNode(char *name);
int UpdateFloatVal(char *name,int val);

int FindBoolNode(char* name);
int AddBoolNode(char *name);
int UpdateBoolVal(char *name,char  *val);

#line 101 "y.tab.c" /* yacc.c:339  */

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
    BOOL = 299,
    AOPERATOR = 300
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
#define AOPERATOR 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 35 "DarthPlus.y" /* yacc.c:355  */

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

#line 261 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 278 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      54,    55,    47,    46,    53,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    48,
       2,     2,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    98,    99,   102,   103,   104,   105,   106,
     109,   110,   111,   112,   115,   116,   117,   118,   121,   124,
     125,   128,   129,   130,   131,   132,   135,   136,   137,   138,
     141,   142,   145,   146,   149,   150,   151,   152,   153,   156,
     159,   160,   163,   164,   167,   168,   169,   170,   174,   178,
     179,   182,   183,   184,   185,   186,   187,   188,   191,   195,
     199,   200,   201,   204,   205,   209,   210,   211,   212,   213,
     214,   215,   220,   221,   222,   226,   227,   232,   236,   240,
     245,   249,   254,   255,   256,   257,   262,   263,   264,   265,
     269,   270,   274,   275,   276,   277,   281,   282,   283,   284,
     288,   289,   290,   291,   296,   297,   298,   299,   304,   305,
     306,   307,   308,   313,   314,   315,   316,   321,   322
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
  "BOOL", "AOPERATOR", "'+'", "'*'", "';'", "'['", "']'", "'{'", "'}'",
  "','", "'('", "')'", "'?'", "$accept", "progr", "declarations",
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
     295,   296,   297,   298,   299,   300,    43,    42,    59,    91,
      93,   123,   125,    44,    40,    41,    63
};
# endif

#define YYPACT_NINF -171

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-171)))

#define YYTABLE_NINF -104

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     325,    24,    36,    39,    82,    11,    29,   172,    -7,    -6,
    -171,  -171,  -171,  -171,     7,    51,    37,    81,    65,   135,
     113,   147,    61,  -171,   301,   121,  -171,  -171,   125,   140,
      13,   145,    19,   176,    12,   179,    27,   330,   212,   230,
     247,   248,  -171,  -171,  -171,  -171,   189,   209,   215,   221,
     226,   244,  -171,   233,  -171,   246,   251,   252,   253,  -171,
     257,  -171,  -171,   114,   133,   153,   154,  -171,   258,   254,
    -171,   268,   270,  -171,  -171,  -171,   273,   271,  -171,  -171,
    -171,   274,   277,  -171,  -171,  -171,   287,   289,  -171,  -171,
    -171,   331,   332,   333,   329,   294,    14,    38,    22,    -2,
     130,    74,   130,   336,   130,   184,  -171,  -171,  -171,  -171,
    -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   306,   125,  -171,    13,  -171,    13,  -171,    13,
    -171,    13,  -171,  -171,   298,   131,    38,  -171,   302,   137,
     159,    22,  -171,  -171,  -171,   303,    -2,  -171,   155,   130,
     130,   197,  -171,  -171,  -171,   107,   104,   295,   296,    -8,
     212,   297,   305,    63,   170,   192,   193,   207,   300,   304,
     307,   308,   309,   310,  -171,  -171,  -171,  -171,  -171,   301,
    -171,   299,   315,   316,   317,  -171,   184,   -11,    38,   184,
     184,    28,    22,   168,    -2,    13,  -171,    93,    49,    77,
     130,   130,    22,    22,    22,    -2,    -2,  -171,  -171,   312,
     301,    22,   301,  -171,   184,   196,  -171,  -171,  -171,  -171,
     314,  -171,  -171,   318,   319,  -171,  -171,  -171,   313,  -171,
    -171,   322,  -171,   303,   303,   303,   155,   155,   301,   263,
     311,   224,  -171,  -171,  -171,  -171,  -171,   282,  -171,   336,
    -171,   301,   334,  -171,   301,  -171
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       8,     9,     7,     5,    10,     0,    12,     0,    11,     0,
      13,     0,     0,     1,     0,     0,    58,     3,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    23,
      24,    22,   100,   102,   103,   101,     0,     0,     0,     0,
       0,     0,    49,     0,    55,     0,     0,     0,     0,    25,
       0,     4,     2,     0,     0,     0,     0,    34,     0,    31,
      32,     0,    82,    84,    83,    26,     0,    86,    88,    87,
      29,     0,    96,    98,    97,    27,     0,    92,    94,    93,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    48,    50,    57,    51,
      52,    54,    53,    56,    10,    35,    12,    38,    11,    36,
      13,    37,     0,     0,    14,     0,    16,     0,    15,     0,
      17,     0,    19,    18,     0,    82,     0,   104,    79,    82,
      86,     0,    91,    90,   108,    81,     0,   113,    78,     0,
       0,    80,    65,    66,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    86,    96,    92,    84,    88,
      98,    94,     0,    41,    42,    47,    44,    45,    46,     0,
      33,     0,     0,     0,     0,    20,    40,     0,     0,    40,
      40,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,   117,     0,
       0,     0,     0,    59,     0,     0,    85,    89,    99,    95,
       0,   107,   106,     0,     0,   112,   111,   115,   114,   116,
      68,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,     0,    43,    39,   105,   110,   109,    63,    61,     0,
      62,     0,     0,    77,    64,    60
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -171,  -171,  -171,   349,   -21,  -171,  -171,  -171,  -171,  -171,
    -171,  -171,   249,  -171,    96,  -171,   156,  -171,  -170,   -51,
    -171,  -101,  -171,  -171,   -90,   160,  -171,  -171,  -171,  -100,
    -171,  -171,   -28,   343,   -99,   -31,   -33,  -171,  -125,   -83,
     -89,  -171
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,    96,    50,    12,
      68,    69,    70,    13,   172,   173,   174,    26,    51,    52,
      62,    53,    54,   252,   151,   152,   153,   161,    55,    56,
      57,    58,   142,   143,   144,   154,   147,    59,   138,   155,
     156,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     107,    85,    75,   162,   175,    90,   176,    67,    82,   215,
     148,   187,   159,    83,   163,   145,    95,    91,    92,    93,
      94,    72,    82,    22,   200,   201,    73,    83,    77,    23,
     139,   140,    14,    78,   188,    73,    78,    15,    87,    84,
     239,    27,   241,    88,   221,    16,   135,   209,    28,    18,
      17,    73,   146,    84,    19,    74,    29,   193,   191,   196,
     197,   199,    79,   222,    74,    79,   133,   198,   247,   137,
      30,    89,   178,   192,   177,   134,   141,   202,   203,   204,
      74,   254,   157,   225,   158,   175,    31,   176,   175,   175,
     176,   176,   136,    20,   192,   200,   201,   181,    21,   182,
      32,   183,    67,   184,   225,   228,   205,   206,   137,   226,
     231,   232,    37,   175,    33,   176,   236,   237,   212,   233,
     234,   235,   114,   194,   195,   200,   201,   115,    63,    64,
      65,    66,   227,   205,   206,   202,   203,   204,   139,   140,
      82,    87,   116,    73,    78,    83,    88,   117,   230,   253,
     194,   195,   192,   178,    34,   177,   178,   178,   177,   177,
     137,   149,    35,   118,   107,   120,    36,   229,   119,    61,
     121,    84,    74,    79,    89,     1,     2,     3,     4,     5,
     125,   178,    71,   177,   150,   186,   125,    76,   107,    24,
     107,   189,   164,   165,   166,   167,   107,   168,   169,   170,
     171,   194,   195,   107,    38,    39,    40,    41,   127,    42,
      43,    44,    45,   190,   194,   195,    46,    47,    81,   125,
      48,    86,    49,   227,   -21,    84,    74,    79,    89,   200,
     201,    97,    38,    39,    40,    41,   243,    42,    43,    44,
      45,   127,   129,   101,    46,    47,   -23,   -24,    48,    98,
      49,   250,    38,    39,    40,    41,   131,    42,    43,    44,
      45,   -22,   106,   102,    46,    47,    99,   100,    48,   103,
      49,    38,    39,    40,    41,   104,    42,    43,    44,    45,
     105,   108,   220,    46,    47,   223,   224,    48,   248,    49,
      38,    39,    40,    41,   109,    42,    43,    44,    45,   110,
     111,   112,    46,    47,   251,   113,    48,   123,    49,    38,
      39,    40,    41,   122,    42,    43,    44,    45,   124,   125,
     127,    46,    47,   126,   128,    48,   129,    49,     1,     2,
       3,     4,     5,    91,    92,    93,    94,   130,   131,   114,
     120,   116,   132,   118,   160,   179,   185,   188,   192,   216,
     207,   208,   210,   211,  -100,   201,    25,   255,  -102,   249,
     195,  -103,  -101,   214,   213,   217,   218,   219,   238,   244,
     242,   240,   180,   245,   246,    80
};

static const yytype_uint8 yycheck[] =
{
      51,    34,    30,   103,   105,    36,   105,    28,    10,   179,
      99,   136,   102,    15,   104,    98,    37,     3,     4,     5,
       6,     8,    10,    12,    32,    33,    13,    15,     9,     0,
       8,     9,     8,    14,    45,    13,    14,    13,    11,    41,
     210,    48,   212,    16,    55,     9,     8,    55,    54,    10,
      14,    13,    54,    41,    15,    42,    49,   146,   141,   149,
     150,   150,    43,   188,    42,    43,    52,   150,   238,    97,
      19,    44,   105,    45,   105,    96,    54,    28,    29,    30,
      42,   251,     8,    55,    10,   186,    49,   186,   189,   190,
     189,   190,    54,    11,    45,    32,    33,   125,    16,   127,
      19,   129,   123,   131,    55,   194,    29,    30,   136,   192,
     200,   201,    51,   214,    49,   214,   205,   206,    55,   202,
     203,   204,     8,    46,    47,    32,    33,    13,     3,     4,
       5,     6,    55,    29,    30,    28,    29,    30,     8,     9,
      10,    11,     9,    13,    14,    15,    16,    14,    55,   249,
      46,    47,    45,   186,    19,   186,   189,   190,   189,   190,
     188,    31,    49,    10,   215,    11,    19,   195,    15,    48,
      16,    41,    42,    43,    44,     3,     4,     5,     6,     7,
      49,   214,    42,   214,    54,    54,    49,    42,   239,    17,
     241,    54,     8,     9,    10,    11,   247,    13,    14,    15,
      16,    46,    47,   254,     8,     9,    10,    11,    49,    13,
      14,    15,    16,    54,    46,    47,    20,    21,    42,    49,
      24,    42,    26,    55,    54,    41,    42,    43,    44,    32,
      33,    19,     8,     9,    10,    11,    40,    13,    14,    15,
      16,    49,    49,    54,    20,    21,    54,    54,    24,    19,
      26,    27,     8,     9,    10,    11,    49,    13,    14,    15,
      16,    54,    18,    54,    20,    21,    19,    19,    24,    54,
      26,     8,     9,    10,    11,    54,    13,    14,    15,    16,
      54,    48,   186,    20,    21,   189,   190,    24,    25,    26,
       8,     9,    10,    11,    48,    13,    14,    15,    16,    48,
      48,    48,    20,    21,    22,    48,    24,    53,    26,     8,
       9,    10,    11,    55,    13,    14,    15,    16,    50,    49,
      49,    20,    21,    50,    50,    24,    49,    26,     3,     4,
       5,     6,     7,     3,     4,     5,     6,    50,    49,     8,
      11,     9,    48,    10,     8,    39,    48,    45,    45,    50,
      55,    55,    55,    48,    54,    33,     7,    23,    54,    48,
      47,    54,    54,    53,    55,    50,    50,    50,    56,    55,
     214,   211,   123,    55,    55,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    58,    59,    60,    61,
      62,    63,    66,    70,     8,    13,     9,    14,    10,    15,
      11,    16,    12,     0,    17,    60,    74,    48,    54,    49,
      19,    49,    19,    49,    19,    49,    19,    51,     8,     9,
      10,    11,    13,    14,    15,    16,    20,    21,    24,    26,
      65,    75,    76,    78,    79,    85,    86,    87,    88,    94,
      98,    48,    77,     3,     4,     5,     6,    61,    67,    68,
      69,    42,     8,    13,    42,    89,    42,     9,    14,    43,
      90,    42,    10,    15,    41,    93,    42,    11,    16,    44,
      92,     3,     4,     5,     6,    61,    64,    19,    19,    19,
      19,    54,    54,    54,    54,    54,    18,    76,    48,    48,
      48,    48,    48,    48,     8,    13,     9,    14,    10,    15,
      11,    16,    55,    53,    50,    49,    50,    49,    50,    49,
      50,    49,    48,    52,    61,     8,    54,    89,    95,     8,
       9,    54,    89,    90,    91,    96,    54,    93,    97,    31,
      54,    81,    82,    83,    92,    96,    97,     8,    10,    81,
       8,    84,    86,    81,     8,     9,    10,    11,    13,    14,
      15,    16,    71,    72,    73,    78,    91,    92,    93,    39,
      69,    89,    89,    89,    89,    48,    54,    95,    45,    54,
      54,    96,    45,    97,    46,    47,    81,    81,    96,    97,
      32,    33,    28,    29,    30,    29,    30,    55,    55,    55,
      55,    48,    55,    55,    53,    75,    50,    50,    50,    50,
      71,    55,    95,    71,    71,    55,    96,    55,    97,    89,
      55,    81,    81,    96,    96,    96,    97,    97,    56,    75,
      82,    75,    73,    40,    55,    55,    55,    75,    25,    48,
      27,    22,    80,    86,    75,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    60,    60,    60,
      61,    61,    61,    61,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    65,    65,    65,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    77,    78,
      79,    79,    79,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    84,    85,    86,
      87,    88,    89,    89,    89,    89,    90,    90,    90,    90,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      94,    94,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    97,    97,    97,    97,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     5,     5,     5,     5,     5,     2,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       0,     1,     1,     3,     1,     2,     2,     2,     2,     7,
       0,     1,     1,     3,     1,     1,     1,     1,     3,     1,
       2,     2,     2,     2,     2,     1,     2,     2,     0,     4,
       8,     6,     6,     0,     2,     1,     1,     1,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       3,     3,     1,     1,     1,     4,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     4,     3,     3,     1,     4,
       4,     3,     3,     1,     3,     3,     3,     4,     4
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
#line 95 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Program corect sintactic\n");}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 109 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[0].intnode).name)) printf("%s declared\n",(yyvsp[0].intnode).name); else {printf("%s redeclaration\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 112 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[0].boolnode).name)) printf("%s declared\n",(yyvsp[0].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 199 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut if.\n");}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 200 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut for. \n");}
#line 1580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 201 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Recunoscut while. \n");}
#line 1586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 321 "DarthPlus.y" /* yacc.c:1646  */
    {printf("S-a recunoscut: %s\n",(yyval.strval));}
#line 1592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 322 "DarthPlus.y" /* yacc.c:1646  */
    {printf("S-a recunoscut: %d\n",(yyval.intval));}
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1602 "y.tab.c" /* yacc.c:1646  */
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
#line 325 "DarthPlus.y" /* yacc.c:1906  */

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

int AddBoolNode(char *name)
{
	if (FindBoolNode(name)!=-1)
	return 0;
	strcpy(boolnodes[nr_bnodes].name,name);
	strcpy(boolnodes[nr_bnodes].val , "\0");
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

}

int main(int argc, char** argv){
yyin=fopen(argv[1],"r");
yyparse();
} 
