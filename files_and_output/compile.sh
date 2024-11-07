#!/bin/bash

lex -o output_xyz.yy.c input_xyz.l
yacc -d -o output_xyz.tab.c input_xyz.y
gcc -o xyz output_xyz.tab.c
