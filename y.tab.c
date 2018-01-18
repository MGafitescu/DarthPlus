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

int last_func_type;
int last_func_nr;
struct IntNode intnodes[100];
int nr_inodes = 0;
struct StringNode stringnodes[100];
int nr_snodes = 0;
struct FloatNode floatnodes[100];
int nr_fnodes = 0;
struct BoolNode boolnodes[100];
int nr_bnodes = 0;
struct IntFuncNode intfuncnodes[100];
int nr_ifnodes = 0;
struct StringFuncNode stringfuncnodes[100];
int nr_sfnodes = 0;
struct FloatFuncNode floatfuncnodes[100];
int nr_ffnodes = 0;
struct BoolFuncNode boolfuncnodes[100];
int nr_bfnodes = 0;
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

int FindIntFuncNode(char* name);
int AddIntFuncNode(char *name);

int FindStringFuncNode(char* name);
int AddStringFuncNode(char *name);

int FindFloatFuncNode(char* name);
int AddFloatFuncNode(char *name);

int FindBoolFuncNode(char* name);
int AddBoolFuncNode(char *name);


#line 126 "y.tab.c" /* yacc.c:339  */

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
#line 60 "DarthPlus.y" /* yacc.c:355  */

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

#line 332 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 349 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   503

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  317

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    48,     2,     2,
      56,    57,    46,    44,    55,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
      59,    43,    60,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,    49,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   183,   183,   186,   187,   190,   191,   192,   193,   194,
     197,   199,   200,   201,   204,   205,   206,   207,   210,   213,
     214,   217,   218,   219,   220,   221,   224,   226,   228,   230,
     234,   235,   238,   239,   242,   243,   244,   245,   246,   247,
     248,   249,   252,   266,   280,   294,   310,   311,   314,   315,
     318,   319,   320,   321,   325,   329,   330,   333,   334,   335,
     336,   337,   338,   339,   342,   346,   350,   351,   352,   355,
     356,   360,   361,   362,   363,   364,   365,   366,   371,   372,
     373,   374,   375,   376,   380,   381,   386,   390,   395,   401,
     406,   412,   417,   418,   422,   427,   432,   433,   437,   441,
     442,   446,   451,   452,   456,   460,   465,   466,   470,   474,
     475,   476,   477,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   509,   510,   511,   512,   517,   518,   519,   520,
     521,   522,   523,   524,   525
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
  "LE", "GE", "EQUAL", "DIFF", "NOT", "AND", "OR", "UMINUS",
  "BEGIN_FUNCTION", "END_FUNCTION", "ENDL", "STRING", "INT", "FLOAT",
  "BOOL", "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", "';'", "'['",
  "']'", "'{'", "'}'", "','", "'('", "')'", "'?'", "'<'", "'>'", "$accept",
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
     295,   296,   297,    61,    43,    45,    42,    47,    37,    94,
      59,    91,    93,   123,   125,    44,    40,    41,    63,    60,
      62
};
# endif

#define YYPACT_NINF -185

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-185)))

#define YYTABLE_NINF -113

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     472,    24,    29,    91,   126,    -1,    42,   439,   -28,  -185,
    -185,  -185,  -185,  -185,    87,    40,   121,    41,   157,    69,
     159,    72,    57,  -185,   415,    52,  -185,  -185,    73,   477,
      16,    89,   477,    49,   112,   477,    82,   116,   477,    25,
     481,   103,   143,   149,   160,  -185,  -185,  -185,  -185,    75,
     122,   129,   130,   141,   358,  -185,   162,  -185,   178,   179,
     194,   209,  -185,   218,  -185,  -185,   170,   206,   221,   236,
     259,   196,   226,  -185,   248,  -185,  -185,  -185,   250,   255,
     254,  -185,  -185,  -185,   270,   262,   274,  -185,  -185,  -185,
     279,   281,   306,  -185,  -185,  -185,   362,   368,   371,   372,
     339,    22,    -5,    85,     5,   185,   269,   185,   387,   185,
      39,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,   360,   477,
      16,  -185,   364,    16,  -185,   378,    16,  -185,   379,    16,
    -185,  -185,  -185,  -185,  -185,  -185,   363,   241,    -5,    -5,
    -185,   220,   247,   267,    85,    85,  -185,  -185,  -185,   423,
       5,  -185,   298,   185,   185,    12,  -185,  -185,  -185,   227,
     172,   351,   370,   375,   376,   380,   381,   383,   394,   397,
       0,   103,   398,   369,    62,   285,   299,   324,   343,   365,
     401,   402,   409,   414,   404,  -185,  -185,  -185,  -185,  -185,
     415,  -185,   382,   415,   421,   415,   436,   415,   437,  -185,
      39,  -185,   403,    -5,    -5,    -5,    -5,    -5,    39,    39,
    -185,   417,    85,    85,    85,    85,    85,    43,     5,    16,
    -185,    70,   203,   123,   185,   185,    85,    85,    85,    85,
      85,    85,     5,     5,  -185,  -185,  -185,  -185,  -185,  -185,
    -185,  -185,  -185,   395,   415,    85,   415,  -185,    39,   150,
    -185,   280,  -185,   300,  -185,   319,  -185,   433,  -185,   191,
     191,   442,   442,  -185,   435,   438,  -185,   314,   314,   444,
     444,  -185,  -185,   448,  -185,  -185,   462,  -185,   423,   423,
     423,   423,   423,   423,   298,   298,   415,   377,   447,   338,
    -185,  -185,  -185,  -185,  -185,  -185,  -185,  -185,   396,  -185,
     387,  -185,   415,   475,  -185,   415,  -185
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       8,     9,     7,     5,    10,     0,    13,     0,    12,     0,
      11,     0,     0,     1,     0,     0,    64,     3,     0,    30,
       0,     0,    30,     0,     0,    30,     0,     0,    30,     0,
       0,    21,    23,    24,    22,   109,   111,   112,   110,     0,
       0,     0,     0,     0,     0,    55,     0,    61,     0,     0,
       0,     0,    25,     0,     4,     2,     0,     0,     0,     0,
       0,     0,    31,    32,    91,    93,    92,    26,     0,     0,
      95,    97,    96,    29,     0,     0,   105,   107,   106,    27,
       0,     0,   101,   103,   102,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,    54,    56,    63,    57,    58,    60,    59,    62,    14,
      34,    35,    40,    41,    36,    37,    38,    39,     0,     0,
       0,    16,     0,     0,    15,     0,     0,    17,     0,     0,
      10,    13,    12,    11,    19,    18,     0,    91,     0,     0,
     113,    88,    91,    95,     0,     0,   100,    99,   122,    90,
       0,   132,    87,     0,     0,    89,    71,    72,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    91,    95,   105,   101,    93,
      97,   107,   103,     0,    47,    48,    53,    50,    51,    52,
       0,    33,     0,     0,     0,     0,     0,     0,     0,    20,
      46,   121,     0,     0,     0,     0,     0,     0,    46,    46,
     131,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   137,   139,   138,   140,   141,
     143,   142,   144,     0,     0,     0,     0,    65,     0,     0,
      94,     0,    98,     0,   108,     0,   104,     0,   120,   115,
     116,   117,   118,   119,     0,     0,   130,   125,   126,   127,
     128,   129,   134,   133,   135,    74,    76,    77,    78,    79,
      82,    83,    80,    81,    84,    85,     0,     0,     0,     0,
      49,    42,    44,    43,    45,   114,   124,   123,    69,    67,
       0,    68,     0,     0,    86,    70,    66
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -185,  -185,  -185,   492,   -30,  -185,  -185,  -185,  -185,  -185,
     204,  -185,   373,  -185,  -179,  -185,   242,  -185,  -184,   -54,
    -185,  -103,  -185,  -185,   -95,   246,  -185,  -185,  -185,  -104,
    -185,  -185,   -25,   470,  -101,   -37,   -35,  -185,  -131,   -90,
     -98,  -185
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,    11,   101,    53,    12,
      71,    72,    73,    13,   193,   194,   195,    26,    54,    55,
      65,    56,    57,   313,   165,   166,   167,   182,    58,    59,
      60,    61,   156,   157,   158,   168,   161,    62,   151,   169,
     170,    63
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,    89,    95,   147,   183,    77,   162,   196,    75,   197,
     100,    22,   180,   159,   184,    86,   259,   211,   212,   261,
      87,   263,    27,   265,    74,    96,    97,    98,    99,    75,
     148,   267,    14,   234,   235,    76,    92,    15,    16,   274,
     275,    93,    23,    17,    88,   234,   235,   185,   186,   187,
     188,   149,   189,   190,   191,   192,    76,   253,    80,    30,
      33,   160,   227,    81,   220,   221,   233,    94,   230,   231,
     297,   146,   299,   198,   232,   199,   145,   150,    88,    76,
      82,    94,   269,   270,   271,   272,   273,   228,    36,   229,
      82,    39,    86,   152,   153,   234,   235,    87,    75,    81,
     282,    18,    64,   234,   235,   202,    19,   196,   204,   197,
      40,   206,   308,    66,   208,   196,   196,   197,   197,   256,
     154,    88,   102,   150,   150,    76,    82,   285,   315,    78,
     283,   106,   277,   278,   279,   280,   281,    20,    28,   286,
     287,   155,    21,    29,   294,   295,   288,   289,   290,   291,
     292,   293,    84,   242,   243,   196,    90,   197,    41,    42,
      43,    44,   103,    45,    46,    47,    48,   228,   104,   229,
      49,    50,    31,   198,    51,   199,    52,    32,   107,   105,
     282,   198,   198,   199,   199,   108,   109,   301,   150,   150,
     150,   150,   150,   152,   153,    86,    92,   110,    75,    81,
      87,    93,   242,   243,   284,   112,   314,   112,    34,   112,
      37,   112,   113,    35,   120,    38,   228,   163,   229,   121,
     154,   198,   119,   199,    88,    76,    82,    94,   114,   115,
     122,   236,   237,   238,   239,   123,    79,   215,   216,    85,
     217,   164,    91,   112,   116,   112,   124,   222,   223,   224,
     225,   125,   226,   128,   112,   236,   237,   238,   239,   117,
     276,   112,   240,   241,   213,   214,   215,   216,   118,   217,
     126,   222,   223,   224,   225,   127,   226,   171,   172,   173,
     174,   129,   175,   176,   177,   178,   240,   241,    41,    42,
      43,    44,   130,    45,    46,    47,    48,   210,   130,   130,
      49,    50,   131,   218,    51,   133,    52,   179,    41,    42,
      43,    44,   132,    45,    46,    47,    48,   302,   133,   135,
      49,    50,   134,   219,    51,   136,    52,    41,    42,    43,
      44,   137,    45,    46,    47,    48,   130,   303,   138,    49,
      50,   -21,   228,    51,   229,    52,    41,    42,    43,    44,
     133,    45,    46,    47,    48,   -23,   304,   139,    49,    50,
     224,   225,    51,   226,    52,   311,    41,    42,    43,    44,
     140,    45,    46,    47,    48,   136,   111,   141,    49,    50,
     -24,   142,    51,   143,    52,    41,    42,    43,    44,   144,
      45,    46,    47,    48,   139,   181,   200,    49,    50,   -22,
     203,    51,   309,    52,    41,    42,    43,    44,   244,    45,
      46,    47,    48,   209,   205,   207,    49,    50,   312,   255,
      51,  -109,    52,    41,    42,    43,    44,   245,    45,    46,
      47,    48,   246,   247,   260,    49,    50,   248,   249,    51,
     250,    52,     1,     2,     3,     4,     5,   213,   214,   215,
     216,   251,   217,   296,   252,   254,    24,  -111,  -112,   258,
     268,   222,   223,   224,   225,  -110,   226,   222,   223,   224,
     225,   257,   226,   262,   276,     1,     2,     3,     4,     5,
      67,    68,    69,    70,    96,    97,    98,    99,   264,   266,
     305,   217,   306,   226,   229,   307,   235,   310,   316,    25,
     300,   298,   201,    83
};

static const yytype_uint16 yycheck[] =
{
      54,    36,    39,     8,   108,    30,   104,   110,    13,   110,
      40,    12,   107,   103,   109,    10,   200,   148,   149,   203,
      15,   205,    50,   207,     8,     3,     4,     5,     6,    13,
      35,   210,     8,    33,    34,    40,    11,    13,     9,   218,
     219,    16,     0,    14,    39,    33,    34,     8,     9,    10,
      11,    56,    13,    14,    15,    16,    40,    57,     9,    19,
      19,    56,   160,    14,   154,   155,   164,    42,   163,   164,
     254,   101,   256,   110,   164,   110,    54,   102,    39,    40,
      41,    42,   213,   214,   215,   216,   217,    44,    19,    46,
      41,    19,    10,     8,     9,    33,    34,    15,    13,    14,
      57,    10,    50,    33,    34,   130,    15,   210,   133,   210,
      53,   136,   296,    40,   139,   218,   219,   218,   219,    57,
      35,    39,    19,   148,   149,    40,    41,    57,   312,    40,
     228,    56,   222,   223,   224,   225,   226,    11,    51,   234,
     235,    56,    16,    56,   242,   243,   236,   237,   238,   239,
     240,   241,    40,    30,    31,   258,    40,   258,     8,     9,
      10,    11,    19,    13,    14,    15,    16,    44,    19,    46,
      20,    21,    51,   210,    24,   210,    26,    56,    56,    19,
      57,   218,   219,   218,   219,    56,    56,    37,   213,   214,
     215,   216,   217,     8,     9,    10,    11,    56,    13,    14,
      15,    16,    30,    31,   229,   259,   310,   261,    51,   263,
      51,   265,    50,    56,     8,    56,    44,    32,    46,    13,
      35,   258,    52,   258,    39,    40,    41,    42,    50,    50,
       9,    28,    29,    30,    31,    14,    32,    46,    47,    35,
      49,    56,    38,   297,    50,   299,    10,    44,    45,    46,
      47,    15,    49,    57,   308,    28,    29,    30,    31,    50,
      57,   315,    59,    60,    44,    45,    46,    47,    50,    49,
      11,    44,    45,    46,    47,    16,    49,     8,     9,    10,
      11,    55,    13,    14,    15,    16,    59,    60,     8,     9,
      10,    11,    51,    13,    14,    15,    16,    56,    51,    51,
      20,    21,    52,    56,    24,    51,    26,    38,     8,     9,
      10,    11,    57,    13,    14,    15,    16,    37,    51,    57,
      20,    21,    52,    56,    24,    51,    26,     8,     9,    10,
      11,    52,    13,    14,    15,    16,    51,    37,    57,    20,
      21,    56,    44,    24,    46,    26,     8,     9,    10,    11,
      51,    13,    14,    15,    16,    56,    37,    51,    20,    21,
      46,    47,    24,    49,    26,    27,     8,     9,    10,    11,
       8,    13,    14,    15,    16,    51,    18,     9,    20,    21,
      56,    10,    24,    11,    26,     8,     9,    10,    11,    50,
      13,    14,    15,    16,    51,     8,    36,    20,    21,    56,
      36,    24,    25,    26,     8,     9,    10,    11,    57,    13,
      14,    15,    16,    50,    36,    36,    20,    21,    22,    50,
      24,    56,    26,     8,     9,    10,    11,    57,    13,    14,
      15,    16,    57,    57,    52,    20,    21,    57,    57,    24,
      57,    26,     3,     4,     5,     6,     7,    44,    45,    46,
      47,    57,    49,    58,    57,    57,    17,    56,    56,    55,
      57,    44,    45,    46,    47,    56,    49,    44,    45,    46,
      47,    57,    49,    52,    57,     3,     4,     5,     6,     7,
       3,     4,     5,     6,     3,     4,     5,     6,    52,    52,
      57,    49,    57,    49,    46,    57,    34,    50,    23,     7,
     258,   255,   129,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    62,    63,    64,    65,
      66,    67,    70,    74,     8,    13,     9,    14,    10,    15,
      11,    16,    12,     0,    17,    64,    78,    50,    51,    56,
      19,    51,    56,    19,    51,    56,    19,    51,    56,    19,
      53,     8,     9,    10,    11,    13,    14,    15,    16,    20,
      21,    24,    26,    69,    79,    80,    82,    83,    89,    90,
      91,    92,    98,   102,    50,    81,    40,     3,     4,     5,
       6,    71,    72,    73,     8,    13,    40,    93,    40,    71,
       9,    14,    41,    94,    40,    71,    10,    15,    39,    97,
      40,    71,    11,    16,    42,    96,     3,     4,     5,     6,
      65,    68,    19,    19,    19,    19,    56,    56,    56,    56,
      56,    18,    80,    50,    50,    50,    50,    50,    50,    52,
       8,    13,     9,    14,    10,    15,    11,    16,    57,    55,
      51,    52,    57,    51,    52,    57,    51,    52,    57,    51,
       8,     9,    10,    11,    50,    54,    65,     8,    35,    56,
      93,    99,     8,     9,    35,    56,    93,    94,    95,   100,
      56,    97,   101,    32,    56,    85,    86,    87,    96,   100,
     101,     8,     9,    10,    11,    13,    14,    15,    16,    38,
      85,     8,    88,    90,    85,     8,     9,    10,    11,    13,
      14,    15,    16,    75,    76,    77,    82,    95,    96,    97,
      36,    73,    93,    36,    93,    36,    93,    36,    93,    50,
      56,    99,    99,    44,    45,    46,    47,    49,    56,    56,
     100,   100,    44,    45,    46,    47,    49,   101,    44,    46,
      85,    85,   100,   101,    33,    34,    28,    29,    30,    31,
      59,    60,    30,    31,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    50,    57,    57,    55,    79,
      52,    79,    52,    79,    52,    79,    52,    75,    57,    99,
      99,    99,    99,    99,    75,    75,    57,   100,   100,   100,
     100,   100,    57,   101,    93,    57,    85,    85,   100,   100,
     100,   100,   100,   100,   101,   101,    58,    79,    86,    79,
      77,    37,    37,    37,    37,    57,    57,    57,    79,    25,
      50,    27,    22,    84,    90,    79,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    63,    63,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      77,    77,    77,    77,    78,    79,    79,    80,    80,    80,
      80,    80,    80,    80,    81,    82,    83,    83,    83,    84,
      84,    85,    85,    85,    85,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    87,    87,    88,    89,    90,    91,
      92,    93,    93,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    96,    97,    97,    97,    97,    98,
      98,    98,    98,    99,    99,    99,    99,    99,    99,    99,
      99,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     5,     5,     5,     5,     5,     2,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       0,     1,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     8,     8,     8,     8,     0,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     1,     2,     2,     0,     4,     8,     6,     6,     0,
       2,     1,     1,     1,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     5,     3,     3,     3,
       3,     1,     1,     1,     4,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     4,     3,     3,     3,     3,     3,
       3,     2,     1,     4,     4,     3,     3,     3,     3,     3,
       3,     2,     1,     3,     3,     3,     4,     4,     4,     4,
       4,     4,     4,     4,     4
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
#line 183 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Program corect sintactic\n");}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 197 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[0].intnode).name)) printf("%s declared\n",(yyvsp[0].intnode).name); else {printf("%s redeclaration\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 199 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[0].boolnode).name)) printf("%s declared\n",(yyvsp[0].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 200 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[0].stringnode).name)) printf("%s declared\n",(yyvsp[0].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 201 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[0].floatnode).name)) printf("%s declared\n",(yyvsp[0].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 224 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddIntNode((yyvsp[-2].intnode).name)) printf("%s declared\n",(yyvsp[-2].intnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].intnode).name);exit(0);}
											UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 226 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddStringNode((yyvsp[-2].stringnode).name)) printf("%s declared\n",(yyvsp[-2].stringnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].stringnode).name);exit(0);}
											UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddBoolNode((yyvsp[-2].boolnode).name)) printf("%s declared\n",(yyvsp[-2].boolnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].boolnode).name);exit(0);}
											UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 230 "DarthPlus.y" /* yacc.c:1646  */
    {if(AddFloatNode((yyvsp[-2].floatnode).name)) printf("%s declared\n",(yyvsp[-2].floatnode).name); else {printf("%s redeclaration\n",(yyvsp[-2].floatnode).name);exit(0);}
											UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 253 "DarthPlus.y" /* yacc.c:1646  */
    {
						int i = AddIntFuncNode((yyvsp[-6].intnode).name);
						if(i != -1)  
							{
								printf("function %s declared\n",(yyvsp[-6].intnode).name); 
								last_func_nr = i;
								last_func_type = 1;
							}
						else {
								printf("function %s redeclaration\n",(yyvsp[-6].intnode).name);
								exit(0);
							}
					}
#line 1751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 267 "DarthPlus.y" /* yacc.c:1646  */
    {
						int i;
						if((i = AddStringFuncNode((yyvsp[-6].stringnode).name)) >= 0)  
							{
								printf("function %s declared\n",(yyvsp[-6].stringnode).name); 
								last_func_nr = i;
								last_func_type = 2;
							}
						else {
								printf("function %s redeclaration\n",(yyvsp[-6].stringnode).name);
								exit(0);
							}
					}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 281 "DarthPlus.y" /* yacc.c:1646  */
    {
						int i;
						if((i = AddFloatFuncNode((yyvsp[-6].floatnode).name)) >= 0)  
							{
								printf("function %s declared\n",(yyvsp[-6].floatnode).name); 
								last_func_nr = i;
								last_func_type = 3;
							}
						else {
								printf("function %s redeclaration\n",(yyvsp[-6].floatnode).name);
								exit(0);
							}
					}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 295 "DarthPlus.y" /* yacc.c:1646  */
    {
						int i;
						if((i = AddBoolFuncNode((yyvsp[-6].boolnode).name)) >= 0)  
							{
								printf("function %s declared\n",(yyvsp[-6].boolnode).name); 
								last_func_nr = i;
								last_func_type = 4;
							}
						else {
								printf("function %s redeclaration\n",(yyvsp[-6].boolnode).name);
								exit(0);
							}
					}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 350 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditie logica din if se evalueaza la: %d.\n",(yyvsp[-5].boolval));}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 352 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditie logica din while se evalueaza la: %d. \n",(yyvsp[-3].boolval));}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 360 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 361 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 362 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 363 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-1].boolval);}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 364 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=!(yyvsp[0].boolval);}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 365 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].boolval)&&(yyvsp[0].boolval);}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 366 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].boolval)||(yyvsp[0].boolval);}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 371 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)<=(yyvsp[0].floatval);}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 372 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)>=(yyvsp[0].floatval);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 373 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)<(yyvsp[0].floatval);}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 374 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)>(yyvsp[0].floatval);}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 375 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)==(yyvsp[0].floatval);}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 376 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[-2].floatval)!=(yyvsp[0].floatval);}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 380 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=!strcmp((yyvsp[-2].strval),(yyvsp[0].strval));}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 381 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=strcmp((yyvsp[-2].strval),(yyvsp[0].strval));}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 386 "DarthPlus.y" /* yacc.c:1646  */
    {printf("Conditia logica din for se evalueaza la: %d\n",(yyvsp[-2].boolval));}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 390 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateStringVal((yyvsp[-2].stringnode).name,(yyvsp[0].strval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].stringnode).name);exit(0);} 
									else printf("%s primeste \"%s\"\n",(yyvsp[-2].stringnode).name,(yyvsp[0].strval));}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 395 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateIntVal((yyvsp[-2].intnode).name,(yyvsp[0].intval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].intnode).name);exit(0);} 
									else printf("%s primeste %d\n",(yyvsp[-2].intnode).name,(yyvsp[0].intval));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 401 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateBoolVal((yyvsp[-2].boolnode).name,(yyvsp[0].boolval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].boolnode).name);exit(0);} 
									else printf("%s primeste %d\n",(yyvsp[-2].boolnode).name,(yyvsp[0].boolval));}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 406 "DarthPlus.y" /* yacc.c:1646  */
    {if(!UpdateFloatVal((yyvsp[-2].floatnode).name,(yyvsp[0].floatval))) {printf("%s nu a fost declarat\n",(yyvsp[-2].floatnode).name);exit(0);} 
									else printf("%s primeste %f\n",(yyvsp[-2].floatnode).name,(yyvsp[0].floatval));}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 412 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
						if (!intnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].intnode).name);exit(0);}
						else (yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 417 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 418 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindIntNode((yyvsp[0].intnode).name);
					if(i>=0)
							(yyval.intval) = intnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].intnode).name);exit(0);}}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 427 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						if (!floatnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].floatnode).name);exit(0);}
						else (yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 432 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 433 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindFloatNode((yyvsp[0].floatnode).name);
					if(i>=0)
						(yyval.floatval) = floatnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].floatnode).name);exit(0);}}
#line 1991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 441 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 1997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 442 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].intval);}
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 446 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						if (!boolnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].boolnode).name);exit(0);}
						else (yyval.boolval)=boolnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 451 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.boolval)=(yyvsp[0].boolval);}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 452 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindBoolNode((yyvsp[0].boolnode).name);
					if(i>=0)
						(yyval.boolval)=boolnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].boolnode).name);exit(0);}}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 460 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						if (!stringnodes[i].init) {printf("%s nu a fost initializat\n",(yyvsp[0].stringnode).name);exit(0);}
						else (yyval.strval) =stringnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 465 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].strval);}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 466 "DarthPlus.y" /* yacc.c:1646  */
    {int i = FindStringNode((yyvsp[0].stringnode).name);
					if(i>=0)
						(yyval.strval)=stringnodes[i].val;
					else {printf("%s not previously declared\n",(yyvsp[0].stringnode).name);exit(0);}}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 482 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[0].intval);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 484 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + (yyvsp[0].intval);}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 485 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) - (yyvsp[0].intval);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 486 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) * (yyvsp[0].intval);}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 487 "DarthPlus.y" /* yacc.c:1646  */
    {if((yyvsp[0].intval)==0){printf("Impartirea la 0 nu este permisa\n");exit(0);} else (yyval.intval) = (yyvsp[-2].intval) / (yyvsp[0].intval);}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 488 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = pow((yyvsp[-2].intval),(yyvsp[0].intval));}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 489 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-1].intval);}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 490 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.intval)=-(yyvsp[0].intval);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 495 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[0].floatval);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 498 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) + (yyvsp[0].floatval);}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 499 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) - (yyvsp[0].floatval);}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 500 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-2].floatval) * (yyvsp[0].floatval);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 501 "DarthPlus.y" /* yacc.c:1646  */
    {if((yyvsp[0].floatval)==0){printf("Impartirea la 0 nu este permisa\n");exit(0);} else (yyval.floatval) = (yyvsp[-2].floatval) / (yyvsp[0].floatval);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 502 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = pow((yyvsp[-2].floatval),(yyvsp[0].floatval));}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 503 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval) = (yyvsp[-1].floatval);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 504 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.floatval)=-(yyvsp[0].floatval);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 509 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[0].strval);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 510 "DarthPlus.y" /* yacc.c:1646  */
    {strcpy((yyval.strval),strcat((yyvsp[-2].strval),(yyvsp[0].strval)));}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 511 "DarthPlus.y" /* yacc.c:1646  */
    {(yyval.strval)=(yyvsp[-1].strval);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 512 "DarthPlus.y" /* yacc.c:1646  */
    {char temp[100];strcpy(temp,(yyvsp[-2].strval));for(int i=0;i<(yyvsp[0].intval)-1;i++) strcat(temp,(yyvsp[-2].strval)); strcpy((yyval.strval),temp);}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 517 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].intnode).name,intnodes[FindIntNode((yyvsp[-1].intnode).name)].val);}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 518 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%f\n",(yyvsp[-1].floatnode).name,floatnodes[FindFloatNode((yyvsp[-1].floatnode).name)].val);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 519 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].boolnode).name,boolnodes[FindBoolNode((yyvsp[-1].boolnode).name)].val);}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 520 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%s\n",(yyvsp[-1].stringnode).name,stringnodes[FindStringNode((yyvsp[-1].stringnode).name)].val);}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 521 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].intnode).name,intnodes[FindIntNode((yyvsp[-1].intnode).name)].val);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 522 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%f\n",(yyvsp[-1].floatnode).name,floatnodes[FindFloatNode((yyvsp[-1].floatnode).name)].val);}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 523 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%d\n",(yyvsp[-1].boolnode).name,boolnodes[FindBoolNode((yyvsp[-1].boolnode).name)].val);}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 524 "DarthPlus.y" /* yacc.c:1646  */
    {printf("%s=%s\n",(yyvsp[-1].stringnode).name,stringnodes[FindStringNode((yyvsp[-1].stringnode).name)].val);}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 525 "DarthPlus.y" /* yacc.c:1646  */
    {printf("\n");}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2231 "y.tab.c" /* yacc.c:1646  */
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
#line 528 "DarthPlus.y" /* yacc.c:1906  */

int yyerror(char * s){
printf("eroare: %s la linia:%d\n",s,yylineno);
}

int FindIntFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_ifnodes;i++)
	{
		if (!strcmp(name,intfuncnodes[i].name))
		{
			return i;
		}
	}
	return -1;
}

int AddIntFuncNode(char *name)
{
	int i;
	i = FindIntFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(intfuncnodes[nr_ifnodes].name,name);
	intfuncnodes[nr_ifnodes].nr_inodes = 0;
	intfuncnodes[nr_ifnodes].nr_snodes = 0;
	intfuncnodes[nr_ifnodes].nr_fnodes = 0;
	intfuncnodes[nr_ifnodes].nr_bnodes = 0;
	intfuncnodes[nr_ifnodes].param_nr = 0;
	nr_ifnodes++;
	return nr_ifnodes - 1;
}


int FindStringFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_sfnodes;i++)
	{
		if (!strcmp(name,stringfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddStringFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(stringfuncnodes[nr_sfnodes].name,name);
	stringfuncnodes[nr_sfnodes].nr_inodes = 0;
	stringfuncnodes[nr_sfnodes].nr_snodes = 0;
	stringfuncnodes[nr_sfnodes].nr_fnodes = 0;
	stringfuncnodes[nr_sfnodes].nr_bnodes = 0;
	stringfuncnodes[nr_sfnodes].param_nr = 0;
	nr_sfnodes++;
	return nr_sfnodes - 1;
}


int FindFloatFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_ffnodes;i++)
	{
		if (!strcmp(name,floatfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddFloatFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(floatfuncnodes[nr_ffnodes].name,name);
	floatfuncnodes[nr_ffnodes].nr_inodes = 0;
	floatfuncnodes[nr_ffnodes].nr_snodes = 0;
	floatfuncnodes[nr_ffnodes].nr_fnodes = 0;
	floatfuncnodes[nr_ffnodes].nr_bnodes = 0;
	floatfuncnodes[nr_ffnodes].param_nr = 0;
	nr_ffnodes++;
	return nr_ffnodes - 1;
}



int FindBoolFuncNode(char* name)
{
	int i;
	for (i = 0;i<nr_bfnodes;i++)
	{
		if (!strcmp(name,boolfuncnodes[i].name))
		return i;
	}
	return -1;
}

int AddBoolFuncNode(char *name)
{
	int i;
	i = FindFloatFuncNode(name);
	if (i!=-1)
	return -1;
	strcpy(boolfuncnodes[nr_bfnodes].name,name);
	boolfuncnodes[nr_bfnodes].nr_inodes = 0;
	boolfuncnodes[nr_bfnodes].nr_snodes = 0;
	boolfuncnodes[nr_bfnodes].nr_fnodes = 0;
	boolfuncnodes[nr_bfnodes].nr_bnodes = 0;
	boolfuncnodes[nr_bfnodes].param_nr = 0;
	nr_bfnodes++;
	return nr_bfnodes - 1;
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
