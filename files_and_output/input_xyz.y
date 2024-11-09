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

char current_function[50] = "";

struct symtab symbols[MAXSYMS];
int nsyms = 0;

%}
%union {
        union value_union val;
        enum type_enum    typ;
        char              ch;
        char              *str;
        int               b;
}

%token           T_F64 T_I64 T_BOOL T_CHAR T_STR
%token           T_VAR
%token           LE GE LT GT NE EQ AND OR
%token <str>     IF ELSE WHILE

%token           FUNCTION RETURN

%token <str>     T_ID

%token <str>     T_INC T_DEC
%token <val.i64> T_INT
%token <val.f64> T_REAL

%token <val.b>   T_TRUE T_FALSE

%token <val.str> T_STRING 
%token <val.ch>  T_CHARACTER

%type <val>      value
%type <typ>      type

%left '+' '-'
%left '*' '/'
%right '='

%start program

/* 
   Gramatica 
*/

%%
program         : function_list
                ;

block           : T_VAR decl_list block
                | assignment block
                | inc_dec block
                | desvio_de_fluxo block
                | loop block
                | RETURN expr ';'
                |
                ;

/* 2. declaração de variáveis (declarations) */

decl_list       : decl ';'
                | decl ',' decl_list
                ;

decl            : T_ID ':' type '=' value         { declare($1, current_function, $3); }
                ;

/* 3. atribuição (assignment) */

assignment      : T_ID '=' expr ';'
                | T_ID '=' T_ID '(' espec_f_assign ')' ';'
                ;

espec_f_assign  : T_ID
                | T_ID ',' espec_f_assign
                ;

// imagino que seja mais simples do que 
// fazer duas operações separadas por tipo

expr            : expr '+' expr
                | expr '-' expr
                | expr '*' expr
                | expr '/' expr
                | '-' expr
                | T_INT
                | T_REAL
                | T_ID
                ;

/* 4. incremento e decremento */

inc_dec         : T_ID T_INC ';'    { inc_dec($1, "++", current_function); }
                | T_ID T_DEC ';'    { inc_dec($1, "--", current_function); }
                ;

/* 5 e 6. funções */

function_list   : function
                | function function_list
                ;

function        : FUNCTION T_ID  {current_function_modifier($2);} '(' f_assign ')' '{' block '}'
                ;

f_assign        : T_ID type              { declare($1, current_function, $2); }
                | T_ID type ',' f_assign { declare($1, current_function, $2); }
                |
                ;

/* 7. desvio de fluxo (if com e sem else), sem suporte a else if */

desvio_de_fluxo : IF bool_value '{' block '}'
                | IF bool_value '{' block '}' ELSE '{' block '}'
                ;

/* 8. laço (loop, só há um, o while) */
loop            : WHILE bool_value '{' block '}'
                ;

/* coisas gerais */

// Coisas de lógica
bool_value : T_ID LE expr
           | T_ID LT expr
           | T_ID GE expr
           | T_ID GT expr
           | T_ID EQ expr
           | T_ID NE expr
           ;

// Tipos
type       : T_F64  { $$ = F64; }
           | T_I64  { $$ = I64; }
           | T_BOOL { $$ = BOOL; }
           | T_CHAR { $$ = CHAR; }
           | T_STR  { $$ = STR; }
           ;

// Valores
value      : T_FALSE     { $$.b   = $1; }
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
static struct symtab *lookup(char *id, char *function) {
        int i;
        struct symtab *p;

        for (i = 0; i < nsyms; i++) {
                p = &symbols[i];
                if (strncmp(p->id, id, MAXTOKEN) == 0 && strncmp(p->function, function, MAXTOKEN) == 0)
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

        p = lookup(id, function);
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
void inc_dec(char *id, char *signal, char *function) {
        struct symtab *p;

        p = lookup(id, function);
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
