%{
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "L.tab.h"
#include "nodes.h"
int yywrap();
int counter = 0;
//int yyerror(char* s)
%}
%option yylineno
letter [a-zA-Z]
digit [0-9]
id ({letter})({letter}|_|{digit})*
%%
(0|{digit}+)|(0[xX][0-9a-fA-F]+) { strcpy(yylval.node_info.str, yytext); return INT; }
("true"|"false") { strcpy(yylval.node_info.str, yytext); return BOOL;}
"void" { strcpy(yylval.node_info.str, yytext); return VOID;}
"bool" { strcpy(yylval.node_info.str, yytext); return TYPEBOOL;}
"char" { strcpy(yylval.node_info.str, yytext); return TYPECHAR;}
"int" { strcpy(yylval.node_info.str, yytext); return TYPEINT;}
"real" { strcpy(yylval.node_info.str, yytext); return TYPEREAL;}
"char*" { strcpy(yylval.node_info.str, yytext); return TYPECHARPOINTER;}
"int*" { strcpy(yylval.node_info.str, yytext); return TYPEINTPOINTER;}
"real*" { strcpy(yylval.node_info.str, yytext); return TYPEREALPOINTER;}
"string" { strcpy(yylval.node_info.str, yytext); return TYPESTR;}
"main" { strcpy(yylval.node_info.str, yytext); return MAIN;}
"if" { strcpy(yylval.node_info.str, yytext); return IF; }
"else" { strcpy(yylval.node_info.str, yytext); return ELSE; }
"while" { strcpy(yylval.node_info.str, yytext); return WHILE; }
"for" { strcpy(yylval.node_info.str, yytext); return FOR; }
"do" { strcpy(yylval.node_info.str, yytext); return DO; }
"var" { strcpy(yylval.node_info.str, yytext); return VAR; }
"function" { strcpy(yylval.node_info.str, yytext); return FUNCTION; }
"return" { strcpy(yylval.node_info.str, yytext); return RETURN; }
"null" { strcpy(yylval.node_info.str, yytext); return NUL; }
"arg->" { strcpy(yylval.node_info.str, yytext); return ARG; }
{id} { strcpy(yylval.node_info.str, yytext); return ID; }
["].*["] { strcpy(yylval.node_info.str, yytext); return STR; }
[']{letter}['] { strcpy(yylval.node_info.str, yytext); return CHAR; }
[|]{id}[|] { strcpy(yylval.node_info.str, yytext); return STRLEN; }
"==" { strcpy(yylval.node_info.str, yytext); return LOGICEQ;}
"!=" { strcpy(yylval.node_info.str, yytext); return LOGICNOTEQ;}
">" { strcpy(yylval.node_info.str, yytext); return LOGICMORE;}
"<" { strcpy(yylval.node_info.str, yytext); return LOGICLESS;}
">=" { strcpy(yylval.node_info.str, yytext); return LOGICMOREEQ;}
"<=" { strcpy(yylval.node_info.str, yytext); return LOGICLESSEQ;}
"&&" { strcpy(yylval.node_info.str, yytext); return LOGICAND;}
"||" { strcpy(yylval.node_info.str, yytext); return LOGICOR;}
"=" { strcpy(yylval.node_info.str, yytext); return ASSGN; }
"+" { strcpy(yylval.node_info.str, yytext); return PLUS;}
"-" { strcpy(yylval.node_info.str, yytext); return MINUS;}
"*" { strcpy(yylval.node_info.str, yytext); return MUL;}
"/" { strcpy(yylval.node_info.str, yytext); return DIV;}
";" { strcpy(yylval.node_info.str, yytext); return ENDST; }
"\\*" { strcpy(yylval.node_info.str, yytext); return COMMOPEN; }
"*\\" { strcpy(yylval.node_info.str, yytext); return COMMCLOSE; }
[0-9]+(\.[0-9]+)?([eE][+-]?[0-9]+)? { strcpy(yylval.node_info.str, yytext); return REAL; }
":" { strcpy(yylval.node_info.str, yytext); return TYPEDEF; }
"!" { strcpy(yylval.node_info.str, yytext); return NOT; }
"&" { strcpy(yylval.node_info.str, yytext); return ADDRESS; }
\/\*(.*\n)*.*\*\/ ;
[ \t] ;
. { strcpy(yylval.node_info.str, yytext); return yytext[0]; }
.|\n ;
%%
int yywrap() {
    return 1;
}