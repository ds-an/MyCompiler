%{
#include "stdio.h"
#include "string.h"
#include "L.tab.h"
int yylex();
int yywrap();
int yyerror();
int yylineno, yychar; //maybe extern?
char *s;
int yyerror(s);
int yydebug=1;
%}
%start program
%token INT ID STR CHAR BOOL TYPE IF ELSE WHILE FOR DO VAR FUNCTION RETURN NUL VOID
%token ARG LOGIC ASSGN AR ENDST TYPEDEF NOT ADDRESS UNARYID COMMOPEN COMMCLOSE REAL MAIN
%%
program: FUNCTION

operator: AR
| LOGIC
;

value: INT
| REAL
| CHAR
;

expression: expression operator expression
| operator expression
;

 //statement:

parameter_list: ARG ids TYPEDEF TYPE
;

ids: ID
| ids ',' ID
;

body: statements
;

function: FUNCTION ID '(' parameter_list ')' TYPEDEF TYPE '{' body '}'
;

procedure: FUNCTION ID '(' parameter_list ')' TYPEDEF VOID '{' body '}'
| FUNCTION MAIN '(' parameter_list ')' TYPEDEF VOID '{' body '}'
;

declaration: VAR ID ASSGN value ';'
| TYPE ids ;
;

%%
int main() {
    int result = yyparse();
}

int yyerror(s) {
    printf("-------\nError: %s\nToken: %d\nLine: %d\n-------", s, yychar, yylineno);
}