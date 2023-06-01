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
#line 1 "L.y"

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "nodes.h"
#include "nodes.c"
int yylex();
int yywrap();
int yyerror();
int yychar;
extern int yylineno;//maybe extern?
char *s;
node *list_node = NULL;
int yydebug=1;
//#define YYSTYPE node*

#line 88 "L.tab.c"

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

#include "L.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_REAL = 5,                       /* REAL  */
  YYSYMBOL_BOOL = 6,                       /* BOOL  */
  YYSYMBOL_STR = 7,                        /* STR  */
  YYSYMBOL_CHAR = 8,                       /* CHAR  */
  YYSYMBOL_IF = 9,                         /* IF  */
  YYSYMBOL_ELSE = 10,                      /* ELSE  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_DO = 13,                        /* DO  */
  YYSYMBOL_VAR = 14,                       /* VAR  */
  YYSYMBOL_FUNCTION = 15,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_NUL = 17,                       /* NUL  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_TYPEBOOL = 19,                  /* TYPEBOOL  */
  YYSYMBOL_TYPECHAR = 20,                  /* TYPECHAR  */
  YYSYMBOL_TYPEINT = 21,                   /* TYPEINT  */
  YYSYMBOL_TYPEREAL = 22,                  /* TYPEREAL  */
  YYSYMBOL_TYPECHARPOINTER = 23,           /* TYPECHARPOINTER  */
  YYSYMBOL_TYPEINTPOINTER = 24,            /* TYPEINTPOINTER  */
  YYSYMBOL_TYPEREALPOINTER = 25,           /* TYPEREALPOINTER  */
  YYSYMBOL_TYPESTR = 26,                   /* TYPESTR  */
  YYSYMBOL_LOGICEQ = 27,                   /* LOGICEQ  */
  YYSYMBOL_LOGICNOTEQ = 28,                /* LOGICNOTEQ  */
  YYSYMBOL_LOGICMORE = 29,                 /* LOGICMORE  */
  YYSYMBOL_LOGICLESS = 30,                 /* LOGICLESS  */
  YYSYMBOL_LOGICMOREEQ = 31,               /* LOGICMOREEQ  */
  YYSYMBOL_LOGICLESSEQ = 32,               /* LOGICLESSEQ  */
  YYSYMBOL_LOGICAND = 33,                  /* LOGICAND  */
  YYSYMBOL_LOGICOR = 34,                   /* LOGICOR  */
  YYSYMBOL_PLUS = 35,                      /* PLUS  */
  YYSYMBOL_MINUS = 36,                     /* MINUS  */
  YYSYMBOL_MUL = 37,                       /* MUL  */
  YYSYMBOL_DIV = 38,                       /* DIV  */
  YYSYMBOL_ARG = 39,                       /* ARG  */
  YYSYMBOL_ASSGN = 40,                     /* ASSGN  */
  YYSYMBOL_ENDST = 41,                     /* ENDST  */
  YYSYMBOL_TYPEDEF = 42,                   /* TYPEDEF  */
  YYSYMBOL_NOT = 43,                       /* NOT  */
  YYSYMBOL_ADDRESS = 44,                   /* ADDRESS  */
  YYSYMBOL_COMMOPEN = 45,                  /* COMMOPEN  */
  YYSYMBOL_COMMCLOSE = 46,                 /* COMMCLOSE  */
  YYSYMBOL_MAIN = 47,                      /* MAIN  */
  YYSYMBOL_STRLEN = 48,                    /* STRLEN  */
  YYSYMBOL_49_lowest_ = 49,                /* "lowest"  */
  YYSYMBOL_50_ = 50,                       /* ','  */
  YYSYMBOL_51_ = 51,                       /* '['  */
  YYSYMBOL_52_ = 52,                       /* ']'  */
  YYSYMBOL_53_ = 53,                       /* '('  */
  YYSYMBOL_54_ = 54,                       /* ')'  */
  YYSYMBOL_55_ = 55,                       /* '{'  */
  YYSYMBOL_56_ = 56,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 57,                  /* $accept  */
  YYSYMBOL_program = 58,                   /* program  */
  YYSYMBOL_declaration = 59,               /* declaration  */
  YYSYMBOL_decl_param_list = 60,           /* decl_param_list  */
  YYSYMBOL_decl_assgn = 61,                /* decl_assgn  */
  YYSYMBOL_decl_id = 62,                   /* decl_id  */
  YYSYMBOL_function_list = 63,             /* function_list  */
  YYSYMBOL_funcproc = 64,                  /* funcproc  */
  YYSYMBOL_function = 65,                  /* function  */
  YYSYMBOL_procedure = 66,                 /* procedure  */
  YYSYMBOL_main_function = 67,             /* main_function  */
  YYSYMBOL_parameter_list = 68,            /* parameter_list  */
  YYSYMBOL_func_body = 69,                 /* func_body  */
  YYSYMBOL_proc_body = 70,                 /* proc_body  */
  YYSYMBOL_iter_body = 71,                 /* iter_body  */
  YYSYMBOL_statement = 72,                 /* statement  */
  YYSYMBOL_update = 73,                    /* update  */
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_decl_statement = 75,            /* decl_statement  */
  YYSYMBOL_assgn_statement = 76,           /* assgn_statement  */
  YYSYMBOL_expr_statement = 77,            /* expr_statement  */
  YYSYMBOL_if_statement = 78,              /* if_statement  */
  YYSYMBOL_iter_statement = 79,            /* iter_statement  */
  YYSYMBOL_ret_statement = 80,             /* ret_statement  */
  YYSYMBOL_ids = 81,                       /* ids  */
  YYSYMBOL_expression = 82,                /* expression  */
  YYSYMBOL_not_expression = 83,            /* not_expression  */
  YYSYMBOL_logic_expression = 84,          /* logic_expression  */
  YYSYMBOL_ar_expression = 85,             /* ar_expression  */
  YYSYMBOL_pr_expression = 86,             /* pr_expression  */
  YYSYMBOL_func_call = 87,                 /* func_call  */
  YYSYMBOL_arglist = 88,                   /* arglist  */
  YYSYMBOL_logic = 89,                     /* logic  */
  YYSYMBOL_arithmetic = 90,                /* arithmetic  */
  YYSYMBOL_type = 91,                      /* type  */
  YYSYMBOL_literal = 92                    /* literal  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   798

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  190

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      53,    54,     2,     2,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    51,     2,    52,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    46,    46,    48,    51,    55,    59,    65,    68,    70,
      71,    74,    78,    82,    88,    89,    90,    92,    96,   100,
     104,   111,   116,   118,   123,   128,   134,   136,   137,   138,
     143,   145,   146,   147,   149,   150,   151,   152,   153,   154,
     157,   161,   165,   171,   175,   179,   183,   186,   190,   193,
     196,   200,   204,   208,   214,   215,   216,   217,   220,   224,
     228,   235,   239,   246,   246,   247,   247,   248,   249,   250,
     252,   255,   259,   263,   269,   269,   269,   269,   270,   270,
     270,   270,   272,   272,   272,   272,   274,   274,   274,   274,
     275,   275,   275,   275,   277,   277,   277,   277,   277
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
  "\"end of file\"", "error", "\"invalid token\"", "INT", "ID", "REAL",
  "BOOL", "STR", "CHAR", "IF", "ELSE", "WHILE", "FOR", "DO", "VAR",
  "FUNCTION", "RETURN", "NUL", "VOID", "TYPEBOOL", "TYPECHAR", "TYPEINT",
  "TYPEREAL", "TYPECHARPOINTER", "TYPEINTPOINTER", "TYPEREALPOINTER",
  "TYPESTR", "LOGICEQ", "LOGICNOTEQ", "LOGICMORE", "LOGICLESS",
  "LOGICMOREEQ", "LOGICLESSEQ", "LOGICAND", "LOGICOR", "PLUS", "MINUS",
  "MUL", "DIV", "ARG", "ASSGN", "ENDST", "TYPEDEF", "NOT", "ADDRESS",
  "COMMOPEN", "COMMCLOSE", "MAIN", "STRLEN", "\"lowest\"", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "$accept", "program", "declaration",
  "decl_param_list", "decl_assgn", "decl_id", "function_list", "funcproc",
  "function", "procedure", "main_function", "parameter_list", "func_body",
  "proc_body", "iter_body", "statement", "update", "statement_list",
  "decl_statement", "assgn_statement", "expr_statement", "if_statement",
  "iter_statement", "ret_statement", "ids", "expression", "not_expression",
  "logic_expression", "ar_expression", "pr_expression", "func_call",
  "arglist", "logic", "arithmetic", "type", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-135)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      36,    14,    32,    36,  -135,  -135,  -135,  -135,     9,    25,
    -135,  -135,    49,    49,    86,   -13,    17,  -135,   -11,    53,
      51,    52,   192,    96,    86,   182,    83,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,  -135,  -135,  -135,     6,    54,    56,
      54,   192,   130,  -135,   184,  -135,  -135,  -135,  -135,   -10,
    -135,  -135,  -135,  -135,    66,    67,    68,   668,   120,   120,
     109,   109,   109,  -135,    16,   721,  -135,    84,   238,  -135,
     292,  -135,  -135,  -135,  -135,  -135,    27,    85,  -135,   227,
      61,   760,  -135,  -135,  -135,   562,   615,     1,    16,    16,
      86,   346,   116,  -135,    77,    23,  -135,    90,    81,    87,
    -135,  -135,  -135,    93,   400,  -135,  -135,   454,  -135,  -135,
      16,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,  -135,
     109,  -135,  -135,  -135,  -135,   109,   109,   109,    16,   615,
      92,    94,  -135,  -135,   -17,    95,    97,    16,  -135,   508,
      99,   733,   192,   120,    16,  -135,  -135,  -135,   113,  -135,
    -135,  -135,  -135,   114,   102,  -135,  -135,    16,  -135,   668,
     668,   118,  -135,    16,   108,    70,    61,  -135,  -135,  -135,
    -135,  -135,  -135,  -135,   151,  -135,   159,   110,  -135,  -135,
     668,   125,   112,   127,  -135,    16,   668,  -135,  -135,  -135
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,    12,    14,    15,    16,     0,     0,
       1,    13,    22,    22,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    20,    53,     0,     0,     0,
       0,     0,     0,    18,     0,    17,    19,    21,    94,    64,
      95,    97,    98,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,    30,     0,     0,    41,
       0,    38,    37,    36,    35,    34,     0,     0,    54,    56,
      55,    57,    66,    65,    26,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     9,     0,     5,     8,     4,    64,
      68,    58,    67,     0,     0,    43,    27,     0,    28,    42,
       0,    45,    74,    75,    76,    77,    78,    79,    80,    81,
       0,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,     0,    63,    39,    29,     0,    60,
      62,    59,    61,     0,     0,    23,    24,     0,    70,     0,
       0,     0,    31,     0,    94,     0,     0,     3,     6,     7,
      44,    51,    25,    73,    46,    48,     0,     0,    11,    10,
       0,     0,     0,     0,    47,     0,     0,    49,    40,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -135,  -135,  -135,   111,    26,  -135,   -32,     0,  -135,  -135,
    -135,   158,  -135,   132,  -134,   -57,  -135,    -2,  -135,    89,
    -135,  -135,  -135,   -59,    62,   -53,  -135,  -135,    34,   -46,
    -135,  -135,   100,   -79,   -24,  -135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    67,    95,    96,    97,     3,     4,     5,     6,
       7,    15,    45,    43,    92,    69,   182,    70,    71,    72,
      73,    74,    75,   130,    76,    77,    78,    79,    80,    81,
      82,   134,   120,   125,    35,    83
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    39,   127,    11,    48,    99,    50,    51,    52,    53,
      68,   103,    85,   109,   100,   101,   102,    47,     8,    48,
      99,    50,    51,    52,    53,   174,   175,   131,    19,   109,
     -52,    22,    10,   157,   133,   135,   136,   158,    60,    23,
     -52,    20,    86,    87,    61,    62,   184,   109,    41,    63,
     109,     1,   189,    60,    64,   132,    23,   148,    19,    61,
      62,     9,    12,   104,    63,   142,   107,   110,    11,    64,
     154,    21,   109,   143,   149,   153,    18,    23,    13,   150,
     151,   152,   109,   129,   161,    11,    37,   127,    14,   139,
      17,   169,    24,    25,    26,   166,   121,   122,   123,   124,
      36,    40,    93,    93,   173,   121,   122,   123,   124,    42,
     177,    44,    48,    99,    50,    51,    52,    53,   167,    88,
      89,    90,   179,    93,    94,   105,   111,   140,   141,    93,
     144,   143,   188,    48,    49,    50,    51,    52,    53,    54,
      87,    55,    56,    57,    58,     1,    60,   145,   155,   159,
     156,   160,   163,    62,   170,   171,    59,    63,   172,   176,
     178,   180,    64,   181,   183,   185,   186,    60,   187,   168,
      98,    16,    46,    61,    62,   165,     0,     0,    63,   137,
       0,   126,     0,    64,     0,    65,    66,    48,    49,    50,
      51,    52,    53,    54,     0,    55,    56,    57,    58,     1,
      38,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      59,    27,    28,    29,    30,    31,    32,    33,    34,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,     0,
       0,     0,    63,     0,     0,     0,     0,    64,     0,    65,
      84,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    57,    58,     1,   112,   113,   114,   115,   116,   117,
     118,   119,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,     0,     0,     0,    63,     0,     0,     0,
       0,    64,     0,    65,   106,    48,    49,    50,    51,    52,
      53,    54,     0,    55,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,    65,   108,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,     0,     0,     0,    63,     0,     0,     0,     0,    64,
       0,    65,   138,    48,    49,    50,    51,    52,    53,    54,
       0,    55,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     0,    63,     0,
       0,     0,     0,    64,     0,    65,   146,    48,    49,    50,
      51,    52,    53,    54,     0,    55,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    60,     0,     0,     0,     0,     0,    61,    62,     0,
       0,     0,    63,     0,     0,     0,     0,    64,     0,    65,
     147,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,     0,     0,     0,    63,     0,     0,     0,
       0,    64,     0,    65,   162,    48,    49,    50,    51,    52,
      53,    54,     0,    55,    56,    57,    58,     1,   128,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    59,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,     0,     0,    61,    62,     0,     0,     0,
      63,     0,     0,     0,     0,    64,     0,    65,    48,    49,
      50,    51,    52,    53,    54,     0,    55,    56,    57,    58,
       0,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
       0,     0,     0,    63,     0,     0,     0,     0,    64,     0,
      65,    48,    49,    50,    51,    52,    53,    54,     0,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    60,     0,     0,     0,     0,
       0,    61,    62,     0,     0,     0,    63,     0,     0,     0,
       0,    64,     0,    91,    48,    49,    50,    51,    52,    53,
      54,     0,    55,    56,    57,    58,   164,    99,    50,    51,
      52,    53,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,     0,     0,     0,    63,
      60,     0,     0,     0,    64,     0,    65,    62,     0,     0,
       0,    63,     0,     0,     0,     0,    64,   112,   113,   114,
     115,   116,   117,   118,   119,   121,   122,   123,   124
};

static const yytype_int16 yycheck[] =
{
      57,    25,    81,     3,     3,     4,     5,     6,     7,     8,
      42,    64,    44,    70,    60,    61,    62,    41,     4,     3,
       4,     5,     6,     7,     8,   159,   160,    86,    41,    86,
      40,    42,     0,    50,    87,    88,    89,    54,    37,    50,
      50,    54,    44,    53,    43,    44,   180,   104,    42,    48,
     107,    15,   186,    37,    53,    54,    50,   110,    41,    43,
      44,    47,    53,    65,    48,    42,    68,    40,    68,    53,
     129,    54,   129,    50,   120,   128,    14,    50,    53,   125,
     126,   127,   139,    85,   137,    85,    24,   166,    39,    91,
       4,   144,    39,    42,    42,   141,    35,    36,    37,    38,
       4,    18,   159,   160,   157,    35,    36,    37,    38,    55,
     163,    55,     3,     4,     5,     6,     7,     8,   142,    53,
      53,    53,    52,   180,     4,    41,    41,    11,    51,   186,
      40,    50,   185,     3,     4,     5,     6,     7,     8,     9,
      53,    11,    12,    13,    14,    15,    37,    54,    56,    54,
      56,    54,    53,    44,    41,    41,    26,    48,    56,    41,
      52,    10,    53,     4,    54,    40,    54,    37,    41,   143,
      59,    13,    40,    43,    44,   141,    -1,    -1,    48,    90,
      -1,    81,    -1,    53,    -1,    55,    56,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      26,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    55,    56,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    55,    56,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,
      56,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    55,    56,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    55,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      55,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    55,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,
      37,    -1,    -1,    -1,    53,    -1,    55,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    58,    63,    64,    65,    66,    67,     4,    47,
       0,    64,    53,    53,    39,    68,    68,     4,    81,    41,
      54,    54,    42,    50,    39,    42,    42,    19,    20,    21,
      22,    23,    24,    25,    26,    91,     4,    81,    18,    91,
      18,    42,    55,    70,    55,    69,    70,    91,     3,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    14,    26,
      37,    43,    44,    48,    53,    55,    56,    59,    63,    72,
      74,    75,    76,    77,    78,    79,    81,    82,    83,    84,
      85,    86,    87,    92,    56,    63,    74,    53,    53,    53,
      53,    55,    71,    72,     4,    60,    61,    62,    60,     4,
      86,    86,    86,    82,    74,    41,    56,    74,    56,    72,
      40,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      89,    35,    36,    37,    38,    90,    89,    90,    16,    74,
      80,    80,    54,    82,    88,    82,    82,    76,    56,    74,
      11,    51,    42,    50,    40,    54,    56,    56,    82,    86,
      86,    86,    86,    82,    80,    56,    56,    50,    54,    54,
      54,    82,    56,    53,     3,    85,    86,    91,    61,    82,
      41,    41,    56,    82,    71,    71,    41,    82,    52,    52,
      10,     4,    73,    54,    71,    40,    54,    41,    82,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    63,    63,    64,    64,    64,    65,    66,    67,
      68,    68,    68,    69,    69,    69,    69,    70,    70,    70,
      70,    71,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    74,    74,    75,    76,    77,    78,    78,    79,    79,
      79,    80,    81,    81,    82,    82,    82,    82,    83,    84,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     2,     1,     3,     3,     1,     1,
       4,     4,     1,     2,     1,     1,     1,     8,     8,     8,
       4,     6,     0,     4,     4,     5,     2,     3,     3,     4,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     2,     2,     4,     2,     5,     7,     5,     7,
       8,     3,     1,     3,     1,     1,     1,     1,     2,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     2,     1,
       4,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 2: /* program: function_list  */
#line 46 "L.y"
                       {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode; print_tree((yyval.node_info).treenode, 0);}
#line 1417 "L.tab.c"
    break;

  case 3: /* declaration: VAR decl_param_list TYPEDEF type  */
#line 48 "L.y"
                                              {
    (yyval.node_info).treenode = crnode_var_decl("DECL", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[0].node_info).str, decl_type));
}
#line 1425 "L.tab.c"
    break;

  case 4: /* declaration: TYPESTR decl_param_list  */
#line 51 "L.y"
                          {
    (yyval.node_info).treenode = crnode_str_decl("DECL", (yyvsp[0].node_info).treenode);
}
#line 1433 "L.tab.c"
    break;

  case 5: /* decl_param_list: decl_assgn  */
#line 55 "L.y"
                            {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1442 "L.tab.c"
    break;

  case 6: /* decl_param_list: decl_param_list ',' decl_assgn  */
#line 59 "L.y"
                                 {
    node *list_node_decl = (yyval.node_info).treenode;
    add_to_list(list_node_decl, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_decl;
}
#line 1452 "L.tab.c"
    break;

  case 7: /* decl_assgn: decl_id ASSGN expression  */
#line 65 "L.y"
                                     {
    (yyval.node_info).treenode = crnode_assgn_decl("", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1460 "L.tab.c"
    break;

  case 8: /* decl_assgn: decl_id  */
#line 68 "L.y"
          {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1466 "L.tab.c"
    break;

  case 9: /* decl_id: ID  */
#line 70 "L.y"
            {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, decl_id);}
#line 1472 "L.tab.c"
    break;

  case 10: /* decl_id: ID '[' ar_expression ']'  */
#line 71 "L.y"
                           {
    (yyval.node_info).treenode = crnode_id_ar_decl("", crnode_leaf((yyvsp[-3].node_info).str, decl_id_br), (yyvsp[-1].node_info).treenode);
}
#line 1480 "L.tab.c"
    break;

  case 11: /* decl_id: ID '[' INT ']'  */
#line 74 "L.y"
                 {
    (yyval.node_info).treenode = crnode_id_int_decl("", crnode_leaf((yyvsp[-3].node_info).str, decl_id_br), crnode_leaf((yyvsp[-1].node_info).str, decl_id_integer));
}
#line 1488 "L.tab.c"
    break;

  case 12: /* function_list: funcproc  */
#line 78 "L.y"
                        {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1497 "L.tab.c"
    break;

  case 13: /* function_list: function_list funcproc  */
#line 82 "L.y"
                         {
        node *list_node_funcs = (yyval.node_info).treenode;
        add_to_list(list_node_funcs, (yyvsp[0].node_info).treenode);
        (yyval.node_info).treenode = list_node_funcs;
}
#line 1507 "L.tab.c"
    break;

  case 14: /* funcproc: function  */
#line 88 "L.y"
                   {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1513 "L.tab.c"
    break;

  case 15: /* funcproc: procedure  */
#line 89 "L.y"
            {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1519 "L.tab.c"
    break;

  case 16: /* funcproc: main_function  */
#line 90 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1525 "L.tab.c"
    break;

  case 17: /* function: FUNCTION ID '(' parameter_list ')' TYPEDEF type func_body  */
#line 92 "L.y"
                                                                    {
    (yyval.node_info).treenode = crnode_function("FUNC", crnode_leaf((yyvsp[-6].node_info).str, func_id), (yyvsp[-4].node_info).treenode, crnode_leaf((yyvsp[-1].node_info).str, func_type), (yyvsp[0].node_info).treenode);
}
#line 1533 "L.tab.c"
    break;

  case 18: /* procedure: FUNCTION ID '(' parameter_list ')' TYPEDEF VOID proc_body  */
#line 96 "L.y"
                                                                     {
    (yyval.node_info).treenode = crnode_procedure("PROC", crnode_leaf((yyvsp[-6].node_info).str, func_id), (yyvsp[-4].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1541 "L.tab.c"
    break;

  case 19: /* main_function: FUNCTION MAIN '(' parameter_list ')' TYPEDEF VOID proc_body  */
#line 100 "L.y"
                                                                           {
    (yyval.node_info).treenode = crnode_main_function("MAIN_FUNC", (yyvsp[-4].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1549 "L.tab.c"
    break;

  case 20: /* parameter_list: ARG ids TYPEDEF type  */
#line 104 "L.y"
                                     {
    //for (int i = 0; i < $2.treenode->nodes.list_node.num - 1; i++) {
      //  strcpy($2.treenode->nodes.list_node.list[i]->nodes.leaf_node.info, "param");
    //}
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_param_list("PARAM_LIST", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[0].node_info).str, param_type)));
}
#line 1561 "L.tab.c"
    break;

  case 21: /* parameter_list: parameter_list ENDST ARG ids TYPEDEF type  */
#line 111 "L.y"
                                            {
    node *list_node_args = (yyval.node_info).treenode;
    add_to_list(list_node_args, crnode_param_list("PARAM_LIST", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[0].node_info).str, param_type)));
    (yyval.node_info).treenode = list_node_args;
}
#line 1571 "L.tab.c"
    break;

  case 23: /* func_body: '{' function_list ret_statement '}'  */
#line 118 "L.y"
                                              {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1581 "L.tab.c"
    break;

  case 24: /* func_body: '{' statement_list ret_statement '}'  */
#line 123 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1591 "L.tab.c"
    break;

  case 25: /* func_body: '{' function_list statement_list ret_statement '}'  */
#line 128 "L.y"
                                                     {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-3].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1602 "L.tab.c"
    break;

  case 27: /* proc_body: '{' function_list '}'  */
#line 136 "L.y"
                                 {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1608 "L.tab.c"
    break;

  case 28: /* proc_body: '{' statement_list '}'  */
#line 137 "L.y"
                        {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1614 "L.tab.c"
    break;

  case 29: /* proc_body: '{' function_list statement_list '}'  */
#line 138 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1624 "L.tab.c"
    break;

  case 31: /* iter_body: '{' statement_list '}'  */
#line 145 "L.y"
                                  {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1630 "L.tab.c"
    break;

  case 33: /* iter_body: statement  */
#line 147 "L.y"
            {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1636 "L.tab.c"
    break;

  case 34: /* statement: iter_statement  */
#line 149 "L.y"
                          {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1642 "L.tab.c"
    break;

  case 35: /* statement: if_statement  */
#line 150 "L.y"
               {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1648 "L.tab.c"
    break;

  case 36: /* statement: expr_statement  */
#line 151 "L.y"
                 {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1654 "L.tab.c"
    break;

  case 37: /* statement: assgn_statement  */
#line 152 "L.y"
                  {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1660 "L.tab.c"
    break;

  case 38: /* statement: decl_statement  */
#line 153 "L.y"
                 {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1666 "L.tab.c"
    break;

  case 39: /* statement: '{' statement_list '}'  */
#line 154 "L.y"
                         {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1672 "L.tab.c"
    break;

  case 40: /* update: ID ASSGN expression  */
#line 157 "L.y"
                            {
    (yyval.node_info).treenode = crnode_update("UPDATE_STMT", crnode_leaf((yyvsp[-2].node_info).str, update_id), (yyvsp[0].node_info).treenode);
}
#line 1680 "L.tab.c"
    break;

  case 41: /* statement_list: statement  */
#line 161 "L.y"
                          {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1689 "L.tab.c"
    break;

  case 42: /* statement_list: statement_list statement  */
#line 165 "L.y"
                           {
    node *list_node_stmts = (yyval.node_info).treenode;
    add_to_list(list_node_stmts, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_stmts;
}
#line 1699 "L.tab.c"
    break;

  case 43: /* decl_statement: declaration ENDST  */
#line 171 "L.y"
                                  {
    (yyval.node_info).treenode = crnode_decl_stmt("DECL_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1707 "L.tab.c"
    break;

  case 44: /* assgn_statement: ids ASSGN expression ENDST  */
#line 175 "L.y"
                                            {
    (yyval.node_info).treenode = crnode_assgn_stmt("ASSGN_STMT", (yyvsp[-3].node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1715 "L.tab.c"
    break;

  case 45: /* expr_statement: expression ENDST  */
#line 179 "L.y"
                                 {
    (yyval.node_info).treenode = crnode_expr_stmt("EXPR_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1723 "L.tab.c"
    break;

  case 46: /* if_statement: IF '(' expression ')' iter_body  */
#line 183 "L.y"
                                                             {
    (yyval.node_info).treenode = crnode_if_stmt("IF_STMT", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1731 "L.tab.c"
    break;

  case 47: /* if_statement: IF '(' expression ')' iter_body ELSE iter_body  */
#line 186 "L.y"
                                                 {
    (yyval.node_info).treenode = crnode_if_else_stmt("IF_ELSE_STMT", (yyvsp[-4].node_info).treenode, (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1739 "L.tab.c"
    break;

  case 48: /* iter_statement: WHILE '(' expression ')' iter_body  */
#line 190 "L.y"
                                                   {
    (yyval.node_info).treenode = crnode_while_stmt("WHILE_STMT", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1747 "L.tab.c"
    break;

  case 49: /* iter_statement: DO iter_body WHILE '(' expression ')' ENDST  */
#line 193 "L.y"
                                              {
    (yyval.node_info).treenode = crnode_do_while_stmt("DO_WHILE_STMT", (yyvsp[-5].node_info).treenode, (yyvsp[-2].node_info).treenode);
}
#line 1755 "L.tab.c"
    break;

  case 50: /* iter_statement: FOR '(' assgn_statement expression ENDST update ')' iter_body  */
#line 196 "L.y"
                                                                {
    (yyval.node_info).treenode = crnode_for_stmt("FOR_STMT", (yyvsp[-5].node_info).treenode, (yyvsp[-4].node_info).treenode, (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1763 "L.tab.c"
    break;

  case 51: /* ret_statement: RETURN expression ENDST  */
#line 200 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_ret_stmt("RET_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1771 "L.tab.c"
    break;

  case 52: /* ids: ID  */
#line 204 "L.y"
        {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_leaf((yyvsp[0].node_info).str, id_list));
}
#line 1780 "L.tab.c"
    break;

  case 53: /* ids: ids ',' ID  */
#line 208 "L.y"
             {
    node *list_node_ids = (yyval.node_info).treenode;
    add_to_list(list_node_ids, crnode_leaf((yyvsp[0].node_info).str, id_list));
    (yyval.node_info).treenode = list_node_ids;
}
#line 1790 "L.tab.c"
    break;

  case 54: /* expression: not_expression  */
#line 214 "L.y"
                           {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1796 "L.tab.c"
    break;

  case 55: /* expression: ar_expression  */
#line 215 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1802 "L.tab.c"
    break;

  case 56: /* expression: logic_expression  */
#line 216 "L.y"
                   {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1808 "L.tab.c"
    break;

  case 57: /* expression: pr_expression  */
#line 217 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1814 "L.tab.c"
    break;

  case 58: /* not_expression: NOT pr_expression  */
#line 220 "L.y"
                                  {
    (yyval.node_info).treenode = crnode_not_expr("NOT_EXPR", (yyvsp[0].node_info).treenode);
}
#line 1822 "L.tab.c"
    break;

  case 59: /* logic_expression: pr_expression logic pr_expression  */
#line 224 "L.y"
                                                    { //Change needed here
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_logic_expr("LOGIC_EXPR", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[-1].node_info).str, logic_op), (yyvsp[0].node_info).treenode));
}
#line 1831 "L.tab.c"
    break;

  case 60: /* logic_expression: logic_expression logic pr_expression  */
#line 228 "L.y"
                                       {
    node *list_node_logic = (yyval.node_info).treenode;
    add_to_list(list_node_logic, crnode_leaf((yyvsp[-1].node_info).str, logic_op));
    add_to_list(list_node_logic, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_logic;
}
#line 1842 "L.tab.c"
    break;

  case 61: /* ar_expression: pr_expression arithmetic pr_expression  */
#line 235 "L.y"
                                                      { //AND here too
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_ar_expr("AR_EXPR", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[-1].node_info).str, ar_op), (yyvsp[0].node_info).treenode));
}
#line 1851 "L.tab.c"
    break;

  case 62: /* ar_expression: ar_expression arithmetic pr_expression  */
#line 239 "L.y"
                                         {
    node *list_node_ar = (yyval.node_info).treenode;
    add_to_list(list_node_ar, crnode_leaf((yyvsp[-1].node_info).str, ar_op));
    add_to_list(list_node_ar, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_ar;
}
#line 1862 "L.tab.c"
    break;

  case 63: /* pr_expression: '(' expression ')'  */
#line 246 "L.y"
                                  {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1868 "L.tab.c"
    break;

  case 64: /* pr_expression: ID  */
#line 246 "L.y"
                                                                                   {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, id_plain);}
#line 1874 "L.tab.c"
    break;

  case 65: /* pr_expression: literal  */
#line 247 "L.y"
          {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal);}
#line 1880 "L.tab.c"
    break;

  case 66: /* pr_expression: func_call  */
#line 247 "L.y"
                                                                     {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1886 "L.tab.c"
    break;

  case 67: /* pr_expression: ADDRESS pr_expression  */
#line 248 "L.y"
                        {(yyval.node_info).treenode = crnode_address("DEREF", (yyvsp[0].node_info).treenode);}
#line 1892 "L.tab.c"
    break;

  case 68: /* pr_expression: MUL pr_expression  */
#line 249 "L.y"
                    {(yyval.node_info).treenode = crnode_deref("DEREF", (yyvsp[0].node_info).treenode);}
#line 1898 "L.tab.c"
    break;

  case 69: /* pr_expression: STRLEN  */
#line 250 "L.y"
         {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, strlength);}
#line 1904 "L.tab.c"
    break;

  case 70: /* func_call: ID '(' arglist ')'  */
#line 252 "L.y"
                              {
    (yyval.node_info).treenode = crnode_func_call_args("FUNC_CALL", crnode_leaf((yyvsp[-3].node_info).str, func_call_id), (yyvsp[-1].node_info).treenode);
}
#line 1912 "L.tab.c"
    break;

  case 71: /* func_call: ID '(' ')'  */
#line 255 "L.y"
             {
    (yyval.node_info).treenode = crnode_func_call("FUNC_CALL", crnode_leaf((yyvsp[-2].node_info).str, func_call_id));
}
#line 1920 "L.tab.c"
    break;

  case 72: /* arglist: expression  */
#line 259 "L.y"
                    {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1929 "L.tab.c"
    break;

  case 73: /* arglist: arglist ',' expression  */
#line 263 "L.y"
                         {
    node *list_node_args = (yyval.node_info).treenode;
    add_to_list(list_node_args, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_args;
}
#line 1939 "L.tab.c"
    break;


#line 1943 "L.tab.c"

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

#line 279 "L.y"


int main() {
    int result = yyparse();
}

int yyerror(char *s) {
    fprintf(stderr, "-------\nError: %s\nToken: %d (Check the corresponding token in L.tab.h file)\nLine: %d\n-------\n", s, yychar, yylineno);
}
