#ifndef __SYMTAB_H__
#define __SYMTAB_H__

#include <stdbool.h>
#include <stdint.h>

#define MAXTOKEN 32
#define MAXSYMS 256

enum type_enum { F64, I64, BOOL, CHAR, STR };

union value_union {
        double          f64;
        int_least64_t   i64;        
        bool            b;        
        char            ch;
        char            *str;
};

struct symtab {
        char id[MAXTOKEN];
        enum type_enum typ;
        union value_union val;
};

extern void assign(char *id, union value_union val, enum type_enum typ);

/* flex */
extern int yylineno;

extern int yyerror (char const *msg, ...);
extern int yylex();

#endif
