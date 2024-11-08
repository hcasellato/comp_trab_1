#ifndef __TYPES_H__
#define __TYPES_H__

#include <stdbool.h>
#include <stdint.h>

#define MAXTOKEN 32
#define MAXSYMS 256

enum type_enum {
        F64, I64, BOOL, CHAR, STR
};

union value_union {
        double f64;
        int    i64;
        bool   b;
        char   ch;
        char   *str;
};

struct symtab {
        char id[MAXTOKEN];
        enum type_enum typ;
        union value_union val;
};

extern void declare(char *id, union value_union val, enum type_enum typ);
extern void assign(char *id, union value_union val);
extern void inc_dec(char *id, char *signal);

/* flex */
extern int yylineno;

extern int yyerror (char const *msg, ...);
extern int yylex();

extern struct symtab symbols[MAXSYMS];
extern int nsyms;

#endif
