%option noyywrap
%{
#include <stdbool.h>
#include <stdlib.h>

#include "xyz.tab.h" // yacc -d xyz.y

/* tabela de simbolos */
#include "symtab.h"

extern int yyerror (char const *msg, ...);
%}

T_ID        [a-zA-Z][a-zA-Z0-9_]*
T_INT       [+-]?[0-9]+
T_REAL      [0-9]+\.?|[0-9]*\.[0-9]+ 

%%
 /* palavras reservadas */

"var"                { return T_VAR; }

 /* tipos de dados */

"i64"                { return T_I64; }
"f64"                { return T_F64; }
"bool"               { return T_BOOL; }

 /* ignorando */

[ ]                  {}
[\t]                 {}
[\r]                 {}
[\n]                 {}
.                    {}
%%
