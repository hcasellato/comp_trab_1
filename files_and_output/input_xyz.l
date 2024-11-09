%{

//|================================|
//| Eduardo Campos     (13838537)  |
//| Henrique Casellato (13781858)  |
//|================================|

#include <stdbool.h>
#include <stdlib.h>
#include "types.h"

extern int yyerror (char const *msg, ...);

static char *ptr;
%}
T_CHARACTER ['][a-zA-Z0-9][']
T_INT       [+-]?[0-9]+
T_REAL      [0-9]+\.?|[0-9]*\.[0-9]+ 
T_ID        [a-zA-Z][a-zA-Z0-9_]*
T_SPACE     [ \t\n]

%option noyywrap nodefault yylineno
%%
["']                            { return yytext[0];                                 }
[,:=;{}()]                      { return yytext[0];                                 }
[-+*/]                          { return yytext[0];                                 }

"//".*                          { /* Ignore single-line comments */ }
"/*"([^*]|\*+[^*/])*\*+"/"      { /* Ignore multi-line comments */ }

"var"                           { return T_VAR;                                     }
"f64"                           { return T_F64;                                     }
"i64"                           { return T_I64;                                     }
"bool"                          { return T_BOOL;                                    }
"char"                          { return T_CHAR;                                    }
"str"                           { return T_STR;                                     }

"++"                            { return T_INC;                                     }
"--"                            { return T_DEC;                                     }

"if"                            { return IF;                                        }
"else"                          { return ELSE;                                      }

"while"                         { return WHILE;                                     }

"<="                            { return LE;                                        }
">="                            { return GE;                                        }
"=="                            { return EQ;                                        }
"!="                            { return NE;                                        }
">"	                            { return GT;                                        }
"<"	                            { return LT;                                        }
"&&"	                          { return AND;                                       }
"||"	                          { return OR;                                        }

"false"                         { yylval.val.b = false; return T_FALSE;             }
"true"                          { yylval.val.b = true; return T_TRUE;               }

"fn"                            { return FUNCTION;                                  }
"return"                        { return RETURN;                                    }

{T_INT}                         { yylval.val.i64 = atol(yytext); return T_INT;      }
{T_REAL}                        { yylval.val.f64 = atof(yytext); return T_REAL;     }
{T_CHARACTER}                   { yylval.val.ch = yytext[0]; return T_CHARACTER;    }
{T_ID}                          { yylval.str = strdup(yytext); return T_ID;         }
{T_SPACE}                       { ;                                                 }
\"([^\\\"]|\\.)*\"              { yylval.val.str = strdup(yytext); return T_STRING; }
.                               { yyerror("unknown token %s\n", yytext);            }
%%
