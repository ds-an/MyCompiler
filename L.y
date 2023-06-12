%{
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "nodes.h"
#include "nodes.c"
#include "semantics.c"
int yylex();
int yywrap();
int yyerror();
int yychar;
int main_flag = 0;
extern int yylineno;//maybe extern?
char *s;
node *list_node = NULL;
ScopeStack *scopeStack = NULL;
node *global_functions = NULL;
//node *local_functions = NULL;
int yydebug=1;
//#define YYSTYPE node*
%}
%start program
%token <node_info> INT ID REAL BOOL
%token <node_info> STR CHAR IF ELSE WHILE FOR DO VAR FUNCTION RETURN NUL VOID
%token <node_info> TYPEBOOL TYPECHAR TYPEINT TYPEREAL TYPECHARPOINTER TYPEINTPOINTER TYPEREALPOINTER TYPESTR
%token <node_info> LOGICEQ LOGICNOTEQ LOGICMORE LOGICLESS LOGICMOREEQ LOGICLESSEQ LOGICAND LOGICOR
%token <node_info> PLUS MINUS MUL DIV
%token <node_info> ARG ASSGN ENDST TYPEDEF NOT ADDRESS COMMOPEN COMMCLOSE MAIN STRLEN

%type <node_info> program declaration decl_param_list decl_assgn decl_id function_list
%type <node_info> funcproc function procedure main_function statement
%type <node_info> update statement_list decl_statement assgn_statement expr_statement if_statement
%type <node_info> iter_statement ret_statement ids expression not_expression logic_expression
%type <node_info> ar_expression pr_expression func_call arglist logic arithmetic type literal
%type <node_info> parameter_list func_body proc_body iter_body str_id block_statement  // deref_expression

%precedence "lowest"
%precedence ELSE
%left PLUS MINUS
%left MUL DIV
%expect 68

%union {
    struct node_info {
       char str [sizeof(char) * 50];
       struct node *treenode;
    }node_info;
};

%%

program: function_list {
    $$.treenode = $1.treenode;
    print_tree($$.treenode, 0);
    pass_type_tree($$.treenode, scopeStack, global_functions);
    check_tree($$.treenode);
} ; // main_function | main_function ;

declaration: VAR decl_param_list TYPEDEF type {
    pass_type_decl($2.treenode, $4.treenode);
    $$.treenode = crnode_var_decl("DECL", $2.treenode, $4.treenode);
} ;
| TYPESTR decl_param_list {
    pass_type_str_decl($2.treenode);
    $$.treenode = crnode_str_decl("DECL", $2.treenode);
} ;

decl_param_list: decl_assgn {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $1.treenode);
};
| decl_param_list ',' decl_assgn {
    node *list_node_decl = $$.treenode;
    add_to_list(list_node_decl, $3.treenode);
    $$.treenode = list_node_decl;
} ; // check for list-loop

decl_assgn: decl_id ASSGN expression {
    $$.treenode = crnode_assgn_decl("", $1.treenode, $3.treenode);
};
| decl_id {$$.treenode = $1.treenode;} ;

decl_id: ID {$$.treenode = crnode_leaf($1.str, decl_id, null);};
| ID '[' ar_expression ']' {
    $$.treenode = crnode_id_ar_decl("", crnode_leaf($1.str, decl_id_br, null), $3.treenode);
};
| ID '[' INT ']' {
    $$.treenode = crnode_id_int_decl("", crnode_leaf($1.str, decl_id_br, null), crnode_leaf($3.str, decl_id_integer, type_int));
} ;
| ID '[' ID ']' {
    $$.treenode = crnode_id_int_decl("", crnode_leaf($1.str, decl_id_br, null), crnode_leaf($3.str, decl_id_id, null));
} ;

function_list: funcproc {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $1.treenode);
};
| function_list funcproc {
        node *list_node_funcs = $$.treenode;
        add_to_list(list_node_funcs, $2.treenode);
        $$.treenode = list_node_funcs;
};

funcproc: function {$$.treenode = $1.treenode;}
| procedure {$$.treenode = $1.treenode;}
| main_function {$$.treenode = $1.treenode;} ;

function: FUNCTION ID '(' parameter_list ')' TYPEDEF type func_body {
    $$.treenode = crnode_function("FUNC", crnode_leaf($2.str, func_id, null), $4.treenode, $7.treenode, $8.treenode);
    pass_type_function($$.treenode, $7.treenode);
} ;

procedure: FUNCTION ID '(' parameter_list ')' TYPEDEF VOID proc_body {
    $$.treenode = crnode_procedure("PROC", crnode_leaf($2.str, func_id, type_void), $4.treenode, $8.treenode);
} ;

main_function: FUNCTION MAIN '(' parameter_list ')' TYPEDEF VOID proc_body {
    main_flag++;
    $$.treenode = crnode_main_function("MAIN_FUNC", $4.treenode, $8.treenode);
} ;

parameter_list: ARG ids TYPEDEF type {
    //for (int i = 0; i < $2.treenode->nodes.list_node.num - 1; i++) {
      //  strcpy($2.treenode->nodes.list_node.list[i]->nodes.leaf_node.info, "param");
    //}
    pass_type_param_list($2.treenode, $4.treenode);
    $$.treenode = crnode_list();
    add_to_list($$.treenode, crnode_param_list("PARAM_LIST", $2.treenode, $4.treenode));
} ;
| parameter_list ENDST ARG ids TYPEDEF type {
    pass_type_param_list($4.treenode, $6.treenode);
    node *list_node_args = $$.treenode;
    add_to_list(list_node_args, crnode_param_list("PARAM_LIST", $4.treenode, $6.treenode));
    $$.treenode = list_node_args;
} ;
| {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, crnode_param_list("PARAM_LIST", NULL, NULL));
};

func_body: '{' function_list ret_statement '}'{
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $2.treenode);
    add_to_list($$.treenode, $3.treenode);
}
| '{' statement_list ret_statement '}' {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $2.treenode);
    add_to_list($$.treenode, $3.treenode);
}
| '{' function_list statement_list ret_statement '}' {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $2.treenode);
    add_to_list($$.treenode, $3.treenode);
    add_to_list($$.treenode, $4.treenode);
}
| '{' '}';

proc_body: '{' function_list '}' {$$.treenode = $2.treenode;}
| '{' statement_list '}' {$$.treenode = $2.treenode;}
| '{' function_list statement_list '}' {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $2.treenode);
    add_to_list($$.treenode, $3.treenode);
}
| '{' '}';

iter_body: statement {$$.treenode = $1.treenode;}
| '{' '}' ;

statement: iter_statement {$$.treenode = $1.treenode;}
| if_statement {$$.treenode = $1.treenode;}
| expr_statement {$$.treenode = $1.treenode;}
| assgn_statement {$$.treenode = $1.treenode;}
| decl_statement {$$.treenode = $1.treenode;} ;
| block_statement {$$.treenode = $1.treenode;} ;// think and check
 // | '{' '}' ; //think here too

block_statement: '{' statement_list '}' {
    $2.treenode->nodes.list_node.list_type = block_statement;
    $$.treenode = $2.treenode;
};

update: ID ASSGN expression {
    $$.treenode = crnode_update("UPDATE_STMT", crnode_leaf($1.str, update_id, null), $3.treenode);
} ;

statement_list: statement {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $1.treenode);
};
| statement_list statement {
    node *list_node_stmts = $$.treenode;
    add_to_list(list_node_stmts, $2.treenode);
    $$.treenode = list_node_stmts;
};

decl_statement: declaration ENDST {
    $$.treenode = crnode_decl_stmt("DECL_STMT", $1.treenode);
};

assgn_statement: ID ASSGN expression ENDST {
    $$.treenode = crnode_assgn_stmt("ASSGN_STMT", crnode_leaf($1.str, id_plain, null), $3.treenode);
} ;
| MUL pr_expression ASSGN expression ENDST {
    $$.treenode = crnode_assgn_stmt("ASSGN_STMT", crnode_deref("DEREF", $2.treenode), $4.treenode);
};

expr_statement: expression ENDST {
    $$.treenode = crnode_expr_stmt("EXPR_STMT", $1.treenode);
} ;

if_statement: IF '(' expression ')' iter_body %prec "lowest" {
    $$.treenode = crnode_if_stmt("IF_STMT", $3.treenode, $5.treenode);
} ;
| IF '(' expression ')' iter_body ELSE iter_body {
    $$.treenode = crnode_if_else_stmt("IF_ELSE_STMT", $3.treenode, $5.treenode, $7.treenode);
} ; // TEMPORARY - PROBLEM

iter_statement: WHILE '(' expression ')' iter_body {
    $$.treenode = crnode_while_stmt("WHILE_STMT", $3.treenode, $5.treenode);
};
| DO iter_body WHILE '(' expression ')' ENDST {
    $$.treenode = crnode_do_while_stmt("DO_WHILE_STMT", $2.treenode, $5.treenode);
};
| FOR '(' assgn_statement expression ENDST update ')' iter_body {
    $$.treenode = crnode_for_stmt("FOR_STMT", $3.treenode, $4.treenode, $6.treenode, $8.treenode);
}; ; // PROBLEM

ret_statement: RETURN expression ENDST {
    $$.treenode = crnode_ret_stmt("RET_STMT", $2.treenode);
} ;

ids: ID {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, crnode_leaf($1.str, id_list, null));
};
| ids ',' ID {
    node *list_node_ids = $$.treenode;
    add_to_list(list_node_ids, crnode_leaf($3.str, id_list, null));
    $$.treenode = list_node_ids;
} ; //подумать!!!!!!!!!!

expression: not_expression {$$.treenode = $1.treenode;};
| ar_expression {$$.treenode = $1.treenode;};
| logic_expression {$$.treenode = $1.treenode;};
| pr_expression {$$.treenode = $1.treenode;};
 // | deref_expression {$$.treenode = $1.treenode;};

not_expression: NOT pr_expression {
    $$.treenode = crnode_not_expr("NOT_EXPR", $2.treenode);
} ;

logic_expression: expression logic expression { //Change needed here, was pr_expression
    $$.treenode = crnode_logic_expr("LOGIC_EXPR", $1.treenode, crnode_leaf($2.str, logic_op, null), $3.treenode);
}
| logic_expression logic expression {
    $$.treenode = crnode_logic_expr("LOGIC_EXPR", $1.treenode, crnode_leaf($2.str, logic_op, null), $3.treenode);
};

ar_expression: expression arithmetic expression { //AND here too
    $$.treenode = crnode_ar_expr("AR_EXPR", $1.treenode, crnode_leaf($2.str, ar_op, null), $3.treenode);
}
| ar_expression arithmetic expression {
    $$.treenode = crnode_ar_expr("AR_EXPR", $1.treenode, crnode_leaf($2.str, ar_op, null), $3.treenode);
};

pr_expression: '(' expression ')' {$$.treenode = $2.treenode;} /* brackets */
| ID {$$.treenode = crnode_leaf($1.str, id_plain, null);};
| str_id {$$.treenode = $1.treenode;};
| literal {$$.treenode = $1.treenode;};
| func_call {$$.treenode = $1.treenode;};
| ADDRESS pr_expression {$$.treenode = crnode_address("ADDRESS", $2.treenode);};
| MUL pr_expression {$$.treenode = crnode_deref("DEREF", $2.treenode);};
| STRLEN {$$.treenode = crnode_leaf($1.str, strlength, type_int);} ; //think about pointers and other things

func_call: ID '(' arglist ')' {
    $$.treenode = crnode_func_call_args("FUNC_CALL", crnode_leaf($1.str, func_call_id, null), $3.treenode);
};
| ID '(' ')' {
    $$.treenode = crnode_func_call("FUNC_CALL", crnode_leaf($1.str, func_call_id, null));
} ; // can be problems here, check!!!

str_id: ID '[' ar_expression ']' {
    $$.treenode = crnode_id_ar_str("", crnode_leaf($1.str, str_id_br, null), $3.treenode);
};
| ID '[' INT ']' {
    $$.treenode = crnode_id_int_str("", crnode_leaf($1.str, str_id_br, null), crnode_leaf($3.str, str_id_integer, type_int));
} ;
| ID '[' ID ']' {
    $$.treenode = crnode_id_int_str("", crnode_leaf($1.str, str_id_br, null), crnode_leaf($3.str, str_id_id, null));
} ;

arglist: expression {
    $$.treenode = crnode_list();
    add_to_list($$.treenode, $1.treenode);
};
| arglist ',' expression {
    node *list_node_args = $$.treenode;
    add_to_list(list_node_args, $3.treenode);
    $$.treenode = list_node_args;
}; // подумать

logic: LOGICEQ | LOGICNOTEQ | LOGICMORE | LOGICLESS
| LOGICMOREEQ | LOGICLESSEQ | LOGICAND | LOGICOR ;

arithmetic: PLUS | MINUS | MUL | DIV ;

type: TYPEBOOL {$$.treenode = crnode_leaf($1.str, param_type, type_bool);} 
| TYPECHAR {$$.treenode = crnode_leaf($1.str, param_type, type_char);}
| TYPEINT {$$.treenode = crnode_leaf($1.str, param_type, type_int);}
| TYPEREAL {$$.treenode = crnode_leaf($1.str, param_type, type_real);}
| TYPECHARPOINTER {$$.treenode = crnode_leaf($1.str, param_type, type_char_point);} 
| TYPEINTPOINTER {$$.treenode = crnode_leaf($1.str, param_type, type_int_point);} 
| TYPEREALPOINTER {$$.treenode = crnode_leaf($1.str, param_type, type_real_point);} 
| TYPESTR {$$.treenode = crnode_leaf($1.str, param_type, type_string);} ;

literal: INT {$$.treenode = crnode_leaf($1.str, literal, type_int);}
| REAL {$$.treenode = crnode_leaf($1.str, literal, type_real);} 
| CHAR {$$.treenode = crnode_leaf($1.str, literal, type_char);} 
| BOOL {$$.treenode = crnode_leaf($1.str, literal, type_bool);} 
| STR {$$.treenode = crnode_leaf($1.str, literal, type_string);} ;

%%

int main() {
    scopeStack = cr_scope_stack();
    global_functions = crnode_list();
    push_symbol_table(scopeStack);
    int result = yyparse();
    if (main_flag > 1)
        fprintf(stderr, "Error: more than one main function.");
    if (main_flag < 1)
        fprintf(stderr, "Error: main function not present.");
}

int yyerror(char *s) {
    fprintf(stderr, "-------\nGrammar error: %s\nToken: %d (Check the corresponding token in L.tab.h file)\nLine: %d\n-------\n", s, yychar, yylineno);
}
