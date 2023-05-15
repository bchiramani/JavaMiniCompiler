
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MC_IF = 258,
     MC_ELSE = 259,
     MC_WHILE = 260,
     MC_CLASS = 261,
     MC_EXTENDS = 262,
     MC_RETURN = 263,
     MC_NEW = 264,
     MC_THIS = 265,
     MC_PRINT = 266,
     MC_LENGTH = 267,
     MC_PUBLIC = 268,
     MC_VOID = 269,
     MC_MAIN_CLASS = 270,
     INTEGER_LITERAL = 271,
     id = 272,
     Type = 273,
     String_Tab = 274,
     Operation = 275,
     Parenthese_Ouvrante = 276,
     Parenthese_Fermante = 277,
     ACCOLADE_Ouvrante = 278,
     ACCOLADE_Fermante = 279,
     Crochet_Ouvrante = 280,
     Crochet_Fermante = 281,
     BOOLEAN_LITERAL = 282,
     POINT_VIRGULE = 283,
     Op_Aff = 284,
     POINT = 285,
     VIRGULE = 286
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 36 "syntax_analysis.y"

  int ival;
  char* sval;



/* Line 1676 of yacc.c  */
#line 90 "syntax_analysis.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


