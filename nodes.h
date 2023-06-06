#ifndef MYCOMPILER_NODES_H
#define MYCOMPILER_NODES_H

enum node_type {
    leaf, // *
    decl_var, // *
    decl_str, // *
    decl_id_ar, // * check
    decl_id_int,
    str_id_ar,
    str_id_int,// * check
    decl_assgn, // * check
    function, // *
    procedure, // *
    main_function, // *
    parameter_list, // *
    update, // * check
    assgn_statement, // **
    expr_statement, // **
    decl_statement, // * check more
    if_statement, // **
    if_else_statement, //*
    while_statement,
    do_while_statement,
    for_statement,
    ret_statement,
    not_expression,
    logic_expression,
    ar_expression,
    list, // *
    func_call,
    func_call_args,
    deref,
    address
};

enum leaf_node_type {
    decl_type,
    decl_id,
    decl_id_br,
    decl_id_integer,
    decl_id_id,
    str_id_br,
    str_id_integer,
    str_id_id,
    func_id,
    id_plain,
    func_type,
    param_type,
    update_id,
    id_list,
    logic_op,
    ar_op,
    literal,
    strlength,
    func_call_id
};

enum list_node_type {
    regular,
    block_statement
};

enum data_type {
    null,
    type_bool,
    type_char,
    type_int,
    type_real,
    type_char_point,
    type_int_point,
    type_real_point,
    type_string,
    type_void
};

/*enum data_type {

};*/

typedef struct leaf_node {
    char *info;
    enum leaf_node_type type;
    enum data_type data_type;
}leafNode;

typedef struct deref_node {
    char *info;
    struct node *expr;
}derefNode;

typedef struct address_node {
    char *info;
    struct node *expr;
}addressNode;

typedef struct function_node {
    char *info;
    struct node *id;
    struct node *param_list;
    struct node *type;
    struct node *stmt;
}functionNode;

typedef struct procedure_node {
    char *info;
    struct node *id;
    struct node *param_list;
    struct node *stmt;
}procedureNode;

typedef struct main_function_node {
    char *info;
    struct node *param_list;
    struct node *stmt;
}mainFunctionNode;

typedef struct param_list_node {
    char *info;
    struct node *ids;
    struct node *type;
}paramListNode;

typedef struct var_decl_node {
    char *info;
    struct node *param_list;
    struct node *type;
}varDeclNode;

typedef struct str_decl_node {
    char *info;
    struct node *param_list;
}strDeclNode;

typedef struct assgn_decl_node {
    char *info;
    struct node *decl_id;
    struct node *expr;
}assgnDeclNode;

typedef struct id_ar_decl_node {
    char *info;
    struct node *decl_id;
    struct node *expr;
}idArDeclNode;

typedef struct id_int_decl_node {
    char *info;
    struct node *decl_id;
    struct node *integer;
}idIntDeclNode;

typedef struct id_ar_str_node {
    char *info;
    struct node *str_id;
    struct node *expr;
}idArStrNode;

typedef struct id_int_str_node {
    char *info;
    struct node *str_id;
    struct node *integer;
}idIntStrNode;

typedef struct update_node {
    char *info;
    struct node *id;
    struct node *expr;
}updateNode;

typedef struct expr_stmt_node {
    char *info;
    struct node *expr;
}exprStmtNode;

typedef struct decl_stmt_node {
    char *info;
    struct node *decl;
}declStmtNode;

typedef struct assgn_stmt_node {
    char *info;
    struct node *ids;
    struct node *expr;
}assgnStmtNode;

typedef struct if_stmt_node {
    char *info;
    struct node *expr;
    struct node *stmt;
}ifStmtNode;

typedef struct if_else_stmt_node {
    char *info;
    struct node *expr;
    struct node *stmt;
    struct node *elsestmt;
}ifElseStmtNode;

typedef struct while_stmt_node {
    char *info;
    struct node *expr;
    struct node *stmt;
}whileStmtNode;

typedef struct do_while_stmt_node {
    char *info;
    struct node *stmt;
    struct node *expr;
}doWhileStmtNode;

typedef struct for_stmt_node {
    char *info;
    struct node *assgn_stmt;
    struct node *expr;
    struct node *update;
    struct node *stmt;
}forStmtNode;

typedef struct ret_stmt_node {
    char *info;
    struct node *expr;
}retStmtNode;

typedef struct not_expr_node {
    char *info;
    struct node *expr;
}notExprNode;

typedef struct logic_expr_node {
    char *info;
    struct node *expr1;
    struct node *logic;
    struct node *expr2;
}logicExprNode;

typedef struct ar_expr_node {
    char *info;
    struct node *expr1;
    struct node *ar;
    struct node *expr2;
}arExprNode;

typedef struct func_call_args_node {
    char *info;
    struct node *id;
    struct node *args;
}funcCallArgsNode;

typedef struct func_call_node {
    char *info;
    struct node *id;
}funcCallNode;

typedef struct list_node {
    int num;
    size_t length;
    struct node **list;
    enum list_node_type list_type;
}listNode;

typedef struct node{
    enum node_type node_type;
    union {
        leafNode leaf_node;
        functionNode function_node;
        procedureNode procedure_node;
        mainFunctionNode main_function_node;
        paramListNode param_list_node;
        varDeclNode var_decl_node;
        strDeclNode str_decl_node;
        assgnDeclNode assgn_decl_node;
        idArDeclNode id_ar_decl_node;
        idIntDeclNode id_int_decl_node;
        idArStrNode id_ar_str_node;
        idIntStrNode id_int_str_node;
        updateNode update_node;
        exprStmtNode expr_stmt_node;
        declStmtNode decl_stmt_node;
        assgnStmtNode assgn_stmt_node;
        ifStmtNode if_stmt_node;
        ifElseStmtNode if_else_stmt_node;
        whileStmtNode while_stmt_node;
        doWhileStmtNode do_while_stmt_node;
        forStmtNode for_stmt_node;
        retStmtNode ret_stmt_node;
        notExprNode not_expr_node;
        logicExprNode logic_expr_node;
        arExprNode ar_expr_node;
        listNode list_node;
        funcCallArgsNode func_call_args_node;
        funcCallNode func_call_node;
        derefNode deref_node;
        addressNode address_node;
    }nodes;
}node;

node *crnode_leaf(char *info, enum leaf_node_type type, enum data_type data_type);

node *crnode_function(char *info, node *id, node *param_list, node *type, node *stmt);

node *crnode_procedure(char *info, node *id, node *param_list, node *stmt); // VOID in type

node *crnode_main_function(char *info, node *param_list, node *stmt);

node *crnode_param_list(char *info, node *ids, node *type); // many ids, how to handle?

node *crnode_var_decl(char *info, node *param_list, node *type);

node *crnode_str_decl(char *info, node *param_list);

node *crnode_assgn_decl(char *info, node *decl_id, node *expr);

node *crnode_id_ar_decl(char *info, node *decl_id, node *expr);

node *crnode_id_int_decl(char *info, node *decl_id, node *integer);

node *crnode_id_ar_str(char *info, node *decl_id, node *expr);

node *crnode_id_int_str(char *info, node *decl_id, node *integer);

node *crnode_update(char *info, node *id, node *expr);

node *crnode_expr_stmt(char *info, node *expr);

node *crnode_decl_stmt(char *info, node *decl);

node *crnode_assgn_stmt(char *info, node *ids, node *expr);

node *crnode_if_stmt(char *info, node *expr, node *stmt);

node *crnode_if_else_stmt(char *info, node *expr, node *stmt, node *elsestmt);

node *crnode_while_stmt(char *info, node *expr, node *stmt);

node *crnode_do_while_stmt(char *info, node *stmt, node *expr);

node *crnode_for_stmt(char *info, node *assgn_stmt, node *expr, node *update, node *stmt);

node *crnode_ret_stmt(char *info, node *expr);

node *crnode_not_expr(char *info, node *expr);

node *crnode_logic_expr(char *info, node *expr1, node *logic, node *expr2);

node *crnode_ar_expr(char *info, node *expr1, node *ar, node *expr2);

node *crnode_func_call_args(char *info, node *id, node *args);

node *crnode_func_call(char *info, node *id);

node *crnode_deref(char *info, node *expr);

node *crnode_address(char *info, node *expr);

node *crnode_list();

// symbol table stuff here

/*typedef struct Symbol {
    char *name;
    enum data_type data_type;
    enum node_type node_type;
}Symbol;*/

typedef struct SymbolTable {
    node **table;
    int size;
    int capacity;
    int top;
    node *local_functions;
    int local_functions_length;
}SymbolTable;

typedef struct ScopeStack {
    SymbolTable **scopestack;
    int size;
    int capacity;
    int top;
}ScopeStack;

typedef struct FunctionInfo {
    char *name;
    int argcount;
    node *args;
    enum node_type node_type;
}FunctionInfo;

typedef struct FunctionTable {
    FunctionInfo **functions;
    int size;
    int capacity;
}FunctionTable;

typedef struct FunctionScopeStack {
    FunctionTable **scopestack;
    int size;
    int capacity;
    int top;
}FunctionScopeStack;

/*typedef struct LocalFunction {
    node *function;
    int scope;
}LocalFunction;*/

void *add_symbol_to_table(node *node, ScopeStack *stack);

void *push_symbol_table(ScopeStack *stack);

void *pop_symbol_table(ScopeStack *stack);

ScopeStack *cr_scope_stack();

void *init_list(node *list_node);

void *free_list(node *list_node);

void add_to_list(node *list, node *item);

void print_tree(node *root, int depth); // int level возможно, смотри примеры

void indent(int depth);

void free_tree(node *root);

void pass_type_tree(node *treenode, ScopeStack *scopeStack, node *global_functions);

void *pass_type_str_decl(node *decl_param_list);

void *pass_type_decl(node *decl_param_list, node *type);

void *pass_type_param_list(node *ids, node *type);

void *pass_type_function(node *id, node *type);

void pass_type_function_scope(node *func_call_id, node *global_function_list, int i);

int find_function(node *func_call_id, node *global_function_list);

void pass_type_else(node *symbol, ScopeStack *stack);

void check_tree(node *treenode);

/*
void *print_stack(ScopeStack *stack);
*/

#endif //MYCOMPILER_NODES_H

