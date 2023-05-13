%{
#include "stdio.h"
#include "L.tab.h"
int yywrap();
int yylval();
void debug();
int counter = 0;
//int yyerror(char* s)
%}
delim [ \t\n]
ws {delim}+;
letter [a-zA-Z]
digit [0-9]
unary "++"|"--"
%%
(0|{digit}+)|(0[xX][0-9a-fA-F]+) { debug(); }
[+-]?[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)? {debug(); }
("true"|"false") {debug();}
("bool"|"char"|"int"|"real"|"char*"|"int*"|"real*"|"string"|"void") {debug(); }
"if" {debug(); }
"else" {debug(); }
"while" {debug(); }
"for" {debug(); }
"do" {debug(); }
"var" {debug(); }
"function" {debug(); }
"return" {debug(); }
"null" {debug(); }
"arg->" {debug(); }
{letter}+ {debug(); }
["].*["] {debug(); }
[']{letter}['] {debug(); }
("!="|">"|"<"|">="|"<="|"&&"|"||"|"==") {debug(); }
"=" {debug(); }
("+"|"-"|"*"|"/") {debug(); }
";" {debug(); }
"\\*" {debug(); }
"*\\" {debug(); }
":" {debug(); }
"!" {debug(); }
"&" {debug(); }
({unary}{letter}+|{letter}+{unary}) {debug();}
. debug();
(.|{ws}) {debug(); };
%%
int yywrap() {
    printf("I'm too cool for school, because I worked! \n");
    return 1;
}

void debug() {
    printf("%s \n", yytext);
}