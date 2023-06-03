/* A Bison parser, made by GNU Bison 3.8.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_L_TAB_H_INCLUDED
# define YY_YY_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    INT = 258,                     /* INT  */
    ID = 259,                      /* ID  */
    REAL = 260,                    /* REAL  */
    BOOL = 261,                    /* BOOL  */
    STR = 262,                     /* STR  */
    CHAR = 263,                    /* CHAR  */
    IF = 264,                      /* IF  */
    ELSE = 265,                    /* ELSE  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    DO = 268,                      /* DO  */
    VAR = 269,                     /* VAR  */
    FUNCTION = 270,                /* FUNCTION  */
    RETURN = 271,                  /* RETURN  */
    NUL = 272,                     /* NUL  */
    VOID = 273,                    /* VOID  */
    TYPEBOOL = 274,                /* TYPEBOOL  */
    TYPECHAR = 275,                /* TYPECHAR  */
    TYPEINT = 276,                 /* TYPEINT  */
    TYPEREAL = 277,                /* TYPEREAL  */
    TYPECHARPOINTER = 278,         /* TYPECHARPOINTER  */
    TYPEINTPOINTER = 279,          /* TYPEINTPOINTER  */
    TYPEREALPOINTER = 280,         /* TYPEREALPOINTER  */
    TYPESTR = 281,                 /* TYPESTR  */
    LOGICEQ = 282,                 /* LOGICEQ  */
    LOGICNOTEQ = 283,              /* LOGICNOTEQ  */
    LOGICMORE = 284,               /* LOGICMORE  */
    LOGICLESS = 285,               /* LOGICLESS  */
    LOGICMOREEQ = 286,             /* LOGICMOREEQ  */
    LOGICLESSEQ = 287,             /* LOGICLESSEQ  */
    LOGICAND = 288,                /* LOGICAND  */
    LOGICOR = 289,                 /* LOGICOR  */
    PLUS = 290,                    /* PLUS  */
    MINUS = 291,                   /* MINUS  */
    MUL = 292,                     /* MUL  */
    DIV = 293,                     /* DIV  */
    ARG = 294,                     /* ARG  */
    ASSGN = 295,                   /* ASSGN  */
    ENDST = 296,                   /* ENDST  */
    TYPEDEF = 297,                 /* TYPEDEF  */
    NOT = 298,                     /* NOT  */
    ADDRESS = 299,                 /* ADDRESS  */
    COMMOPEN = 300,                /* COMMOPEN  */
    COMMCLOSE = 301,               /* COMMCLOSE  */
    MAIN = 302,                    /* MAIN  */
    STRLEN = 303                   /* STRLEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "L.y"

    struct node_info {
       enum data_type;
       char str [sizeof(char) * 50];
       struct node *treenode;
    }node_info;

#line 120 "L.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_L_TAB_H_INCLUDED  */
