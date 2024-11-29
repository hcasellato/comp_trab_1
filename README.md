# Trabalho de Compiladores
Trabalho com o propósito de criar uma linguagem *xyz* por meio de dois analizadores, um léxico (lex) e um sintático (bison). Então, precisaríamos cumprir alguns landmarks:

1. Escreva uma analisador léxico usando o lex para a linguagem;
2. Escreva um analisador sintático usando o yacc;
3. A partir do analisador sintático, imprima a tabela de símbolos para o código de entrada com os símbolos apresentados de acordo com o contexto.
4. Descreva como checar se uma variável ao ser usada, já foi declarada. (Não é necessário especificar na gramática.)

Para a questão (4), o grupo crê que para checar se uma variável já foi declarada, ela deveria estar na tabela de símbolos. Ou seja, para uma solução simples, seria construído um array com todas as variáveis delcaradas com sua frequência dentro do código, e à cada vez que uma variável for usada, seria verificada nesse array e somado 1 à sua frequência. Portanto, variáveis mais comuns seriam prontamente verificadas, diminuindo o tempo de busca.
