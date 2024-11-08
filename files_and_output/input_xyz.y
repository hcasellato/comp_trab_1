//|================================|
//| Eduardo Campos     (13838537)  |
//| Henrique Casellato (13781858)  |
//|================================|

%{
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

struct symtab symbols[MAXSYMS];
int nsyms = 0;

%}
%union {
        union value_union val;
        enum type_enum    typ;
        char              ch;
        char              *str;
}

%token T_F64 T_I64 T_BOOL T_CHAR T_STR
%token T_VAR

%token <str> T_ID

%token <str> T_INC T_DEC
%token <val.i64> T_INT
%token <val.f64> T_REAL

%token <val.b> T_TRUE T_FALSE

%token <val.str> T_STRING 
%token <val.ch> T_CHARACTER

%type <val> value
%type <typ> type
%type <val> expr_i
%type <val> expr_f

%type <val.i64> inc_dec;


%left '+' '-'
%left '*' '/'
%right '='

%start program

/* 
   Gramatica 
*/

%%
program         : block { return 0; }
                ;

block           : T_VAR decl_list block
                | assignment block
                | inc_dec block
                |
                ;

/* 2. declaração de variáveis (declarations) */

decl_list       : decl ';'
                | decl ',' decl_list
                ;

decl            : T_ID ':' type '=' value { declare($1, $5, $3); }
                ;

/* 3. atribuição (assignment) */

assignment      : T_ID '=' expr_i ';'             { assign($1, $3); }
                | T_ID '=' expr_f ';'             { assign($1, $3); }
                ;

/* 4. incremento e decremento */

inc_dec         : T_ID T_INC ';'                { inc_dec($1, "++"); }
                | T_ID T_DEC ';'                { inc_dec($1, "--"); }
                ;


// imagino que seja mais simples do que 
// fazer duas operações separadas por tipo
expr_i          : expr_i '+' expr_i { $$.i64 = $1.i64 + $3.i64; }
                | expr_i '-' expr_i { $$.i64 = $1.i64 - $3.i64; }
                | expr_i '*' expr_i { $$.i64 = $1.i64 * $3.i64; }
                | expr_i '/' expr_i { $$.i64 = $1.i64 / $3.i64; }
                | T_INT             { $$.i64 = $1; }

expr_f          : expr_f '+' expr_f { $$.f64 = $1.f64 + $3.f64; }
                | expr_f '-' expr_f { $$.f64 = $1.f64 - $3.f64; }
                | expr_f '*' expr_f { $$.f64 = $1.f64 * $3.f64; }
                | expr_f '/' expr_f { $$.f64 = $1.f64 / $3.f64; }
                | T_REAL            { $$.f64 = $1; }
                ;

/* coisas gerais */

/*acho que eh mais complexo que isso*/
type  : T_F64  { $$ = F64; }
      | T_I64  { $$ = I64; }
      | T_BOOL { $$ = BOOL; }
      | T_CHAR { $$ = CHAR; }
      | T_STR  { $$ = STR; }
      ;

value : T_FALSE     { $$.b   = $1; }
      | T_TRUE      { $$.b   = $1; }
      | T_INT       { $$.i64 = $1; }
      | T_REAL      { $$.f64 = $1; }
      | T_STRING    { $$.str = $1; }
      | T_CHARACTER { $$.ch  = $1; }
      ;
%%
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
static void install(char *id, union value_union val, enum type_enum typ) {
        struct symtab *p;

        p = &symbols[nsyms++];
        strncpy(p->id, id, MAXTOKEN);
        p->val = val;
        p->typ = typ;
}

// declaration function
void declare(char *id, union value_union val, enum type_enum typ) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                install(id, val, typ);
				} else {
				    if (p->typ != typ) {
				        fprintf(stderr, "Type error: variable '%s' declared as %d, assigned as %d\n", id, p->typ, typ);
				        exit(EXIT_FAILURE);
				    }
				    p->val = val;
				}
}

// assign function
void assign(char *id, union value_union val) {
        struct symtab *p;

        p = lookup(id);
        if(p == NULL){
                printf("Variable not created yet!");
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
                printf("Variable not created yet!");
                exit(EXIT_FAILURE);
				} else {
				    if (p->typ != I64) {
				        fprintf(stderr, "Somente funciona com inteiros, colega");
				        exit(EXIT_FAILURE);
				    }
				    if(signal == "++"){
				      p->val.i64 = p->val.i64 + 1;
				    } else if (signal == "--") {
				      p->val.i64 = p->val.i64 - 1;
				    }
				}
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
                printf("%s [%s] = %d \n", p->id, type_to_string(p->typ), p->val);
        }

        return 0;
}
