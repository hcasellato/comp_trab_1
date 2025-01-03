/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_OUTPUT_XYZ_TAB_H_INCLUDED
# define YY_YY_OUTPUT_XYZ_TAB_H_INCLUDED
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
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_F64 258
#define T_I64 259
#define T_BOOL 260
#define T_CHAR 261
#define T_STR 262
#define T_VAR 263
#define LE 264
#define GE 265
#define LT 266
#define GT 267
#define NE 268
#define EQ 269
#define AND 270
#define OR 271
#define IF 272
#define ELSE 273
#define WHILE 274
#define FUNCTION 275
#define RETURN 276
#define T_ID 277
#define T_INC 278
#define T_DEC 279
#define T_INT 280
#define T_REAL 281
#define T_TRUE 282
#define T_FALSE 283
#define T_STRING 284
#define T_CHARACTER 285

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

#line 135 "output_xyz.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_OUTPUT_XYZ_TAB_H_INCLUDED  */
