/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/tpc.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern int lineno, colno;

extern int yylex();
void yyerror(const char *msg); 
#include "tree.h"

Node *tree;

#line 85 "src/tpc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "tpc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHARACTER = 3,                  /* CHARACTER  */
  YYSYMBOL_ADDSUB = 4,                     /* ADDSUB  */
  YYSYMBOL_DIVSTAR = 5,                    /* DIVSTAR  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_IDENT = 7,                      /* IDENT  */
  YYSYMBOL_ORDER = 8,                      /* ORDER  */
  YYSYMBOL_EQ = 9,                         /* EQ  */
  YYSYMBOL_TYPE = 10,                      /* TYPE  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_WHILE = 13,                     /* WHILE  */
  YYSYMBOL_RETURN = 14,                    /* RETURN  */
  YYSYMBOL_IF = 15,                        /* IF  */
  YYSYMBOL_ELSE = 16,                      /* ELSE  */
  YYSYMBOL_VOID = 17,                      /* VOID  */
  YYSYMBOL_18_ = 18,                       /* ';'  */
  YYSYMBOL_19_ = 19,                       /* ','  */
  YYSYMBOL_20_ = 20,                       /* '['  */
  YYSYMBOL_21_ = 21,                       /* ']'  */
  YYSYMBOL_22_ = 22,                       /* '('  */
  YYSYMBOL_23_ = 23,                       /* ')'  */
  YYSYMBOL_24_ = 24,                       /* '{'  */
  YYSYMBOL_25_ = 25,                       /* '}'  */
  YYSYMBOL_26_ = 26,                       /* '='  */
  YYSYMBOL_27_ = 27,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 28,                  /* $accept  */
  YYSYMBOL_Prog = 29,                      /* Prog  */
  YYSYMBOL_DeclVars = 30,                  /* DeclVars  */
  YYSYMBOL_Declarateurs = 31,              /* Declarateurs  */
  YYSYMBOL_DeclFoncts = 32,                /* DeclFoncts  */
  YYSYMBOL_DeclFonct = 33,                 /* DeclFonct  */
  YYSYMBOL_EnTeteFonct = 34,               /* EnTeteFonct  */
  YYSYMBOL_Parametres = 35,                /* Parametres  */
  YYSYMBOL_ListTypVar = 36,                /* ListTypVar  */
  YYSYMBOL_Corps = 37,                     /* Corps  */
  YYSYMBOL_SuiteInstr = 38,                /* SuiteInstr  */
  YYSYMBOL_Instr = 39,                     /* Instr  */
  YYSYMBOL_Exp = 40,                       /* Exp  */
  YYSYMBOL_TB = 41,                        /* TB  */
  YYSYMBOL_FB = 42,                        /* FB  */
  YYSYMBOL_M = 43,                         /* M  */
  YYSYMBOL_E = 44,                         /* E  */
  YYSYMBOL_T = 45,                         /* T  */
  YYSYMBOL_F = 46,                         /* F  */
  YYSYMBOL_LValue = 47,                    /* LValue  */
  YYSYMBOL_Arguments = 48,                 /* Arguments  */
  YYSYMBOL_ListExp = 49                    /* ListExp  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  123

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    27,     2,     2,     2,     2,     2,     2,
      22,    23,     2,     2,    19,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    20,     2,    21,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    24,     2,    25,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    36,    36,    50,    64,    67,    74,    84,    90,    96,
     102,   109,   122,   138,   141,   142,   145,   163,   180,   194,
     208,   221,   229,   232,   239,   244,   260,   270,   283,   294,
     304,   308,   309,   313,   315,   320,   322,   327,   329,   335,
     337,   343,   345,   351,   353,   359,   361,   366,   371,   372,
     376,   380,   381,   395,   399,   409,   415,   428,   429,   432,
     436
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHARACTER", "ADDSUB",
  "DIVSTAR", "NUM", "IDENT", "ORDER", "EQ", "TYPE", "OR", "AND", "WHILE",
  "RETURN", "IF", "ELSE", "VOID", "';'", "','", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "'='", "'!'", "$accept", "Prog", "DeclVars",
  "Declarateurs", "DeclFoncts", "DeclFonct", "EnTeteFonct", "Parametres",
  "ListTypVar", "Corps", "SuiteInstr", "Instr", "Exp", "TB", "FB", "M",
  "E", "T", "F", "LValue", "Arguments", "ListExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-56)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -97,    19,    30,   -97,     9,    15,    69,   -97,    20,    16,
      40,    31,    55,   -97,   -97,   -97,    77,    72,   -97,    91,
      72,    62,    89,    74,    93,   -97,    80,    92,   -97,    90,
     105,    50,   -97,    94,   -97,   106,   -97,    95,    34,    96,
       2,    97,   -97,   -97,   -97,   -97,    98,    99,   110,    28,
      39,    39,   -97,    39,   -97,    51,   -97,    39,    39,    83,
     109,   113,   115,   121,   122,   -97,   -97,    39,    63,    39,
     -97,   108,   111,    85,    -8,   118,   103,   112,     0,   -97,
      45,    39,     3,   -97,    39,   -97,    39,    39,    39,    39,
      39,    10,   -97,    86,   114,   -97,   104,   107,   116,    39,
      78,    88,     6,   117,   -97,   109,   113,   115,   121,   122,
     -97,    78,   -97,   -97,   -97,   118,   -97,   -97,   -97,   -97,
     120,    78,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     1,     0,     0,     2,     9,     0,     7,
       0,     0,     0,     8,     4,    10,     0,    15,     3,     0,
      15,     0,    22,     0,     0,    13,     0,    14,     5,     0,
       0,     0,     6,    19,    11,     0,    12,     7,    53,     0,
       0,     0,    33,    22,    20,    21,     0,     0,     0,     0,
      58,     0,    50,     0,    49,    53,    31,     0,     0,     0,
      35,    37,    39,    41,    43,    45,    51,     0,     0,     0,
      18,    17,    49,    53,     0,    60,     0,    57,     0,    46,
       0,    58,     0,    47,     0,    30,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    56,    28,    29,     0,     0,
       0,    53,     0,     0,    48,    34,    36,    38,    40,    42,
      44,     0,    23,    16,    27,    59,    26,    54,    55,    52,
      24,     0,    25
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -97,   -97,   123,   -97,   -97,   132,   -97,   119,   -97,   -97,
     100,   -96,   -39,    57,    56,    58,    59,    60,   -51,   -31,
      65,   -97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,    10,     6,     7,     8,    26,    27,    15,
      31,    45,    75,    60,    61,    62,    63,    64,    65,    66,
      76,    77
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      46,    59,    79,    84,   116,    52,    53,    83,    54,    55,
      74,    84,    78,    97,    84,   120,     9,    84,    82,     3,
      56,    84,    11,   100,    57,   122,   104,   118,    91,    58,
      93,    52,    53,   111,    72,    73,    16,    46,    17,   110,
       4,   102,    52,    53,    14,    54,    55,     5,    52,    53,
      57,    72,   101,    20,    49,    58,    50,    38,    18,    19,
     115,    57,    21,    39,    40,    41,    58,    57,    42,    46,
      38,    80,    58,    81,    43,    44,    39,    40,    41,    12,
      46,    42,    24,    23,    17,    38,     5,    43,    92,    25,
      46,    39,    40,    41,    84,    32,    42,    84,    28,    30,
      33,    85,    43,    34,   112,    80,    96,    81,    80,   117,
      81,    35,    37,    36,    47,    16,    48,    71,    51,    67,
      70,    86,    87,    88,    69,    89,    98,    90,    94,    84,
     -54,    99,    95,   -55,   114,   113,   121,    22,    13,    29,
     119,   105,   106,    68,     0,   107,   103,   108,     0,   109
};

static const yytype_int8 yycheck[] =
{
      31,    40,    53,    11,   100,     3,     4,    58,     6,     7,
      49,    11,    51,    21,    11,   111,     7,    11,    57,     0,
      18,    11,     7,    23,    22,   121,    23,    21,    67,    27,
      69,     3,     4,    23,     6,     7,    20,    68,    22,    90,
      10,    80,     3,     4,    24,     6,     7,    17,     3,     4,
      22,     6,     7,    22,    20,    27,    22,     7,    18,    19,
      99,    22,     7,    13,    14,    15,    27,    22,    18,   100,
       7,    20,    27,    22,    24,    25,    13,    14,    15,    10,
     111,    18,    10,     6,    22,     7,    17,    24,    25,    17,
     121,    13,    14,    15,    11,    21,    18,    11,     7,    10,
       7,    18,    24,    23,    18,    20,    21,    22,    20,    21,
      22,    19,     7,    23,    20,    20,    10,     7,    22,    22,
      21,    12,     9,     8,    26,     4,    23,     5,    20,    11,
      26,    19,    21,    26,    18,    21,    16,    14,     6,    20,
      23,    84,    86,    43,    -1,    87,    81,    88,    -1,    89
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    29,    30,     0,    10,    17,    32,    33,    34,     7,
      31,     7,    10,    33,    24,    37,    20,    22,    18,    19,
      22,     7,    30,     6,    10,    17,    35,    36,     7,    35,
      10,    38,    21,     7,    23,    19,    23,     7,     7,    13,
      14,    15,    18,    24,    25,    39,    47,    20,    10,    20,
      22,    22,     3,     4,     6,     7,    18,    22,    27,    40,
      41,    42,    43,    44,    45,    46,    47,    22,    38,    26,
      21,     7,     6,     7,    40,    40,    48,    49,    40,    46,
      20,    22,    40,    46,    11,    18,    12,     9,     8,     4,
       5,    40,    25,    40,    20,    21,    21,    21,    23,    19,
      23,     7,    40,    48,    23,    41,    42,    43,    44,    45,
      46,    23,    18,    21,    18,    40,    39,    21,    21,    23,
      39,    16,    39
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    28,    29,    30,    30,    31,    31,    31,    32,    32,
      33,    34,    34,    35,    35,    35,    36,    36,    36,    36,
      37,    38,    38,    39,    39,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    40,    40,    41,    41,    42,    42,
      43,    43,    44,    44,    45,    45,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    47,    47,    48,    48,    49,
      49
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     4,     0,     3,     4,     1,     2,     1,
       2,     5,     5,     1,     1,     0,     6,     4,     4,     2,
       4,     2,     0,     4,     5,     7,     5,     5,     4,     4,
       3,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     3,     1,
       1,     1,     4,     1,     4,     4,     4,     1,     0,     3,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Prog: DeclVars DeclFoncts  */
#line 36 "src/tpc.y"
                          {
    (yyval.node) = makeNode(programme);
    Node* var = makeNode(variables);
    Node* foncts = makeNode(fonctions);
    /*on ajoute la declaration de variable et de fonctions à Prog*/
    addChild((yyval.node), var);
    addChild((yyval.node), foncts);

    addChild(var, (yyvsp[-1].node));
    addChild(foncts, (yyvsp[0].node));
    tree = (yyval.node);
}
#line 1211 "src/tpc.tab.c"
    break;

  case 3: /* DeclVars: DeclVars TYPE Declarateurs ';'  */
#line 50 "src/tpc.y"
                                  {
        Node* declarationVar = makeNode(VariableDeclaration);
        Node* typeVar = makeNode(type);
        strcpy(typeVar->type, (yyvsp[-2].type)); 
        addChild(declarationVar, typeVar);
        
        if((yyvsp[-3].node) == NULL){ //on doit verifier que la liste des variable est nulle ou pas
            (yyval.node) = declarationVar; //si c'est le cas on doit l'initialiser
        }else{
            addSibling((yyval.node), declarationVar); //sinon on ajoute 
        }
        
        addChild(declarationVar, (yyvsp[-1].node));
    }
#line 1230 "src/tpc.tab.c"
    break;

  case 4: /* DeclVars: %empty  */
#line 64 "src/tpc.y"
      {(yyval.node) = NULL;}
#line 1236 "src/tpc.tab.c"
    break;

  case 5: /* Declarateurs: Declarateurs ',' IDENT  */
#line 67 "src/tpc.y"
                              {
        (yyval.node) = (yyvsp[-2].node);
        Node* identificateur = makeNode(NameVar);
        strcpy(identificateur->ident, (yyvsp[0].ident));
        addSibling((yyval.node), identificateur);

       }
#line 1248 "src/tpc.tab.c"
    break;

  case 6: /* Declarateurs: IDENT '[' NUM ']'  */
#line 74 "src/tpc.y"
                         {
        (yyval.node) = makeNode(NameVar);
        strcpy((yyval.node)->ident, (yyvsp[-3].ident));
        (yyval.node)->isArray = 1; 

        Node* index_arr = makeNode(Index);
        index_arr->num = (yyvsp[-1].num);

        addChild((yyval.node), index_arr);
        }
#line 1263 "src/tpc.tab.c"
    break;

  case 7: /* Declarateurs: IDENT  */
#line 84 "src/tpc.y"
             {
        (yyval.node) = makeNode(NameVar);
        strcpy((yyval.node)->ident, (yyvsp[0].ident));
        }
#line 1272 "src/tpc.tab.c"
    break;

  case 8: /* DeclFoncts: DeclFoncts DeclFonct  */
#line 90 "src/tpc.y"
                        {
      (yyval.node) = (yyvsp[-1].node);
      Node* declarationFoncts = makeNode(fonction);
      addSibling((yyval.node), declarationFoncts);
      addChild(declarationFoncts, (yyvsp[0].node));
   }
#line 1283 "src/tpc.tab.c"
    break;

  case 9: /* DeclFoncts: DeclFonct  */
#line 96 "src/tpc.y"
               {
      (yyval.node) = makeNode(fonction);
      addChild((yyval.node), (yyvsp[0].node));
   }
#line 1292 "src/tpc.tab.c"
    break;

  case 10: /* DeclFonct: EnTeteFonct Corps  */
#line 102 "src/tpc.y"
                     {
      (yyval.node) = makeNode(enTete);
      addChild((yyval.node), (yyvsp[-1].node));
      addSibling((yyval.node), (yyvsp[0].node));
   }
#line 1302 "src/tpc.tab.c"
    break;

  case 11: /* EnTeteFonct: TYPE IDENT '(' Parametres ')'  */
#line 109 "src/tpc.y"
                                  {
        (yyval.node) = makeNode(returnType);
        strcpy((yyval.node)->type, (yyvsp[-4].type));

        Node *identificateur = makeNode(FunctionName);
        strcpy(identificateur->ident, (yyvsp[-3].ident));
        addSibling((yyval.node), identificateur);

        Node *parametres_fonction = makeNode(ParameterList);
        addSibling((yyval.node), parametres_fonction);

        addChild(parametres_fonction, (yyvsp[-1].node)); /* on ajoute le contenu de parametres_fonction à Parametres */
    }
#line 1320 "src/tpc.tab.c"
    break;

  case 12: /* EnTeteFonct: VOID IDENT '(' Parametres ')'  */
#line 122 "src/tpc.y"
                                    {
        (yyval.node) = makeNode(returnType);
        strcpy((yyval.node)->type, "void");

        Node *identificateur = makeNode(FunctionName);
        addSibling((yyval.node), identificateur);
        strcpy(identificateur->ident, (yyvsp[-3].ident));

        Node *parametres_fonction = makeNode(ParameterList);
        addSibling((yyval.node), parametres_fonction);

        //addChild(parametres_fonction, $4); /* on ajoute le contenu de parametres_fonction à Parametres */
    }
#line 1338 "src/tpc.tab.c"
    break;

  case 13: /* Parametres: VOID  */
#line 138 "src/tpc.y"
            { 
        (yyval.node) = NULL;
        }
#line 1346 "src/tpc.tab.c"
    break;

  case 14: /* Parametres: ListTypVar  */
#line 141 "src/tpc.y"
                  { (yyval.node) = (yyvsp[0].node); }
#line 1352 "src/tpc.tab.c"
    break;

  case 15: /* Parametres: %empty  */
#line 142 "src/tpc.y"
      { (yyval.node) = NULL; }
#line 1358 "src/tpc.tab.c"
    break;

  case 16: /* ListTypVar: ListTypVar ',' TYPE IDENT '[' ']'  */
#line 145 "src/tpc.y"
                                         {
        Node* param = makeNode(Parameter);

        Node* type_var = makeNode(type);
        Node* ident_var = makeNode(NameVar);
        param->isArray = 1;
        strcpy(type_var->type, (yyvsp[-3].type));
        strcpy(ident_var->ident, (yyvsp[-2].ident));

        addChild(param, type_var);
        addChild(param, ident_var);

        if ((yyval.node) == NULL) {
            (yyval.node) = param;
        } else {
            addSibling((yyval.node), param);
        }
       }
#line 1381 "src/tpc.tab.c"
    break;

  case 17: /* ListTypVar: ListTypVar ',' TYPE IDENT  */
#line 163 "src/tpc.y"
                                {
        Node* param = makeNode(Parameter);

        Node* type_var = makeNode(type);
        Node* ident_var = makeNode(NameVar);
        strcpy(type_var->type, (yyvsp[-1].type));
        strcpy(ident_var->ident, (yyvsp[0].ident));

        addChild(param, type_var);
        addChild(param, ident_var);

        if ((yyval.node) == NULL) {
            (yyval.node) = param;
        } else {
            addSibling((yyval.node), param);
        }
    }
#line 1403 "src/tpc.tab.c"
    break;

  case 18: /* ListTypVar: TYPE IDENT '[' ']'  */
#line 180 "src/tpc.y"
                          {
        Node* param = makeNode(Parameter);
        Node* type_var = makeNode(type);
        Node* ident_var = makeNode(NameVar);

        param->isArray = 1;
        strcpy(type_var->type, (yyvsp[-3].type));
        strcpy(ident_var->ident, (yyvsp[-2].ident));

        addChild(param, type_var);
        addChild(param, ident_var);

        (yyval.node) = param;
    }
#line 1422 "src/tpc.tab.c"
    break;

  case 19: /* ListTypVar: TYPE IDENT  */
#line 194 "src/tpc.y"
                  {
        Node* param = makeNode(Parameter);
        Node* type_var = makeNode(type);
        Node* ident_var = makeNode(NameVar);

        strcpy(type_var->type, (yyvsp[-1].type));
        strcpy(ident_var->ident, (yyvsp[0].ident));

        addChild(param, type_var);
        addChild(param, ident_var);

        (yyval.node) = param;
    }
#line 1440 "src/tpc.tab.c"
    break;

  case 20: /* Corps: '{' DeclVars SuiteInstr '}'  */
#line 208 "src/tpc.y"
                                   {
        (yyval.node) = makeNode(corps);
        Node* var_foncts = makeNode(variables);
        Node* instruction_foncts = makeNode(instructions);

        addChild(var_foncts, (yyvsp[-2].node));
        addChild(instruction_foncts, (yyvsp[-1].node));
        addChild((yyval.node), var_foncts);
        addChild((yyval.node), instruction_foncts);

    }
#line 1456 "src/tpc.tab.c"
    break;

  case 21: /* SuiteInstr: SuiteInstr Instr  */
#line 221 "src/tpc.y"
                     {
        if ((yyval.node) == NULL) {
            (yyval.node) = (yyvsp[0].node);
        }else{
            addSibling((yyval.node), (yyvsp[0].node));
        }
    }
#line 1468 "src/tpc.tab.c"
    break;

  case 22: /* SuiteInstr: %empty  */
#line 229 "src/tpc.y"
      { (yyval.node) = NULL; }
#line 1474 "src/tpc.tab.c"
    break;

  case 23: /* Instr: LValue '=' Exp ';'  */
#line 232 "src/tpc.y"
                          {
        (yyval.node) = makeNode(affectation);
        (yyval.node)->byte = '=';
        addChild((yyval.node), (yyvsp[-3].node));
        addChild((yyval.node), (yyvsp[-1].node));

       }
#line 1486 "src/tpc.tab.c"
    break;

  case 24: /* Instr: IF '(' Exp ')' Instr  */
#line 239 "src/tpc.y"
                            {
        (yyval.node) = makeNode(condition_if);
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1496 "src/tpc.tab.c"
    break;

  case 25: /* Instr: IF '(' Exp ')' Instr ELSE Instr  */
#line 244 "src/tpc.y"
                                       {
        (yyval.node) = makeNode(ifElseCondition);

        //condition if
        Node* if_cond = makeNode(condition_if);
        addChild(if_cond, (yyvsp[-4].node));
        addChild(if_cond, (yyvsp[-2].node));

        //condition else
        Node* else_cond = makeNode(condition_else);
        addChild(else_cond, (yyvsp[0].node));

        //on rajoute les noeuds if et else 
        addChild((yyval.node), if_cond);
        addChild((yyval.node), else_cond);
    }
#line 1517 "src/tpc.tab.c"
    break;

  case 26: /* Instr: WHILE '(' Exp ')' Instr  */
#line 260 "src/tpc.y"
                               {
        (yyval.node) = makeNode(while_loop);

        //condition du while
        Node* while_cond = makeNode(cond_while);
        addChild(while_cond, (yyvsp[-2].node));

        addChild((yyval.node), while_cond);
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1532 "src/tpc.tab.c"
    break;

  case 27: /* Instr: IDENT '(' Arguments ')' ';'  */
#line 270 "src/tpc.y"
                                    {
        
        (yyval.node) = makeNode(fonctionCall);

        Node* ident_call = makeNode(NameFonct);
        strcpy(ident_call->ident, (yyvsp[-4].ident));

        Node* args = makeNode(arguments);
        addChild(args, (yyvsp[-2].node));

        addChild((yyval.node), ident_call);
        addChild((yyval.node), args);
    }
#line 1550 "src/tpc.tab.c"
    break;

  case 28: /* Instr: IDENT '[' IDENT ']'  */
#line 283 "src/tpc.y"
                          {
        (yyval.node) = makeNode(arrayIndexing);
        (yyval.node)->isArray = 1;
        Node* ident_call = makeNode(NameVar);

        strcpy(ident_call->ident, (yyvsp[-3].ident));
        strcpy(ident_call->arrayIndexExpr, (yyvsp[-1].ident));

        addChild((yyval.node), ident_call);
        
    }
#line 1566 "src/tpc.tab.c"
    break;

  case 29: /* Instr: IDENT '[' Exp ']'  */
#line 294 "src/tpc.y"
                        {
        (yyval.node) = makeNode(arrayIndexing);
        (yyval.node)->isArray = 1;
        Node* ident_call = makeNode(NameVar);

        strcpy(ident_call->ident, (yyvsp[-3].ident));
        addChild((yyval.node), ident_call);
        addChild((yyval.node), (yyvsp[-1].node));

    }
#line 1581 "src/tpc.tab.c"
    break;

  case 30: /* Instr: RETURN Exp ';'  */
#line 304 "src/tpc.y"
                      {
        (yyval.node) = makeNode(Return);
        addChild((yyval.node), (yyvsp[-1].node));
    }
#line 1590 "src/tpc.tab.c"
    break;

  case 31: /* Instr: RETURN ';'  */
#line 308 "src/tpc.y"
                  { (yyval.node) = makeNode(Return);}
#line 1596 "src/tpc.tab.c"
    break;

  case 32: /* Instr: '{' SuiteInstr '}'  */
#line 309 "src/tpc.y"
                          {
        (yyval.node) = makeNode(instructions);
        addChild((yyval.node), (yyvsp[-1].node));
    }
#line 1605 "src/tpc.tab.c"
    break;

  case 33: /* Instr: ';'  */
#line 313 "src/tpc.y"
           { (yyval.node) = NULL; }
#line 1611 "src/tpc.tab.c"
    break;

  case 34: /* Exp: Exp OR TB  */
#line 315 "src/tpc.y"
                 { 
        (yyval.node) = makeNode(or_op);
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1621 "src/tpc.tab.c"
    break;

  case 35: /* Exp: TB  */
#line 320 "src/tpc.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1627 "src/tpc.tab.c"
    break;

  case 36: /* TB: TB AND FB  */
#line 322 "src/tpc.y"
                {
        (yyval.node) = makeNode(and_op);
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1637 "src/tpc.tab.c"
    break;

  case 37: /* TB: FB  */
#line 327 "src/tpc.y"
          { (yyval.node) = (yyvsp[0].node); }
#line 1643 "src/tpc.tab.c"
    break;

  case 38: /* FB: FB EQ M  */
#line 329 "src/tpc.y"
               {
        (yyval.node) = makeNode(eq);
        strcpy((yyval.node)->comp, (yyvsp[-1].comp));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1654 "src/tpc.tab.c"
    break;

  case 39: /* FB: M  */
#line 335 "src/tpc.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1660 "src/tpc.tab.c"
    break;

  case 40: /* M: M ORDER E  */
#line 337 "src/tpc.y"
                 {
        (yyval.node) = makeNode(order);
        strcpy((yyval.node)->comp, (yyvsp[-1].comp));
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1671 "src/tpc.tab.c"
    break;

  case 41: /* M: E  */
#line 343 "src/tpc.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1677 "src/tpc.tab.c"
    break;

  case 42: /* E: E ADDSUB T  */
#line 345 "src/tpc.y"
                  {
        (yyval.node) = makeNode(addsub_op);
        (yyval.node)->byte = (yyvsp[-1].byte);
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1688 "src/tpc.tab.c"
    break;

  case 43: /* E: T  */
#line 351 "src/tpc.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1694 "src/tpc.tab.c"
    break;

  case 44: /* T: T DIVSTAR F  */
#line 353 "src/tpc.y"
                   {
        (yyval.node) = makeNode(divstar_op);
        (yyval.node)->byte = (yyvsp[-1].byte);
        addChild((yyval.node), (yyvsp[-2].node));
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1705 "src/tpc.tab.c"
    break;

  case 45: /* T: F  */
#line 359 "src/tpc.y"
         { (yyval.node) = (yyvsp[0].node); }
#line 1711 "src/tpc.tab.c"
    break;

  case 46: /* F: ADDSUB F  */
#line 361 "src/tpc.y"
                {
        (yyval.node) = makeNode(unary_sign);
        (yyval.node)->byte = (yyvsp[-1].byte);
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1721 "src/tpc.tab.c"
    break;

  case 47: /* F: '!' F  */
#line 366 "src/tpc.y"
             {
        (yyval.node) = makeNode(NOT_OPERATOR);
        (yyval.node)->byte = '!';
        addChild((yyval.node), (yyvsp[0].node));
    }
#line 1731 "src/tpc.tab.c"
    break;

  case 48: /* F: '(' Exp ')'  */
#line 371 "src/tpc.y"
                   { (yyval.node) = (yyvsp[-1].node); }
#line 1737 "src/tpc.tab.c"
    break;

  case 49: /* F: NUM  */
#line 372 "src/tpc.y"
           {
        (yyval.node) = makeNode(num);
        (yyval.node)->num = (yyvsp[0].num);
    }
#line 1746 "src/tpc.tab.c"
    break;

  case 50: /* F: CHARACTER  */
#line 376 "src/tpc.y"
                 {
        (yyval.node) = makeNode(character);
        (yyval.node)->byte = (yyvsp[0].byte);
    }
#line 1755 "src/tpc.tab.c"
    break;

  case 51: /* F: LValue  */
#line 380 "src/tpc.y"
              { (yyval.node) = (yyvsp[0].node); }
#line 1761 "src/tpc.tab.c"
    break;

  case 52: /* F: IDENT '(' Arguments ')'  */
#line 381 "src/tpc.y"
                                {
        (yyval.node) = makeNode(fonctionCall);

        Node *foncts = makeNode(FunctionName);
        strcpy(foncts->ident, (yyvsp[-3].ident));

        Node* args = makeNode(arguments);
        addChild(args, (yyvsp[-1].node));

        addChild((yyval.node), foncts);
        addChild((yyval.node), args);
    }
#line 1778 "src/tpc.tab.c"
    break;

  case 53: /* LValue: IDENT  */
#line 395 "src/tpc.y"
             {
        (yyval.node) = makeNode(NameVar);
        strcpy((yyval.node)->ident, (yyvsp[0].ident));
       }
#line 1787 "src/tpc.tab.c"
    break;

  case 54: /* LValue: IDENT '[' IDENT ']'  */
#line 399 "src/tpc.y"
                           {
        (yyval.node) = makeNode(NameVar);
        strcpy((yyval.node)->ident, (yyvsp[-3].ident));
        (yyval.node)->isArray = 1;
        
        Node* array_index = makeNode(Index);
        strcpy(array_index->ident, (yyvsp[-1].ident));

        addChild((yyval.node), array_index);
        }
#line 1802 "src/tpc.tab.c"
    break;

  case 55: /* LValue: IDENT '[' Exp ']'  */
#line 409 "src/tpc.y"
                         {
        (yyval.node) = makeNode(NameVar);
        (yyval.node)->isArray = 1;
        strcpy((yyval.node)->ident, (yyvsp[-3].ident));
        addChild((yyval.node), (yyvsp[-1].node));
    }
#line 1813 "src/tpc.tab.c"
    break;

  case 56: /* LValue: IDENT '[' NUM ']'  */
#line 415 "src/tpc.y"
                         {
        (yyval.node) = makeNode(NameVar);
        strcpy((yyval.node)->ident, (yyvsp[-3].ident));
        (yyval.node)->isArray = 1;


        Node* index_array = makeNode(Index);
        index_array->num = (yyvsp[-1].num);

        addChild((yyval.node), index_array);
    }
#line 1829 "src/tpc.tab.c"
    break;

  case 57: /* Arguments: ListExp  */
#line 428 "src/tpc.y"
               { (yyval.node) = (yyvsp[0].node); }
#line 1835 "src/tpc.tab.c"
    break;

  case 58: /* Arguments: %empty  */
#line 429 "src/tpc.y"
      { (yyval.node) = NULL; }
#line 1841 "src/tpc.tab.c"
    break;

  case 59: /* ListExp: ListExp ',' Exp  */
#line 432 "src/tpc.y"
                       {
            (yyval.node) = (yyvsp[-2].node);    
            addSibling((yyval.node), (yyvsp[0].node));
       }
#line 1850 "src/tpc.tab.c"
    break;

  case 60: /* ListExp: Exp  */
#line 436 "src/tpc.y"
           { (yyval.node) = (yyvsp[0].node); }
#line 1856 "src/tpc.tab.c"
    break;


#line 1860 "src/tpc.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 440 "src/tpc.y"

int displayTree = 0;

void printHelp() {
    printf("Usage: tpcas [OPTIONS] FILE.tpc\n");
    printf("Options:\n");
    printf("  -t, --tree\tAfficher l'arbre de syntaxe abstraite.\n");
    printf("  -rep, --rapport\tAfficher le rapport.\n");
    printf("  -h, --help\tAfficher ce message d'aide.\n");
}


int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printHelp();
            return 0;
        } else if (strcmp(argv[i], "-t") == 0 || strcmp(argv[i], "--tree") == 0) {
            displayTree = 1;
        } else if (strcmp(argv[i], "-rep") == 0 || strcmp(argv[i], "--rapport") == 0) {
            if (system("xdg-open rep/rapport.pdf") != 0 && 
                system("open rep/rapport.pdf") != 0 &&
                system("start rep/rapport.pdf") != 0) { 
                // If PDF viewer is not found, try with web browsers
                if (system("firefox rep/rapport.pdf") != 0 &&
                    system("google-chrome rep/rapport.pdf") != 0 &&
                    system("chromium-browser rep/rapport.pdf") != 0) {
                    fprintf(stderr, "Error: Impossible d'ouvrir le rapport.\n");
                }
            }
            return 0;
        }
    }

    // Parsing logic
    int res = yyparse();
    if (res == 0 && displayTree) {
        printTree(tree);
    }

    if (res == 0) {
        deleteTree(tree);
    }

    return res;
}


void yyerror(const char *msg){
    fprintf(stderr, "Erreur : l%d:c%d -> %s\n", lineno, colno, msg);
}
