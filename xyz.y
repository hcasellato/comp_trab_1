%{
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/* tabela de simbolos */
#include "symtab.h"

/* flex */
extern int yylineno;

extern int yyerror (char const *msg, ...);
extern int yylex();

%}

%union {
        union value_union val;      
        char            c;
        char            *s;
}

/* bison: declarações */

%token T_VAR;

%token T_I64;
%token T_F64;
%token <val.i64> T_INT;
%token <val.f64> T_REAL;

%token T_BOOL;
%token <val.b> T_TRUE T_FALSE;

%token <str> T_ID;
%type <val> value;

%start program

/* Gramatica */
%%
/*Declare types*/
program         : block { return 0; };

block           : T_VAR decl_list | ;

type            : T_F64 | T_I64 | T_BOOL;

decl_list       : decl | decl_list decl;

decl            : id_list ':' type '=' val_list ';';

val_list        : value | val_list ',' value;

id_list         : T_ID | id_list ',' T_ID;

value           : T_FALSE { $$.b   = $1; }
                | T_TRUE  { $$.b   = $1; }
                | T_INT   { $$.i64 = $1; }
                | T_REAL  { $$.f64 = $1; }
                ;
%%
#include "xyz.yy.c"

int yyerror(const char *msg, ...) {
	va_list args;

	va_start(args, msg);
	vfprintf(stderr, msg, args);
	va_end(args);

	return 0;
}

int main(int argc, char **argv) {
        FILE *fp;
        
        if (argc <= 0) {
                fprintf(stderr, "usage: %s file\n", argv[0]);
		return 1;
	}

        fp = fopen(argv[1], "r");
        if (!fp) {
                perror(argv[1]);
		return 1;
	}

        yyin = fp;
        do {
                yyparse();
        } while(!feof(yyin));

        return EXIT_SUCCESS;
}
