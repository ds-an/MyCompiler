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
  YYSYMBOL_block_statement = 73,           /* block_statement  */
  YYSYMBOL_update = 74,                    /* update  */
  YYSYMBOL_statement_list = 75,            /* statement_list  */
  YYSYMBOL_decl_statement = 76,            /* decl_statement  */
  YYSYMBOL_assgn_statement = 77,           /* assgn_statement  */
  YYSYMBOL_expr_statement = 78,            /* expr_statement  */
  YYSYMBOL_if_statement = 79,              /* if_statement  */
  YYSYMBOL_iter_statement = 80,            /* iter_statement  */
  YYSYMBOL_ret_statement = 81,             /* ret_statement  */
  YYSYMBOL_ids = 82,                       /* ids  */
  YYSYMBOL_expression = 83,                /* expression  */
  YYSYMBOL_not_expression = 84,            /* not_expression  */
  YYSYMBOL_logic_expression = 85,          /* logic_expression  */
  YYSYMBOL_ar_expression = 86,             /* ar_expression  */
  YYSYMBOL_pr_expression = 87,             /* pr_expression  */
  YYSYMBOL_func_call = 88,                 /* func_call  */
  YYSYMBOL_str_id = 89,                    /* str_id  */
  YYSYMBOL_arglist = 90,                   /* arglist  */
  YYSYMBOL_logic = 91,                     /* logic  */
  YYSYMBOL_arithmetic = 92,                /* arithmetic  */
  YYSYMBOL_type = 93,                      /* type  */
  YYSYMBOL_literal = 94                    /* literal  */
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
#define YYLAST   943

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  206

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
       0,    48,    48,    50,    54,    59,    63,    69,    72,    74,
      75,    78,    81,    85,    89,    95,    96,    97,    99,   103,
     107,   111,   119,   125,   127,   132,   137,   143,   145,   146,
     147,   152,   154,   155,   157,   158,   159,   160,   161,   162,
     165,   167,   171,   175,   181,   185,   188,   192,   196,   199,
     203,   206,   209,   213,   217,   221,   227,   228,   229,   230,
     233,   237,   241,   248,   252,   259,   260,   261,   262,   263,
     264,   265,   266,   268,   271,   275,   278,   281,   285,   289,
     295,   295,   295,   295,   296,   296,   296,   296,   298,   298,
     298,   298,   300,   301,   302,   303,   304,   305,   306,   307,
     309,   310,   311,   312,   313
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
  "proc_body", "iter_body", "statement", "block_statement", "update",
  "statement_list", "decl_statement", "assgn_statement", "expr_statement",
  "if_statement", "iter_statement", "ret_statement", "ids", "expression",
  "not_expression", "logic_expression", "ar_expression", "pr_expression",
  "func_call", "str_id", "arglist", "logic", "arithmetic", "type",
  "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-155)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       1,     5,    32,     1,  -155,  -155,  -155,  -155,   -38,   -16,
    -155,  -155,    31,    31,    82,   -21,    -5,  -155,    -7,    58,
      16,    64,   180,    98,    82,   138,    96,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,    15,    62,    66,
      62,   180,   129,  -155,   183,  -155,  -155,  -155,  -155,    54,
    -155,  -155,  -155,  -155,    69,    70,    71,   613,   123,   123,
     750,   750,   750,  -155,   679,   666,  -155,    87,   237,  -155,
    -155,   291,  -155,  -155,  -155,  -155,  -155,    19,   829,  -155,
     184,    55,  -155,  -155,  -155,  -155,  -155,   507,   560,   691,
      18,   679,   679,     8,   345,   118,  -155,    79,    46,  -155,
      91,    97,    22,   750,   106,  -155,  -155,   734,   399,  -155,
    -155,   453,  -155,  -155,   679,  -155,  -155,  -155,  -155,  -155,
    -155,  -155,  -155,  -155,  -155,  -155,  -155,  -155,   679,   679,
     679,   679,   679,   560,    92,    93,    99,    57,   905,    -8,
    -155,   905,    -4,   777,   789,   750,   679,  -155,   100,   742,
     180,   123,   679,  -155,   679,  -155,  -155,  -155,   845,   905,
     905,   905,   905,   860,   109,  -155,  -155,  -155,  -155,  -155,
     679,  -155,   613,   613,   106,   875,   679,   102,    60,    47,
    -155,  -155,   905,   890,  -155,  -155,  -155,   905,   142,  -155,
     163,   817,  -155,  -155,  -155,  -155,   613,   128,   115,   130,
    -155,   679,   613,  -155,   905,  -155
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,    13,    15,    16,    17,     0,     0,
       1,    14,    23,    23,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,    21,    55,     0,     0,     0,
       0,     0,     0,    19,     0,    18,    20,    22,   100,    66,
     101,   103,   104,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,    31,     0,     0,    42,
      39,     0,    38,    37,    36,    35,    34,     0,     0,    56,
      58,    57,    59,    69,    67,    68,    27,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     9,     0,     5,
       8,     4,    66,     0,    71,    60,    70,     0,     0,    44,
      28,     0,    29,    43,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    47,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    66,     0,    57,
      74,    78,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,    71,     0,    65,    40,    30,     0,    61,
      63,    62,    64,     0,     0,    24,    25,    76,    77,    75,
       0,    73,     0,     0,     0,     0,     0,   100,    66,    57,
       3,     6,     7,     0,    45,    53,    26,    79,    48,    50,
       0,     0,    11,    12,    10,    46,     0,     0,     0,     0,
      49,     0,     0,    51,    41,    52
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -155,  -155,  -155,   111,    23,  -155,    76,     0,  -155,  -155,
    -155,   162,  -155,   136,  -154,   -57,  -155,  -155,   -34,  -155,
      85,  -155,  -155,  -155,   -77,    50,   -51,  -155,  -155,   -82,
     -56,  -155,  -155,  -155,   101,   -79,   -24,  -155
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    67,    98,    99,   100,     3,     4,     5,     6,
       7,    15,    45,    43,    95,    69,    70,   198,   108,    72,
      73,    74,    75,    76,   134,    77,    78,    79,    80,    81,
      82,    83,    84,   142,   128,   129,    35,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      96,    39,   131,    11,   104,   105,   106,   139,    71,     8,
      88,   135,    17,   107,   113,    12,     1,    47,   188,   189,
      19,    48,   102,    50,    51,    52,    53,   123,   124,   125,
     126,   113,    10,    20,   111,    22,    19,    13,   138,   141,
     143,   144,   200,    23,   169,   145,   170,   153,   205,    21,
     171,   113,     9,   133,   113,   103,   164,    41,    25,   114,
     131,    61,    62,   158,    18,    23,    63,   179,    11,    23,
      14,    64,   140,    89,    37,    90,   113,   159,   160,   161,
     162,   163,   123,   124,   125,   126,    17,    11,   150,   174,
     123,   124,   125,   126,   -54,   175,   151,    24,   138,   194,
     131,   182,    36,   183,   -54,    89,    26,    90,    89,   168,
      90,    89,   193,    90,    40,    96,    96,    42,    68,   187,
      87,    44,    91,    92,    93,   191,   180,    97,   109,   148,
     149,   152,    48,    49,    50,    51,    52,    53,    54,    96,
      55,    56,    57,    58,     1,    96,   154,   151,   165,   166,
     204,   167,   196,   176,   192,    59,    38,    27,    28,    29,
      30,    31,    32,    33,    34,   186,    60,   197,   201,   202,
     101,   203,    61,    62,   181,    16,    46,    63,   146,     0,
       0,   130,    64,     0,    65,    66,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,    57,    58,     1,    27,
      28,    29,    30,    31,    32,    33,    34,     0,     0,    59,
       0,   115,   116,   117,   118,   119,   120,   121,   122,     0,
      60,     0,     0,     0,     0,     0,    61,    62,     0,     0,
       0,    63,     0,     0,     0,     0,    64,     0,    65,    86,
      48,    49,    50,    51,    52,    53,    54,     0,    55,    56,
      57,    58,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,    63,     0,     0,     0,     0,
      64,     0,    65,   110,    48,    49,    50,    51,    52,    53,
      54,     0,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    60,     0,
       0,     0,     0,     0,    61,    62,     0,     0,     0,    63,
       0,     0,     0,     0,    64,     0,    65,   112,    48,    49,
      50,    51,    52,    53,    54,     0,    55,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    59,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     0,     0,     0,     0,    61,    62,
       0,     0,     0,    63,     0,     0,     0,     0,    64,     0,
      65,   147,    48,    49,    50,    51,    52,    53,    54,     0,
      55,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    60,     0,     0,     0,
       0,     0,    61,    62,     0,     0,     0,    63,     0,     0,
       0,     0,    64,     0,    65,   156,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,     0,     0,
       0,    63,     0,     0,     0,     0,    64,     0,    65,   157,
      48,    49,    50,    51,    52,    53,    54,     0,    55,    56,
      57,    58,     1,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,     0,     0,     0,     0,     0,
      61,    62,     0,     0,     0,    63,     0,     0,     0,     0,
      64,     0,    65,    48,    49,    50,    51,    52,    53,    54,
       0,    55,    56,    57,    58,     0,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    60,     0,     0,
       0,     0,     0,    61,    62,     0,     0,     0,    63,     0,
       0,     0,     0,    64,     0,    65,    48,    49,    50,    51,
      52,    53,    54,     0,    55,    56,    57,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,     0,     0,     0,     0,    61,    62,     0,     0,
       0,    63,     0,     0,     0,     0,    64,     0,    94,    48,
      49,    50,    51,    52,    53,    54,     0,    55,    56,    57,
      58,     0,    48,   102,    50,    51,    52,    53,     0,     0,
       0,     0,    59,     0,   136,   137,    50,    51,    52,    53,
       0,     0,     0,    60,     0,     0,     0,     0,     0,    61,
      62,     0,     0,     0,    63,     0,   103,     0,     0,    64,
       0,    65,    61,    62,     0,     0,     0,    63,   103,     0,
       0,     0,    64,     0,    61,    62,     0,     0,     0,    63,
       0,     0,     0,     0,    64,   177,   178,    50,    51,    52,
      53,     0,     0,    48,   102,    50,    51,    52,    53,     0,
       0,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,     0,     0,     0,     0,     0,   103,
       0,     0,     0,     0,     0,    61,    62,   103,   155,     0,
      63,     0,     0,     0,    62,    64,     0,     0,    63,     0,
       0,     0,     0,    64,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,     0,
       0,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   173,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,     0,
     127,   199,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,   184,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
       0,   185,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,   190,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
       0,   195,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126
};

static const yytype_int16 yycheck[] =
{
      57,    25,    81,     3,    60,    61,    62,    89,    42,     4,
      44,    88,     4,    64,    71,    53,    15,    41,   172,   173,
      41,     3,     4,     5,     6,     7,     8,    35,    36,    37,
      38,    88,     0,    54,    68,    42,    41,    53,    89,    90,
      91,    92,   196,    50,    52,    37,    50,   103,   202,    54,
      54,   108,    47,    87,   111,    37,   133,    42,    42,    40,
     139,    43,    44,   114,    14,    50,    48,   149,    68,    50,
      39,    53,    54,    51,    24,    53,   133,   128,   129,   130,
     131,   132,    35,    36,    37,    38,     4,    87,    42,   145,
      35,    36,    37,    38,    40,   146,    50,    39,   149,    52,
     179,   152,     4,   154,    50,    51,    42,    53,    51,    52,
      53,    51,    52,    53,    18,   172,   173,    55,    42,   170,
      44,    55,    53,    53,    53,   176,   150,     4,    41,    11,
      51,    40,     3,     4,     5,     6,     7,     8,     9,   196,
      11,    12,    13,    14,    15,   202,    40,    50,    56,    56,
     201,    52,    10,    53,    52,    26,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    56,    37,     4,    40,    54,
      59,    41,    43,    44,   151,    13,    40,    48,    93,    -1,
      -1,    80,    53,    -1,    55,    56,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    26,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,    56,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    53,    -1,    55,    56,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      55,    56,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    53,    -1,    55,    56,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,    56,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    55,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    13,    14,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    55,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    55,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    13,
      14,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    26,    -1,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    48,    -1,    37,    -1,    -1,    53,
      -1,    55,    43,    44,    -1,    -1,    -1,    48,    37,    -1,
      -1,    -1,    53,    -1,    43,    44,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    53,     3,     4,     5,     6,     7,
       8,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    43,    44,    37,    54,    -1,
      48,    -1,    -1,    -1,    44,    53,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    53,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    54,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    41,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    -1,
      -1,    41,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    58,    63,    64,    65,    66,    67,     4,    47,
       0,    64,    53,    53,    39,    68,    68,     4,    82,    41,
      54,    54,    42,    50,    39,    42,    42,    19,    20,    21,
      22,    23,    24,    25,    26,    93,     4,    82,    18,    93,
      18,    42,    55,    70,    55,    69,    70,    93,     3,     4,
       5,     6,     7,     8,     9,    11,    12,    13,    14,    26,
      37,    43,    44,    48,    53,    55,    56,    59,    63,    72,
      73,    75,    76,    77,    78,    79,    80,    82,    83,    84,
      85,    86,    87,    88,    89,    94,    56,    63,    75,    51,
      53,    53,    53,    53,    55,    71,    72,     4,    60,    61,
      62,    60,     4,    37,    87,    87,    87,    83,    75,    41,
      56,    75,    56,    72,    40,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    41,    91,    92,
      91,    92,    16,    75,    81,    81,     3,     4,    83,    86,
      54,    83,    90,    83,    83,    37,    77,    56,    11,    51,
      42,    50,    40,    87,    40,    54,    56,    56,    83,    83,
      83,    83,    83,    83,    81,    56,    56,    52,    52,    52,
      50,    54,    54,    54,    87,    83,    53,     3,     4,    86,
      93,    61,    83,    83,    41,    41,    56,    83,    71,    71,
      41,    83,    52,    52,    52,    41,    10,     4,    74,    54,
      71,    40,    54,    41,    83,    71
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    62,    62,    63,    63,    64,    64,    64,    65,    66,
      67,    68,    68,    68,    69,    69,    69,    69,    70,    70,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      73,    74,    75,    75,    76,    77,    77,    78,    79,    79,
      80,    80,    80,    81,    82,    82,    83,    83,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    88,    88,    89,    89,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     4,     2,     1,     3,     3,     1,     1,
       4,     4,     4,     1,     2,     1,     1,     1,     8,     8,
       8,     4,     6,     0,     4,     4,     5,     2,     3,     3,
       4,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     2,     2,     4,     5,     2,     5,     7,
       5,     7,     8,     3,     1,     3,     1,     1,     1,     1,
       2,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       2,     2,     1,     4,     3,     4,     4,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 48 "L.y"
                       {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode; print_tree((yyval.node_info).treenode, 0);}
#line 1459 "L.tab.c"
    break;

  case 3: /* declaration: VAR decl_param_list TYPEDEF type  */
#line 50 "L.y"
                                              {
    pass_type_decl((yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = crnode_var_decl("DECL", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1468 "L.tab.c"
    break;

  case 4: /* declaration: TYPESTR decl_param_list  */
#line 54 "L.y"
                          {
    pass_type_str_decl((yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = crnode_str_decl("DECL", (yyvsp[0].node_info).treenode);
}
#line 1477 "L.tab.c"
    break;

  case 5: /* decl_param_list: decl_assgn  */
#line 59 "L.y"
                            {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1486 "L.tab.c"
    break;

  case 6: /* decl_param_list: decl_param_list ',' decl_assgn  */
#line 63 "L.y"
                                 {
    node *list_node_decl = (yyval.node_info).treenode;
    add_to_list(list_node_decl, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_decl;
}
#line 1496 "L.tab.c"
    break;

  case 7: /* decl_assgn: decl_id ASSGN expression  */
#line 69 "L.y"
                                     {
    (yyval.node_info).treenode = crnode_assgn_decl("", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1504 "L.tab.c"
    break;

  case 8: /* decl_assgn: decl_id  */
#line 72 "L.y"
          {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1510 "L.tab.c"
    break;

  case 9: /* decl_id: ID  */
#line 74 "L.y"
            {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, decl_id, null);}
#line 1516 "L.tab.c"
    break;

  case 10: /* decl_id: ID '[' ar_expression ']'  */
#line 75 "L.y"
                           {
    (yyval.node_info).treenode = crnode_id_ar_decl("", crnode_leaf((yyvsp[-3].node_info).str, decl_id_br, null), (yyvsp[-1].node_info).treenode);
}
#line 1524 "L.tab.c"
    break;

  case 11: /* decl_id: ID '[' INT ']'  */
#line 78 "L.y"
                 {
    (yyval.node_info).treenode = crnode_id_int_decl("", crnode_leaf((yyvsp[-3].node_info).str, decl_id_br, null), crnode_leaf((yyvsp[-1].node_info).str, decl_id_integer, type_int));
}
#line 1532 "L.tab.c"
    break;

  case 12: /* decl_id: ID '[' ID ']'  */
#line 81 "L.y"
                {
    (yyval.node_info).treenode = crnode_id_int_decl("", crnode_leaf((yyvsp[-3].node_info).str, decl_id_br, null), crnode_leaf((yyvsp[-1].node_info).str, decl_id_integer, null));
}
#line 1540 "L.tab.c"
    break;

  case 13: /* function_list: funcproc  */
#line 85 "L.y"
                        {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1549 "L.tab.c"
    break;

  case 14: /* function_list: function_list funcproc  */
#line 89 "L.y"
                         {
        node *list_node_funcs = (yyval.node_info).treenode;
        add_to_list(list_node_funcs, (yyvsp[0].node_info).treenode);
        (yyval.node_info).treenode = list_node_funcs;
}
#line 1559 "L.tab.c"
    break;

  case 15: /* funcproc: function  */
#line 95 "L.y"
                   {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1565 "L.tab.c"
    break;

  case 16: /* funcproc: procedure  */
#line 96 "L.y"
            {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1571 "L.tab.c"
    break;

  case 17: /* funcproc: main_function  */
#line 97 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1577 "L.tab.c"
    break;

  case 18: /* function: FUNCTION ID '(' parameter_list ')' TYPEDEF type func_body  */
#line 99 "L.y"
                                                                    {
    (yyval.node_info).treenode = crnode_function("FUNC", crnode_leaf((yyvsp[-6].node_info).str, func_id, null), (yyvsp[-4].node_info).treenode, (yyvsp[-1].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1585 "L.tab.c"
    break;

  case 19: /* procedure: FUNCTION ID '(' parameter_list ')' TYPEDEF VOID proc_body  */
#line 103 "L.y"
                                                                     {
    (yyval.node_info).treenode = crnode_procedure("PROC", crnode_leaf((yyvsp[-6].node_info).str, func_id, null), (yyvsp[-4].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1593 "L.tab.c"
    break;

  case 20: /* main_function: FUNCTION MAIN '(' parameter_list ')' TYPEDEF VOID proc_body  */
#line 107 "L.y"
                                                                           {
    (yyval.node_info).treenode = crnode_main_function("MAIN_FUNC", (yyvsp[-4].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1601 "L.tab.c"
    break;

  case 21: /* parameter_list: ARG ids TYPEDEF type  */
#line 111 "L.y"
                                     {
    //for (int i = 0; i < $2.treenode->nodes.list_node.num - 1; i++) {
      //  strcpy($2.treenode->nodes.list_node.list[i]->nodes.leaf_node.info, "param");
    //}
    pass_type_func((yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_param_list("PARAM_LIST", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode));
}
#line 1614 "L.tab.c"
    break;

  case 22: /* parameter_list: parameter_list ENDST ARG ids TYPEDEF type  */
#line 119 "L.y"
                                            {
    pass_type_func((yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
    node *list_node_args = (yyval.node_info).treenode;
    add_to_list(list_node_args, crnode_param_list("PARAM_LIST", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode));
    (yyval.node_info).treenode = list_node_args;
}
#line 1625 "L.tab.c"
    break;

  case 24: /* func_body: '{' function_list ret_statement '}'  */
#line 127 "L.y"
                                              {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1635 "L.tab.c"
    break;

  case 25: /* func_body: '{' statement_list ret_statement '}'  */
#line 132 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1645 "L.tab.c"
    break;

  case 26: /* func_body: '{' function_list statement_list ret_statement '}'  */
#line 137 "L.y"
                                                     {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-3].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1656 "L.tab.c"
    break;

  case 28: /* proc_body: '{' function_list '}'  */
#line 145 "L.y"
                                 {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1662 "L.tab.c"
    break;

  case 29: /* proc_body: '{' statement_list '}'  */
#line 146 "L.y"
                         {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1668 "L.tab.c"
    break;

  case 30: /* proc_body: '{' function_list statement_list '}'  */
#line 147 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[-2].node_info).treenode);
    add_to_list((yyval.node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1678 "L.tab.c"
    break;

  case 32: /* iter_body: statement  */
#line 154 "L.y"
                     {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1684 "L.tab.c"
    break;

  case 34: /* statement: iter_statement  */
#line 157 "L.y"
                          {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1690 "L.tab.c"
    break;

  case 35: /* statement: if_statement  */
#line 158 "L.y"
               {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1696 "L.tab.c"
    break;

  case 36: /* statement: expr_statement  */
#line 159 "L.y"
                 {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1702 "L.tab.c"
    break;

  case 37: /* statement: assgn_statement  */
#line 160 "L.y"
                  {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1708 "L.tab.c"
    break;

  case 38: /* statement: decl_statement  */
#line 161 "L.y"
                 {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1714 "L.tab.c"
    break;

  case 39: /* statement: block_statement  */
#line 162 "L.y"
                  {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1720 "L.tab.c"
    break;

  case 40: /* block_statement: '{' statement_list '}'  */
#line 165 "L.y"
                                        {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1726 "L.tab.c"
    break;

  case 41: /* update: ID ASSGN expression  */
#line 167 "L.y"
                            {
    (yyval.node_info).treenode = crnode_update("UPDATE_STMT", crnode_leaf((yyvsp[-2].node_info).str, update_id, null), (yyvsp[0].node_info).treenode);
}
#line 1734 "L.tab.c"
    break;

  case 42: /* statement_list: statement  */
#line 171 "L.y"
                          {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1743 "L.tab.c"
    break;

  case 43: /* statement_list: statement_list statement  */
#line 175 "L.y"
                           {
    node *list_node_stmts = (yyval.node_info).treenode;
    add_to_list(list_node_stmts, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_stmts;
}
#line 1753 "L.tab.c"
    break;

  case 44: /* decl_statement: declaration ENDST  */
#line 181 "L.y"
                                  {
    (yyval.node_info).treenode = crnode_decl_stmt("DECL_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1761 "L.tab.c"
    break;

  case 45: /* assgn_statement: ids ASSGN expression ENDST  */
#line 185 "L.y"
                                            {
    (yyval.node_info).treenode = crnode_assgn_stmt("ASSGN_STMT", (yyvsp[-3].node_info).treenode, (yyvsp[-1].node_info).treenode);
}
#line 1769 "L.tab.c"
    break;

  case 46: /* assgn_statement: MUL pr_expression ASSGN expression ENDST  */
#line 188 "L.y"
                                           {
    (yyval.node_info).treenode = crnode_assgn_stmt("ASSGN_STMT", crnode_deref("DEREF", (yyvsp[-3].node_info).treenode), (yyvsp[-1].node_info).treenode);
}
#line 1777 "L.tab.c"
    break;

  case 47: /* expr_statement: expression ENDST  */
#line 192 "L.y"
                                 {
    (yyval.node_info).treenode = crnode_expr_stmt("EXPR_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1785 "L.tab.c"
    break;

  case 48: /* if_statement: IF '(' expression ')' iter_body  */
#line 196 "L.y"
                                                             {
    (yyval.node_info).treenode = crnode_if_stmt("IF_STMT", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1793 "L.tab.c"
    break;

  case 49: /* if_statement: IF '(' expression ')' iter_body ELSE iter_body  */
#line 199 "L.y"
                                                 {
    (yyval.node_info).treenode = crnode_if_else_stmt("IF_ELSE_STMT", (yyvsp[-4].node_info).treenode, (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1801 "L.tab.c"
    break;

  case 50: /* iter_statement: WHILE '(' expression ')' iter_body  */
#line 203 "L.y"
                                                   {
    (yyval.node_info).treenode = crnode_while_stmt("WHILE_STMT", (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1809 "L.tab.c"
    break;

  case 51: /* iter_statement: DO iter_body WHILE '(' expression ')' ENDST  */
#line 206 "L.y"
                                              {
    (yyval.node_info).treenode = crnode_do_while_stmt("DO_WHILE_STMT", (yyvsp[-5].node_info).treenode, (yyvsp[-2].node_info).treenode);
}
#line 1817 "L.tab.c"
    break;

  case 52: /* iter_statement: FOR '(' assgn_statement expression ENDST update ')' iter_body  */
#line 209 "L.y"
                                                                {
    (yyval.node_info).treenode = crnode_for_stmt("FOR_STMT", (yyvsp[-5].node_info).treenode, (yyvsp[-4].node_info).treenode, (yyvsp[-2].node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 1825 "L.tab.c"
    break;

  case 53: /* ret_statement: RETURN expression ENDST  */
#line 213 "L.y"
                                       {
    (yyval.node_info).treenode = crnode_ret_stmt("RET_STMT", (yyvsp[-1].node_info).treenode);
}
#line 1833 "L.tab.c"
    break;

  case 54: /* ids: ID  */
#line 217 "L.y"
        {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_leaf((yyvsp[0].node_info).str, id_list, null));
}
#line 1842 "L.tab.c"
    break;

  case 55: /* ids: ids ',' ID  */
#line 221 "L.y"
             {
    node *list_node_ids = (yyval.node_info).treenode;
    add_to_list(list_node_ids, crnode_leaf((yyvsp[0].node_info).str, id_list, null));
    (yyval.node_info).treenode = list_node_ids;
}
#line 1852 "L.tab.c"
    break;

  case 56: /* expression: not_expression  */
#line 227 "L.y"
                           {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1858 "L.tab.c"
    break;

  case 57: /* expression: ar_expression  */
#line 228 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1864 "L.tab.c"
    break;

  case 58: /* expression: logic_expression  */
#line 229 "L.y"
                   {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1870 "L.tab.c"
    break;

  case 59: /* expression: pr_expression  */
#line 230 "L.y"
                {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1876 "L.tab.c"
    break;

  case 60: /* not_expression: NOT pr_expression  */
#line 233 "L.y"
                                  {
    (yyval.node_info).treenode = crnode_not_expr("NOT_EXPR", (yyvsp[0].node_info).treenode);
}
#line 1884 "L.tab.c"
    break;

  case 61: /* logic_expression: expression logic expression  */
#line 237 "L.y"
                                              { //Change needed here, was pr_expression
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_logic_expr("LOGIC_EXPR", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[-1].node_info).str, logic_op, null), (yyvsp[0].node_info).treenode));
}
#line 1893 "L.tab.c"
    break;

  case 62: /* logic_expression: logic_expression logic expression  */
#line 241 "L.y"
                                    {
    node *list_node_logic = (yyval.node_info).treenode;
    add_to_list(list_node_logic, crnode_leaf((yyvsp[-1].node_info).str, logic_op, null));
    add_to_list(list_node_logic, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_logic;
}
#line 1904 "L.tab.c"
    break;

  case 63: /* ar_expression: expression arithmetic expression  */
#line 248 "L.y"
                                                { //AND here too
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, crnode_ar_expr("AR_EXPR", (yyvsp[-2].node_info).treenode, crnode_leaf((yyvsp[-1].node_info).str, ar_op, null), (yyvsp[0].node_info).treenode));
}
#line 1913 "L.tab.c"
    break;

  case 64: /* ar_expression: ar_expression arithmetic expression  */
#line 252 "L.y"
                                      {
    node *list_node_ar = (yyval.node_info).treenode;
    add_to_list(list_node_ar, crnode_leaf((yyvsp[-1].node_info).str, ar_op, null));
    add_to_list(list_node_ar, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_ar;
}
#line 1924 "L.tab.c"
    break;

  case 65: /* pr_expression: '(' expression ')'  */
#line 259 "L.y"
                                  {(yyval.node_info).treenode = (yyvsp[-1].node_info).treenode;}
#line 1930 "L.tab.c"
    break;

  case 66: /* pr_expression: ID  */
#line 260 "L.y"
     {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, id_plain, null);}
#line 1936 "L.tab.c"
    break;

  case 67: /* pr_expression: str_id  */
#line 261 "L.y"
         {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1942 "L.tab.c"
    break;

  case 68: /* pr_expression: literal  */
#line 262 "L.y"
          {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1948 "L.tab.c"
    break;

  case 69: /* pr_expression: func_call  */
#line 263 "L.y"
            {(yyval.node_info).treenode = (yyvsp[0].node_info).treenode;}
#line 1954 "L.tab.c"
    break;

  case 70: /* pr_expression: ADDRESS pr_expression  */
#line 264 "L.y"
                        {(yyval.node_info).treenode = crnode_address("ADDRESS", (yyvsp[0].node_info).treenode);}
#line 1960 "L.tab.c"
    break;

  case 71: /* pr_expression: MUL pr_expression  */
#line 265 "L.y"
                    {(yyval.node_info).treenode = crnode_deref("DEREF", (yyvsp[0].node_info).treenode);}
#line 1966 "L.tab.c"
    break;

  case 72: /* pr_expression: STRLEN  */
#line 266 "L.y"
         {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, strlength, type_int);}
#line 1972 "L.tab.c"
    break;

  case 73: /* func_call: ID '(' arglist ')'  */
#line 268 "L.y"
                              {
    (yyval.node_info).treenode = crnode_func_call_args("FUNC_CALL", crnode_leaf((yyvsp[-3].node_info).str, func_call_id, null), (yyvsp[-1].node_info).treenode);
}
#line 1980 "L.tab.c"
    break;

  case 74: /* func_call: ID '(' ')'  */
#line 271 "L.y"
             {
    (yyval.node_info).treenode = crnode_func_call("FUNC_CALL", crnode_leaf((yyvsp[-2].node_info).str, func_call_id, null));
}
#line 1988 "L.tab.c"
    break;

  case 75: /* str_id: ID '[' ar_expression ']'  */
#line 275 "L.y"
                                 {
    (yyval.node_info).treenode = crnode_id_ar_str("", crnode_leaf((yyvsp[-3].node_info).str, str_id_br, null), (yyvsp[-1].node_info).treenode);
}
#line 1996 "L.tab.c"
    break;

  case 76: /* str_id: ID '[' INT ']'  */
#line 278 "L.y"
                 {
    (yyval.node_info).treenode = crnode_id_int_str("", crnode_leaf((yyvsp[-3].node_info).str, str_id_br, null), crnode_leaf((yyvsp[-1].node_info).str, str_id_integer, type_int));
}
#line 2004 "L.tab.c"
    break;

  case 77: /* str_id: ID '[' ID ']'  */
#line 281 "L.y"
                {
    (yyval.node_info).treenode = crnode_id_int_str("", crnode_leaf((yyvsp[-3].node_info).str, str_id_br, null), crnode_leaf((yyvsp[-1].node_info).str, str_id_integer, null));
}
#line 2012 "L.tab.c"
    break;

  case 78: /* arglist: expression  */
#line 285 "L.y"
                    {
    (yyval.node_info).treenode = crnode_list();
    add_to_list((yyval.node_info).treenode, (yyvsp[0].node_info).treenode);
}
#line 2021 "L.tab.c"
    break;

  case 79: /* arglist: arglist ',' expression  */
#line 289 "L.y"
                         {
    node *list_node_args = (yyval.node_info).treenode;
    add_to_list(list_node_args, (yyvsp[0].node_info).treenode);
    (yyval.node_info).treenode = list_node_args;
}
#line 2031 "L.tab.c"
    break;

  case 92: /* type: TYPEBOOL  */
#line 300 "L.y"
               {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_bool);}
#line 2037 "L.tab.c"
    break;

  case 93: /* type: TYPECHAR  */
#line 301 "L.y"
           {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_char);}
#line 2043 "L.tab.c"
    break;

  case 94: /* type: TYPEINT  */
#line 302 "L.y"
          {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_int);}
#line 2049 "L.tab.c"
    break;

  case 95: /* type: TYPEREAL  */
#line 303 "L.y"
           {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_real);}
#line 2055 "L.tab.c"
    break;

  case 96: /* type: TYPECHARPOINTER  */
#line 304 "L.y"
                  {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_char_point);}
#line 2061 "L.tab.c"
    break;

  case 97: /* type: TYPEINTPOINTER  */
#line 305 "L.y"
                 {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_int_point);}
#line 2067 "L.tab.c"
    break;

  case 98: /* type: TYPEREALPOINTER  */
#line 306 "L.y"
                  {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_real_point);}
#line 2073 "L.tab.c"
    break;

  case 99: /* type: TYPESTR  */
#line 307 "L.y"
          {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, param_type, type_string);}
#line 2079 "L.tab.c"
    break;

  case 100: /* literal: INT  */
#line 309 "L.y"
             {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal, type_int);}
#line 2085 "L.tab.c"
    break;

  case 101: /* literal: REAL  */
#line 310 "L.y"
       {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal, type_real);}
#line 2091 "L.tab.c"
    break;

  case 102: /* literal: CHAR  */
#line 311 "L.y"
       {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal, type_char);}
#line 2097 "L.tab.c"
    break;

  case 103: /* literal: BOOL  */
#line 312 "L.y"
       {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal, type_bool);}
#line 2103 "L.tab.c"
    break;

  case 104: /* literal: STR  */
#line 313 "L.y"
      {(yyval.node_info).treenode = crnode_leaf((yyvsp[0].node_info).str, literal, type_string);}
#line 2109 "L.tab.c"
    break;


#line 2113 "L.tab.c"

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

#line 315 "L.y"


int main() {
    int result = yyparse();
}

int yyerror(char *s) {
    fprintf(stderr, "-------\nError: %s\nToken: %d (Check the corresponding token in L.tab.h file)\nLine: %d\n-------\n", s, yychar, yylineno);
}
