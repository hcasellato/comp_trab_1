%{
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* flex */
extern int yylineno;

extern int yyerror (char const *msg, ...);
extern int yylex();

#define MAXTOKEN 32
#define MAXSYMS 256

struct symtab {
        char id[MAXTOKEN];
        int val;
};

extern void assign(char *id, int val);
// Stop warning about implicit declaration of yylex().
extern int yylex();
int yyerror(const char *msg, ...);

static struct symtab symbols[MAXSYMS];
static int nsyms = 0; /* number of symbols */

/* 
  To debug, run 
  bison --verbose --debug -d file.y 
*/
int yydebug = 1;

union value_union {
        double          f64;
        int   i64;        
        bool            b;        
        char            ch;
        char            *str;
};


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

%token <s> T_ID;

%type <val> T_value;
%type <val.f64> expr;

%left '+' '-'
%left '*' '/'
%right '='

%start program

/* Gramatica */
%%
/*Declare types*/
program         : block { return 0; }
                | assign_list { return 0; }
                ;

block           : T_VAR decl_list | ;

/* 2. declaração de variáveis (declarations) */
T_type          : T_F64 | T_I64 | T_BOOL;

T_value         : T_FALSE { $$.b   = $1; }
                | T_TRUE  { $$.b   = $1; }
                | T_INT   { $$.i64 = $1; }
                | T_REAL  { $$.f64 = $1; }
                ;

decl_list       : decl ';' | decl ',' decl_list; /*talvez dê problema*/

decl            : T_ID ':' T_type '=' T_value;

/* 3. atribuição (assignment) [na sorte, creio que está certo]*/

assign_list     : assignment
                | assignment  assign_list
                ;

assignment      : T_ID '=' expr ';'             { assign($1, $3); }
                ;

expr            : expr '+' expr                 { $$ = $1 + $3; }
                | expr '-' expr                 { $$ = $1 - $3; }
                | expr '*' expr                 { $$ = $1 * $3; }
                | expr '/' expr                 { $$ = $1 / $3; }
                | T_INT                         { $$ = $1; }
                | T_REAL                        { $$ = $1; }
                ;

/* 4. incremento e decremento */

%%
#include "output_xyz.yy.c"


int yyerror(const char *msg, ...) {
	va_list args;

	va_start(args, msg);
	vfprintf(stderr, msg, args);
	va_end(args);

        return 0;
}

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

static void install(char *id, int val) {
        struct symtab *p;

        p = &symbols[nsyms++];
        strncpy(p->id, id, MAXTOKEN);
        p->val = val;
}

void assign(char *id, int val) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL)
                install(id, val);
        else
                p->val = val;
}


int main (int argc, char **argv) {
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
