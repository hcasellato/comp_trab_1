#!/bin/bash

lex -o output_xyz.yy.c input_xyz.l
yacc -d -o output_xyz.tab.c input_xyz.y
cc -o xyz output_xyz.tab.c

echo "Fatorial"
./xyz ../codigos_teste/fat.xyz

echo ""
echo "Teste 1"
./xyz ../codigos_teste/teste_1.xyz

echo ""
echo "Teste 2"
./xyz ../codigos_teste/teste_2.xyz
