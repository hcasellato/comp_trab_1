#!/bin/bash

lex -o xyz.yy.c xyz.l
yacc -d -o xyz.tab.c xyz.y
cc -o xyz xyz.tab.c
