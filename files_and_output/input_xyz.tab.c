/* A Bison parser, made by GNU Bison 3.7.5.  */

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
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 6 "input_xyz.y"

#include <stdarg.h>
#include <stdbool.h> // not good idea for old compilers
#include <stdio.h>
#include <stdint.h>  // not good idea for old compilers
#include <stdlib.h>

/* tabela de simbolos */
#include "types.h"

/* 
  To debug, uncomment and run 
  bison --verbose --debug -d input_xyz.y
*/
int yydebug = 1;

char current_function[50] = "";

struct symtab symbols[MAXSYMS];
int nsyms = 0;


#line 94 "input_xyz.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_F64 = 258,                   /* T_F64  */
    T_I64 = 259,                   /* T_I64  */
    T_BOOL = 260,                  /* T_BOOL  */
    T_CHAR = 261,                  /* T_CHAR  */
    T_STR = 262,                   /* T_STR  */
    T_VAR = 263,                   /* T_VAR  */
    LE = 264,                      /* LE  */
    GE = 265,                      /* GE  */
    LT = 266,                      /* LT  */
    GT = 267,                      /* GT  */
    NE = 268,                      /* NE  */
    EQ = 269,                      /* EQ  */
    AND = 270,                     /* AND  */
    OR = 271,                      /* OR  */
    IF = 272,                      /* IF  */
    ELSE = 273,                    /* ELSE  */
    WHILE = 274,                   /* WHILE  */
    FUNCTION = 275,                /* FUNCTION  */
    RETURN = 276,                  /* RETURN  */
    T_ID = 277,                    /* T_ID  */
    T_INC = 278,                   /* T_INC  */
    T_DEC = 279,                   /* T_DEC  */
    T_INT = 280,                   /* T_INT  */
    T_REAL = 281,                  /* T_REAL  */
    T_TRUE = 282,                  /* T_TRUE  */
    T_FALSE = 283,                 /* T_FALSE  */
    T_STRING = 284,                /* T_STRING  */
    T_CHARACTER = 285              /* T_CHARACTER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "input_xyz.y"

        union value_union val;
        enum type_enum    typ;
        char              ch;
        char              *str;
        int               b;

#line 179 "input_xyz.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_F64 = 3,                      /* T_F64  */
  YYSYMBOL_T_I64 = 4,                      /* T_I64  */
  YYSYMBOL_T_BOOL = 5,                     /* T_BOOL  */
  YYSYMBOL_T_CHAR = 6,                     /* T_CHAR  */
  YYSYMBOL_T_STR = 7,                      /* T_STR  */
  YYSYMBOL_T_VAR = 8,                      /* T_VAR  */
  YYSYMBOL_LE = 9,                         /* LE  */
  YYSYMBOL_GE = 10,                        /* GE  */
  YYSYMBOL_LT = 11,                        /* LT  */
  YYSYMBOL_GT = 12,                        /* GT  */
  YYSYMBOL_NE = 13,                        /* NE  */
  YYSYMBOL_EQ = 14,                        /* EQ  */
  YYSYMBOL_AND = 15,                       /* AND  */
  YYSYMBOL_OR = 16,                        /* OR  */
  YYSYMBOL_IF = 17,                        /* IF  */
  YYSYMBOL_ELSE = 18,                      /* ELSE  */
  YYSYMBOL_WHILE = 19,                     /* WHILE  */
  YYSYMBOL_FUNCTION = 20,                  /* FUNCTION  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_T_ID = 22,                      /* T_ID  */
  YYSYMBOL_T_INC = 23,                     /* T_INC  */
  YYSYMBOL_T_DEC = 24,                     /* T_DEC  */
  YYSYMBOL_T_INT = 25,                     /* T_INT  */
  YYSYMBOL_T_REAL = 26,                    /* T_REAL  */
  YYSYMBOL_T_TRUE = 27,                    /* T_TRUE  */
  YYSYMBOL_T_FALSE = 28,                   /* T_FALSE  */
  YYSYMBOL_T_STRING = 29,                  /* T_STRING  */
  YYSYMBOL_T_CHARACTER = 30,               /* T_CHARACTER  */
  YYSYMBOL_31_ = 31,                       /* '+'  */
  YYSYMBOL_32_ = 32,                       /* '-'  */
  YYSYMBOL_33_ = 33,                       /* '*'  */
  YYSYMBOL_34_ = 34,                       /* '/'  */
  YYSYMBOL_35_ = 35,                       /* '='  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* ':'  */
  YYSYMBOL_39_ = 39,                       /* '('  */
  YYSYMBOL_40_ = 40,                       /* ')'  */
  YYSYMBOL_41_ = 41,                       /* '{'  */
  YYSYMBOL_42_ = 42,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_block = 45,                     /* block  */
  YYSYMBOL_decl_list = 46,                 /* decl_list  */
  YYSYMBOL_decl = 47,                      /* decl  */
  YYSYMBOL_assignment = 48,                /* assignment  */
  YYSYMBOL_espec_f_assign = 49,            /* espec_f_assign  */
  YYSYMBOL_expr_i = 50,                    /* expr_i  */
  YYSYMBOL_expr_f = 51,                    /* expr_f  */
  YYSYMBOL_inc_dec = 52,                   /* inc_dec  */
  YYSYMBOL_function = 53,                  /* function  */
  YYSYMBOL_54_1 = 54,                      /* $@1  */
  YYSYMBOL_f_assign = 55,                  /* f_assign  */
  YYSYMBOL_desvio_de_fluxo = 56,           /* desvio_de_fluxo  */
  YYSYMBOL_loop = 57,                      /* loop  */
  YYSYMBOL_bool_value = 58,                /* bool_value  */
  YYSYMBOL_type = 59,                      /* type  */
  YYSYMBOL_value = 60                      /* value  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  18
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  121

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      39,    40,    33,    31,    37,    32,     2,    34,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    36,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    41,     2,    42,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    78,    79,    80,    81,    82,    83,    84,
      89,    90,    93,    98,    99,   100,   103,   104,   109,   110,
     111,   112,   113,   114,   115,   118,   119,   120,   121,   122,
     123,   129,   130,   134,   134,   137,   138,   139,   144,   145,
     149,   155,   156,   157,   158,   159,   160,   164,   165,   166,
     167,   168,   172,   173,   174,   175,   176,   177
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
  "\"end of file\"", "error", "\"invalid token\"", "T_F64", "T_I64",
  "T_BOOL", "T_CHAR", "T_STR", "T_VAR", "LE", "GE", "LT", "GT", "NE", "EQ",
  "AND", "OR", "IF", "ELSE", "WHILE", "FUNCTION", "RETURN", "T_ID",
  "T_INC", "T_DEC", "T_INT", "T_REAL", "T_TRUE", "T_FALSE", "T_STRING",
  "T_CHARACTER", "'+'", "'-'", "'*'", "'/'", "'='", "';'", "','", "':'",
  "'('", "')'", "'{'", "'}'", "$accept", "program", "block", "decl_list",
  "decl", "assignment", "espec_f_assign", "expr_i", "expr_f", "inc_dec",
  "function", "$@1", "f_assign", "desvio_de_fluxo", "loop", "bool_value",
  "type", "value", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    43,    45,    42,    47,    61,    59,    44,    58,    40,
      41,   123,   125
};
#endif

#define YYPACT_NINF (-39)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -9,     6,    15,   -39,   -39,   -39,     3,     8,    99,    21,
     -39,   -39,   -39,   -39,   -39,    25,     2,     8,    -1,   -39,
      41,    42,    42,     9,   -11,    23,    -1,    -1,    -1,    -1,
      46,    -1,   -27,    58,    38,    45,   -39,   -39,     9,    49,
      51,    53,    -3,   -39,   -39,   -39,   -39,   -39,    99,   -39,
     -39,    41,     9,     9,     9,     9,     9,     9,    -1,    -1,
      -7,     9,     9,     9,     9,   -39,   -39,   -39,    72,   -39,
      34,    59,    65,    73,   -39,    17,    17,    17,    17,    17,
      17,    67,    68,    -7,    -7,   -39,   -39,    61,    24,   -39,
     -18,   -18,   -18,   -18,   -39,    48,    89,   -39,    90,   -18,
      24,    24,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,    70,    76,    74,    -1,    90,    79,    75,   -39,   -39,
     -39
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,    33,     1,     0,    37,     0,     0,
      47,    48,    49,    50,    51,    35,     0,    37,     9,    36,
       0,     0,     0,     0,     0,     0,     9,     9,     9,     9,
       0,     9,     0,     0,     0,     0,    24,    23,     0,     0,
       0,     0,     0,    34,     4,     5,     6,     7,     0,     3,
      10,     0,     0,     0,     0,     0,     0,     0,     9,     9,
      22,     0,     0,     0,     0,     8,    31,    32,     0,    30,
       0,     0,     0,     0,    11,    41,    43,    42,    44,    46,
      45,     0,     0,    18,    19,    20,    21,     0,    29,    13,
       0,     0,     0,     0,    14,     0,    38,    40,     0,     0,
      25,    26,    27,    28,    54,    55,    53,    52,    56,    57,
      12,     0,    16,     0,     9,     0,     0,     0,    17,    15,
      39
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -26,    69,   -39,   -39,     1,   -17,   -38,   -39,
     -39,   -39,   101,   -39,   -39,    97,    77,   -39
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    25,    31,    32,    26,   113,    60,    88,    27,
       3,     6,     9,    28,    29,    34,    15,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      44,    45,    46,    47,    72,    49,    39,    20,    69,    50,
      51,     1,    40,    41,    99,     5,    21,    68,    22,    36,
      23,    24,    37,    69,    42,    71,    63,    64,     4,    70,
       8,    36,    81,    82,    37,    75,    76,    77,    78,    79,
      80,    38,     7,    18,    83,    84,    85,    86,    61,    62,
      63,    64,   100,   101,   102,   103,    36,    92,    93,    37,
      69,    16,    17,    30,    33,    43,    70,    52,    53,    54,
      55,    56,    57,   104,   105,   106,   107,   108,   109,    58,
      61,    62,    63,    64,    48,    65,    59,    66,   117,    67,
      61,    62,    63,    64,    87,    89,    90,    91,    92,    93,
      98,    94,    10,    11,    12,    13,    14,   111,    95,    96,
      97,   114,   112,   115,   116,   119,   118,   120,    19,    35,
      74,     0,     0,     0,     0,    73
};

static const yytype_int8 yycheck[] =
{
      26,    27,    28,    29,    42,    31,    23,     8,    26,    36,
      37,    20,    23,    24,    32,     0,    17,    20,    19,    22,
      21,    22,    25,    26,    35,    42,    33,    34,    22,    32,
      22,    22,    58,    59,    25,    52,    53,    54,    55,    56,
      57,    32,    39,    41,    61,    62,    63,    64,    31,    32,
      33,    34,    90,    91,    92,    93,    22,    33,    34,    25,
      26,    40,    37,    22,    22,    42,    32,     9,    10,    11,
      12,    13,    14,    25,    26,    27,    28,    29,    30,    41,
      31,    32,    33,    34,    38,    36,    41,    36,   114,    36,
      31,    32,    33,    34,    22,    36,    31,    32,    33,    34,
      39,    36,     3,     4,     5,     6,     7,    18,    35,    42,
      42,    41,    22,    37,    40,    36,   115,    42,    17,    22,
      51,    -1,    -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    44,    53,    22,     0,    54,    39,    22,    55,
       3,     4,     5,     6,     7,    59,    40,    37,    41,    55,
       8,    17,    19,    21,    22,    45,    48,    52,    56,    57,
      22,    46,    47,    22,    58,    58,    22,    25,    32,    50,
      23,    24,    35,    42,    45,    45,    45,    45,    38,    45,
      36,    37,     9,    10,    11,    12,    13,    14,    41,    41,
      50,    31,    32,    33,    34,    36,    36,    36,    20,    26,
      32,    50,    51,    59,    46,    50,    50,    50,    50,    50,
      50,    45,    45,    50,    50,    50,    50,    22,    51,    36,
      31,    32,    33,    34,    36,    35,    42,    42,    39,    32,
      51,    51,    51,    51,    25,    26,    27,    28,    29,    30,
      60,    18,    22,    49,    41,    37,    40,    45,    49,    36,
      42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    45,    45,    45,    45,    45,
      46,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    51,    51,    51,    51,    51,
      51,    52,    52,    54,    53,    55,    55,    55,    56,    56,
      57,    58,    58,    58,    58,    58,    58,    59,    59,    59,
      59,    59,    60,    60,    60,    60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     2,     2,     3,     0,
       2,     3,     5,     4,     4,     8,     1,     3,     3,     3,
       3,     3,     2,     1,     1,     3,     3,     3,     3,     2,
       1,     3,     3,     0,     9,     2,     4,     0,     5,     9,
       5,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 12: /* decl: T_ID ':' type '=' value  */
#line 93 "input_xyz.y"
                                                  { declare((yyvsp[-4].str), current_function, (yyvsp[-2].typ)); }
#line 1300 "input_xyz.tab.c"
    break;

  case 18: /* expr_i: expr_i '+' expr_i  */
#line 109 "input_xyz.y"
                                    { (yyval.val).i64 = (yyvsp[-2].val).i64 + (yyvsp[0].val).i64;          }
#line 1306 "input_xyz.tab.c"
    break;

  case 19: /* expr_i: expr_i '-' expr_i  */
#line 110 "input_xyz.y"
                                    { (yyval.val).i64 = (yyvsp[-2].val).i64 - (yyvsp[0].val).i64;          }
#line 1312 "input_xyz.tab.c"
    break;

  case 20: /* expr_i: expr_i '*' expr_i  */
#line 111 "input_xyz.y"
                                    { (yyval.val).i64 = (yyvsp[-2].val).i64 * (yyvsp[0].val).i64;          }
#line 1318 "input_xyz.tab.c"
    break;

  case 21: /* expr_i: expr_i '/' expr_i  */
#line 112 "input_xyz.y"
                                    { (yyval.val).i64 = (yyvsp[-2].val).i64 / (yyvsp[0].val).i64;          }
#line 1324 "input_xyz.tab.c"
    break;

  case 22: /* expr_i: '-' expr_i  */
#line 113 "input_xyz.y"
                                    { (yyval.val).i64 =        - (yyvsp[0].val).i64;          }
#line 1330 "input_xyz.tab.c"
    break;

  case 23: /* expr_i: T_INT  */
#line 114 "input_xyz.y"
                                    { (yyval.val).i64 = (yyvsp[0].val.i64);                       }
#line 1336 "input_xyz.tab.c"
    break;

  case 24: /* expr_i: T_ID  */
#line 115 "input_xyz.y"
                                    { (yyval.val).i64 = return_from_variable((yyvsp[0].str)); }
#line 1342 "input_xyz.tab.c"
    break;

  case 25: /* expr_f: expr_f '+' expr_f  */
#line 118 "input_xyz.y"
                                    { (yyval.val).f64 = (yyvsp[-2].val).f64 + (yyvsp[0].val).f64;          }
#line 1348 "input_xyz.tab.c"
    break;

  case 26: /* expr_f: expr_f '-' expr_f  */
#line 119 "input_xyz.y"
                                    { (yyval.val).f64 = (yyvsp[-2].val).f64 - (yyvsp[0].val).f64;          }
#line 1354 "input_xyz.tab.c"
    break;

  case 27: /* expr_f: expr_f '*' expr_f  */
#line 120 "input_xyz.y"
                                    { (yyval.val).f64 = (yyvsp[-2].val).f64 * (yyvsp[0].val).f64;          }
#line 1360 "input_xyz.tab.c"
    break;

  case 28: /* expr_f: expr_f '/' expr_f  */
#line 121 "input_xyz.y"
                                    { (yyval.val).f64 = (yyvsp[-2].val).f64 / (yyvsp[0].val).f64;          }
#line 1366 "input_xyz.tab.c"
    break;

  case 29: /* expr_f: '-' expr_f  */
#line 122 "input_xyz.y"
                                    { (yyval.val).f64 =        - (yyvsp[0].val).f64;          }
#line 1372 "input_xyz.tab.c"
    break;

  case 30: /* expr_f: T_REAL  */
#line 123 "input_xyz.y"
                                    { (yyval.val).f64 = (yyvsp[0].val.f64);                       }
#line 1378 "input_xyz.tab.c"
    break;

  case 31: /* inc_dec: T_ID T_INC ';'  */
#line 129 "input_xyz.y"
                                    { inc_dec((yyvsp[-2].str), "++"); }
#line 1384 "input_xyz.tab.c"
    break;

  case 32: /* inc_dec: T_ID T_DEC ';'  */
#line 130 "input_xyz.y"
                                    { inc_dec((yyvsp[-2].str), "--"); }
#line 1390 "input_xyz.tab.c"
    break;

  case 33: /* $@1: %empty  */
#line 134 "input_xyz.y"
                                 {current_function_modifier((yyvsp[0].str));}
#line 1396 "input_xyz.tab.c"
    break;

  case 35: /* f_assign: T_ID type  */
#line 137 "input_xyz.y"
                                         { declare((yyvsp[-1].str), current_function, (yyvsp[0].typ)); }
#line 1402 "input_xyz.tab.c"
    break;

  case 36: /* f_assign: T_ID type ',' f_assign  */
#line 138 "input_xyz.y"
                                         { declare((yyvsp[-3].str), current_function, (yyvsp[-2].typ)); }
#line 1408 "input_xyz.tab.c"
    break;

  case 38: /* desvio_de_fluxo: IF bool_value '{' block '}'  */
#line 144 "input_xyz.y"
                                                                 {if((yyvsp[-3].b)){}}
#line 1414 "input_xyz.tab.c"
    break;

  case 39: /* desvio_de_fluxo: IF bool_value '{' block '}' ELSE '{' block '}'  */
#line 145 "input_xyz.y"
                                                                 {if((yyvsp[-7].b)){}else{}}
#line 1420 "input_xyz.tab.c"
    break;

  case 40: /* loop: WHILE bool_value '{' block '}'  */
#line 149 "input_xyz.y"
                                                 {while((yyvsp[-3].b)){}}
#line 1426 "input_xyz.tab.c"
    break;

  case 41: /* bool_value: T_ID LE expr_i  */
#line 155 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) <= (yyvsp[0].val).i64) ? 1 : 0; }
#line 1432 "input_xyz.tab.c"
    break;

  case 42: /* bool_value: T_ID LT expr_i  */
#line 156 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) <  (yyvsp[0].val).i64) ? 1 : 0; }
#line 1438 "input_xyz.tab.c"
    break;

  case 43: /* bool_value: T_ID GE expr_i  */
#line 157 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) >= (yyvsp[0].val).i64) ? 1 : 0; }
#line 1444 "input_xyz.tab.c"
    break;

  case 44: /* bool_value: T_ID GT expr_i  */
#line 158 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) >  (yyvsp[0].val).i64) ? 1 : 0; }
#line 1450 "input_xyz.tab.c"
    break;

  case 45: /* bool_value: T_ID EQ expr_i  */
#line 159 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) == (yyvsp[0].val).i64) ? 1 : 0; }
#line 1456 "input_xyz.tab.c"
    break;

  case 46: /* bool_value: T_ID NE expr_i  */
#line 160 "input_xyz.y"
                              { (yyval.b) = (return_from_variable((yyvsp[-2].str)) != (yyvsp[0].val).i64) ? 1 : 0; }
#line 1462 "input_xyz.tab.c"
    break;

  case 47: /* type: T_F64  */
#line 164 "input_xyz.y"
                    { (yyval.typ) = F64; }
#line 1468 "input_xyz.tab.c"
    break;

  case 48: /* type: T_I64  */
#line 165 "input_xyz.y"
                    { (yyval.typ) = I64; }
#line 1474 "input_xyz.tab.c"
    break;

  case 49: /* type: T_BOOL  */
#line 166 "input_xyz.y"
                    { (yyval.typ) = BOOL; }
#line 1480 "input_xyz.tab.c"
    break;

  case 50: /* type: T_CHAR  */
#line 167 "input_xyz.y"
                    { (yyval.typ) = CHAR; }
#line 1486 "input_xyz.tab.c"
    break;

  case 51: /* type: T_STR  */
#line 168 "input_xyz.y"
                    { (yyval.typ) = STR; }
#line 1492 "input_xyz.tab.c"
    break;

  case 52: /* value: T_FALSE  */
#line 172 "input_xyz.y"
                         { (yyval.val).b   = (yyvsp[0].val.b); }
#line 1498 "input_xyz.tab.c"
    break;

  case 53: /* value: T_TRUE  */
#line 173 "input_xyz.y"
                         { (yyval.val).b   = (yyvsp[0].val.b); }
#line 1504 "input_xyz.tab.c"
    break;

  case 54: /* value: T_INT  */
#line 174 "input_xyz.y"
                         { (yyval.val).i64 = (yyvsp[0].val.i64); }
#line 1510 "input_xyz.tab.c"
    break;

  case 55: /* value: T_REAL  */
#line 175 "input_xyz.y"
                         { (yyval.val).f64 = (yyvsp[0].val.f64); }
#line 1516 "input_xyz.tab.c"
    break;

  case 56: /* value: T_STRING  */
#line 176 "input_xyz.y"
                         { (yyval.val).str = (yyvsp[0].val.str); }
#line 1522 "input_xyz.tab.c"
    break;

  case 57: /* value: T_CHARACTER  */
#line 177 "input_xyz.y"
                         { (yyval.val).ch  = (yyvsp[0].val.ch); }
#line 1528 "input_xyz.tab.c"
    break;


#line 1532 "input_xyz.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 179 "input_xyz.y"

#include "output_xyz.yy.c"

int yyerror(const char *msg, ...) {
	va_list args;

	va_start(args, msg);
	vfprintf(stderr, msg, args);
	va_end(args);

	return 0;
}

// Lookup function to create symbol table
static struct symtab *lookup(char *id) {
        int i;
        struct symtab *p;

        for (i = 0; i < nsyms; i++) {
                p = &symbols[i];
                if (strncmp(p->id, id, MAXTOKEN) == 0)
                        return p;
        }

        return NULL;
}

// install function to symtab
static void install(char *id, char *function, enum type_enum typ) {
        struct symtab *p;

        p = &symbols[nsyms++];
        strncpy(p->id, id, MAXTOKEN);
        strncpy(p->function, function, MAXTOKEN);
        p->typ = typ;
}

// declaration function
void declare(char *id, char *function, enum type_enum typ) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                install(id, function, typ);
				} else {
				    if (p->typ != typ) {
				        fprintf(stderr, "Type error: variable '%s' declared as %d, assigned as %d\n", id, p->typ, typ);
				        exit(EXIT_FAILURE);
				    }
            strncpy(p->function, function, MAXTOKEN);
				}
}

// assign function
void assign(char *id, union value_union val) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                printf("Variable %s not created yet!", id);
                exit(EXIT_FAILURE);
				} else {
				    if (p->typ == I64 || p->typ == F64) {
				        p->val = val;
				    }else{
				        fprintf(stderr, "Type error: variable '%s' declared wrong!", id);
				        exit(EXIT_FAILURE);
				    }
				}
}

// transforma tipo para uma string na tabela de simbolos
const char* type_to_string(enum type_enum typ) {
    switch (typ) {
        case F64:  return "F64";
        case I64:  return "I64";
        case BOOL: return "BOOL";
        case CHAR: return "CHAR";
        case STR:  return "STR";
        default:   return "UNKNOWN";
    }
}

// incrementa ou decrementa
void inc_dec(char *id, char *signal) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                printf("Variable %s not created yet!", id);
                exit(EXIT_FAILURE);
				} else {
				    if (p->typ != I64) {
				        fprintf(stderr, "Somente funciona com inteiros, colega");
				        exit(EXIT_FAILURE);
				    }
				    if(strcmp(signal, "++") == 0){
				      p->val.i64 = p->val.i64 + 1;
				    } else if(strcmp(signal, "--") == 0) {
				      p->val.i64 = p->val.i64 - 1;
				    }
				}
}

// retorna valor de variavel
int return_from_variable(char *id) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                printf("Variable %s not created yet!", id);
                exit(EXIT_FAILURE);
				} else {
				      return p->val.i64;
				}
}

// current function
void current_function_modifier(char* name)
{
  strncpy(current_function, name, MAXTOKEN);
}


int main (int argc, char **argv) {
        FILE *fp;
        int i;
        struct symtab *p;

        if (argc <= 0) { 
                fprintf(stderr, "usage: %s file\n", argv[0]);
		return 1;
	}

        fp = fopen(argv[1], "r");
        if (!fp) {
                perror(argv[1]);
		return errno;
	}

        yyin = fp;
        do {
                yyparse();
        } while(!feof(yyin));


        for (i = 0; i < nsyms; i++) {
                p = &symbols[i];
                printf("%s | %s | %s \n", p->id, type_to_string(p->typ), p->function);
        }

        return 0;
}
