#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "nodes.h"
int startd;

node *crnode_leaf(char *info, enum leaf_node_type type, enum data_type data_type) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = leaf;
    cur_node->nodes.leaf_node.info = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(cur_node->nodes.leaf_node.info, info);
    cur_node->nodes.leaf_node.type = type;
    cur_node->nodes.leaf_node.data_type = data_type;
    return cur_node;
}

node *crnode_function(char *info, node *id, node *param_list, node *type, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = function;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.function_node.id = id;
    cur_node->nodes.function_node.param_list = param_list;
    cur_node->nodes.function_node.type = type;
    cur_node->nodes.function_node.stmt = stmt;
    return cur_node;
}

node *crnode_procedure(char *info, node *id, node *param_list, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = procedure;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.procedure_node.id = id;
    cur_node->nodes.procedure_node.param_list = param_list;
    cur_node->nodes.procedure_node.stmt = stmt;
    return cur_node;
} // VOID in type

node *crnode_main_function(char *info, node *param_list, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = main_function;
    cur_node->nodes.main_function_node.info = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(cur_node->nodes.main_function_node.info, info);
    cur_node->nodes.main_function_node.param_list = param_list;
    cur_node->nodes.main_function_node.stmt = stmt;
    return cur_node;
}

node *crnode_param_list(char *info, node *ids, node *type) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = parameter_list;
    cur_node->nodes.param_list_node.info = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(cur_node->nodes.param_list_node.info, info);
    cur_node->nodes.param_list_node.ids = ids;
    cur_node->nodes.param_list_node.type = type;
    return cur_node;
} // many ids, how to handle?

node *crnode_var_decl(char *info, node *param_list, node *type) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_var;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.var_decl_node.param_list = param_list;
    cur_node->nodes.var_decl_node.type = type;
    return cur_node;
}

node *crnode_str_decl(char *info, node *param_list) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_str;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.str_decl_node.param_list = param_list;
    return cur_node;
}

node *crnode_assgn_decl(char *info, node *decl_id, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_assgn;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.assgn_decl_node.decl_id = decl_id;
    cur_node->nodes.assgn_decl_node.expr = expr;
    return cur_node;
}

node *crnode_id_ar_decl(char *info, node *decl_id, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_id_ar;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.id_ar_decl_node.decl_id = decl_id;
    cur_node->nodes.id_ar_decl_node.expr = expr;
    return cur_node;
}

node *crnode_id_int_decl(char *info, node *decl_id, node *integer) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_id_int;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.id_int_decl_node.decl_id = decl_id;
    cur_node->nodes.id_int_decl_node.integer = integer;
    return cur_node;
}

node *crnode_id_ar_str(char *info, node *str_id, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = str_id_ar;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.id_ar_str_node.str_id = str_id;
    cur_node->nodes.id_ar_str_node.expr = expr;
    return cur_node;
}

node *crnode_id_int_str(char *info, node *str_id, node *integer) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = str_id_int;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.id_int_str_node.str_id = str_id;
    cur_node->nodes.id_int_str_node.integer = integer;
    return cur_node;
}

node *crnode_update(char *info, node *id, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = update;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.update_node.id = id;
    cur_node->nodes.update_node.expr = expr;
    return cur_node;
}

node *crnode_expr_stmt(char *info, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = expr_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.expr_stmt_node.expr = expr;
    return cur_node;
}

node *crnode_decl_stmt(char *info, node *decl) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = decl_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.decl_stmt_node.decl = decl;
    return cur_node;
}

node *crnode_assgn_stmt(char *info, node *ids, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = assgn_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.assgn_stmt_node.ids = ids;
    cur_node->nodes.assgn_stmt_node.expr = expr;
    return cur_node;
}

node *crnode_if_stmt(char *info, node *expr, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = if_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.if_stmt_node.expr = expr;
    cur_node->nodes.if_stmt_node.stmt = stmt;
    return cur_node;
}

node *crnode_if_else_stmt(char *info, node *expr, node *stmt, node *elsestmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = if_else_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.if_else_stmt_node.expr = expr;
    cur_node->nodes.if_else_stmt_node.stmt = stmt;
    cur_node->nodes.if_else_stmt_node.elsestmt = elsestmt;
    return cur_node;
}

node *crnode_while_stmt(char *info, node *expr, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = while_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.while_stmt_node.expr = expr;
    cur_node->nodes.while_stmt_node.stmt = stmt;
    return cur_node;
}

node *crnode_do_while_stmt(char *info, node *stmt, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = do_while_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.do_while_stmt_node.stmt = stmt;
    cur_node->nodes.do_while_stmt_node.expr = expr;
    return cur_node;
}

node *crnode_for_stmt(char *info, node *assgn_stmt, node *expr, node *update, node *stmt) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = for_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.for_stmt_node.assgn_stmt = assgn_stmt;
    cur_node->nodes.for_stmt_node.expr = expr;
    cur_node->nodes.for_stmt_node.update = update;
    cur_node->nodes.for_stmt_node.stmt = stmt;
    return cur_node;
}

node *crnode_ret_stmt(char *info, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = ret_statement;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.ret_stmt_node.expr = expr;
    return cur_node;
}

node *crnode_not_expr(char *info, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = not_expression;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.not_expr_node.expr = expr;
    return cur_node;
}

node *crnode_logic_expr(char *info, node *expr1, node *logic, node *expr2) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = logic_expression;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.logic_expr_node.expr1 = expr1;
    cur_node->nodes.logic_expr_node.logic = logic;
    cur_node->nodes.logic_expr_node.expr2 = expr2;
    return cur_node;
}

node *crnode_ar_expr(char *info, node *expr1, node *ar, node *expr2) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = ar_expression;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.ar_expr_node.expr1 = expr1;
    cur_node->nodes.ar_expr_node.ar = ar;
    cur_node->nodes.ar_expr_node.expr2 = expr2;
    return cur_node;
}

node *crnode_func_call_args(char *info, node *id, node *args) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = func_call_args;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.func_call_args_node.id = id;
    cur_node->nodes.func_call_args_node.args = args;
    return cur_node;
}

node *crnode_func_call(char *info, node *id) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = func_call;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.func_call_node.id = id;
    return cur_node;
}


node *crnode_deref(char *info, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = deref;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.deref_node.expr = expr;
    return cur_node;
}

node *crnode_address(char *info, node *expr) {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = address;
    char *str = (char*) malloc(sizeof(info) + 1); // !!!
    strcpy(str, info);
    cur_node->nodes.address_node.expr = expr;
    return cur_node;
}

node *crnode_list() {
    node *cur_node = (node*) malloc(sizeof(node));
    cur_node->node_type = list;
    node **list_nodes = (node**) malloc(sizeof(node*) * 10);
    cur_node->nodes.list_node.list = list_nodes;
    cur_node->nodes.list_node.num = 1;
    cur_node->nodes.list_node.length = 0;
    return cur_node;
}
/*
void *init_list(node *list_node) {
    if (list_node == NULL) {
        list_node = crnode_list();
    }
}
*/
void *free_list(node *list_node) {
    free(list_node->nodes.list_node.list);
    free(list_node);
    return list_node;
}

void add_to_list(node *list, node *item) {
    int list_lenght = list->nodes.list_node.num;
    //printf("%d\n", list_lenght);
    //printf("%s", item->nodes.leaf_node.info);
    list->nodes.list_node.list[list_lenght-1] = item;
    list->nodes.list_node.num++;
    list->nodes.list_node.length++;
    // list->nodes.list_node.list = realloc(list->nodes.list_node.list, (list_lenght) * sizeof(node*));
}

void print_tree(node *treenode, int depth) {
    if (!treenode) {
        return;
    }
    switch (treenode->node_type) {
        case leaf:
            switch (treenode->nodes.leaf_node.type) {
                case id_list:
                    printf("%s ", treenode->nodes.leaf_node.info);
                    break;
                case decl_id:
                    printf("%s ", treenode->nodes.leaf_node.info);
                    break;
                default:
                    printf("%s", treenode->nodes.leaf_node.info);
                    break;
            }
            break;
        case main_function:
            indent(depth);

            printf("MAIN_FUNC ");
            if (treenode->nodes.main_function_node.param_list) {
                printf("\n");
                depth++;
                indent(depth);
                print_tree(treenode->nodes.main_function_node.param_list, depth);
            }
            printf("\n");
            depth++;
            indent(depth);
            printf("RET_TYPE: void");
            if (treenode->nodes.main_function_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.main_function_node.stmt, depth);
            }
            printf("\n");
            break;
        case function:
            indent(depth);
            printf("FUNC ");
            if (treenode->nodes.function_node.id) {
                print_tree(treenode->nodes.function_node.id, depth);
            }
            if (treenode->nodes.function_node.param_list) {
                printf("\n");
                depth++;
                indent(depth);
                print_tree(treenode->nodes.function_node.param_list, depth);
            }
            if (treenode->nodes.function_node.type) {
                printf("\n");
                depth++;
                indent(depth);
                printf("RET_TYPE: ");
                print_tree(treenode->nodes.function_node.type, depth);
            }
            if (treenode->nodes.function_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.function_node.stmt, depth);
            }
            printf("\n");
            break;
        case procedure:
            indent(depth);

            printf("PROC ");
            if (treenode->nodes.procedure_node.id) {
                print_tree(treenode->nodes.procedure_node.id, depth);
            }
            if (treenode->nodes.procedure_node.param_list) {
                print_tree(treenode->nodes.procedure_node.param_list, depth);
            }
            printf("\n");
            indent(depth);
            printf("RET_TYPE: void");
            if (treenode->nodes.procedure_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.procedure_node.stmt, depth);
            }
            printf("\n");
            break;
        case parameter_list:
            int length = treenode->nodes.param_list_node.ids->nodes.list_node.length;
            printf("length\n: %d", length);
            printf("type: %u\n", treenode->nodes.param_list_node.ids->nodes.list_node.list[0]->nodes.leaf_node.data_type);
            printf("(");
            printf("PARAM_LIST: ");
            if (treenode->nodes.param_list_node.ids) {
                print_tree(treenode->nodes.param_list_node.ids, depth);
            }
            if (treenode->nodes.param_list_node.type) {
                printf("PARAM_TYPE: ");
                print_tree(treenode->nodes.param_list_node.type, depth);
            }
            printf(") ");
            break;
        case list:
            //int list_lenght = sizeof(treenode->nodes.list_node.list) / sizeof(treenode->nodes.list_node.list[0]);
            for (int i = 0; i < treenode->nodes.list_node.num - 1; i++) { // make another loop for ids !!!!
                print_tree(treenode->nodes.list_node.list[i], depth);
                //printf(" ");
            }
            break;
        case decl_var:
            printf("VAR_DECL ");
            if (treenode->nodes.var_decl_node.param_list) {
                print_tree(treenode->nodes.var_decl_node.param_list, depth);
            }
            printf(" ");
            if (treenode->nodes.var_decl_node.type) {
                printf("TYPE: ");
                print_tree(treenode->nodes.var_decl_node.type, depth);
            }
            break;
        case decl_str:
            printf("STR_DECL ");
            if (treenode->nodes.str_decl_node.param_list) {
                print_tree(treenode->nodes.str_decl_node.param_list, depth);
            }
            break;
        case decl_assgn:
            if (treenode->nodes.assgn_decl_node.decl_id) {
                print_tree(treenode->nodes.assgn_decl_node.decl_id, depth);
            }
            printf(" = ");
            if (treenode->nodes.assgn_decl_node.expr) {
                print_tree(treenode->nodes.assgn_decl_node.expr, depth);
            }
            break;
        case decl_id_ar:
            if (treenode->nodes.id_ar_decl_node.decl_id) {
                print_tree(treenode->nodes.id_ar_decl_node.decl_id, depth);
            }
            printf("[");
            if (treenode->nodes.id_ar_decl_node.expr) {
                print_tree(treenode->nodes.id_ar_decl_node.expr, depth);
            }
            printf("]");
            break;
        case decl_id_int:
            if (treenode->nodes.id_int_decl_node.decl_id) {
                print_tree(treenode->nodes.id_int_decl_node.decl_id, depth);
            }
            printf("[");
            if (treenode->nodes.id_int_decl_node.integer) {
                print_tree(treenode->nodes.id_int_decl_node.integer, depth);
            }
            printf("]");
            break;
        case str_id_ar:
            if (treenode->nodes.id_ar_str_node.str_id) {
                print_tree(treenode->nodes.id_ar_str_node.str_id, depth);
            }
            printf("[");
            if (treenode->nodes.id_ar_str_node.expr) {
                print_tree(treenode->nodes.id_ar_str_node.expr, depth);
            }
            printf("]");
            break;
        case str_id_int:
            if (treenode->nodes.id_int_str_node.str_id) {
                print_tree(treenode->nodes.id_int_str_node.str_id, depth);
            }
            printf("[");
            if (treenode->nodes.id_int_str_node.integer) {
                print_tree(treenode->nodes.id_int_str_node.integer, depth);
            }
            printf("]");
            break;
        case update:
            if (treenode->nodes.update_node.id) {
                print_tree(treenode->nodes.update_node.id, depth);
            }
            printf(" = ");
            if (treenode->nodes.update_node.expr) {
                print_tree(treenode->nodes.update_node.expr, depth);
            }
            break;
        case decl_statement:
            indent(depth);
            if (treenode->nodes.decl_stmt_node.decl) {
                print_tree(treenode->nodes.decl_stmt_node.decl, depth);
            }
            printf("\n");
            break;
        case assgn_statement:
            indent(depth);
            printf("ASSGN_STMT: ");
            if (treenode->nodes.assgn_stmt_node.ids) {
                print_tree(treenode->nodes.assgn_stmt_node.ids, depth);
            }
            printf("= ");
            if (treenode->nodes.assgn_stmt_node.expr) {
                print_tree(treenode->nodes.assgn_stmt_node.expr, depth);
            }
            printf("\n");
            break;
        case expr_statement:
            indent(depth);
            if (treenode->nodes.expr_stmt_node.expr) {
                print_tree(treenode->nodes.expr_stmt_node.expr, depth);
            }
            printf("\n");
            break;
        case if_statement:
            indent(depth);
            printf("IF_STMT: ");
            if (treenode->nodes.if_stmt_node.expr) {
                printf("\n");
                depth++;
                indent(depth);
                printf("CONDITION: ");
                print_tree(treenode->nodes.if_stmt_node.expr, depth);
            }
            if (treenode->nodes.if_stmt_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.if_stmt_node.stmt, depth);
            }
            break;
        case if_else_statement:
            indent(depth);
            printf("IF_STMT: ");
            if (treenode->nodes.if_else_stmt_node.expr) {
                printf("\n");
                depth++;
                indent(depth);
                printf("CONDITION: ");
                print_tree(treenode->nodes.if_else_stmt_node.expr, depth);
            }
            if (treenode->nodes.if_else_stmt_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.if_else_stmt_node.stmt, depth);
            }
            indent(depth);
            printf("ELSE_STMT: ");
            printf("\n");
            depth++;
            if (treenode->nodes.if_else_stmt_node.elsestmt) {
                print_tree(treenode->nodes.if_else_stmt_node.elsestmt, depth);
            }
            break;
        case while_statement:
            indent(depth);
            printf("WHILE_STMT: ");
            if (treenode->nodes.while_stmt_node.expr) {
                depth++;
                indent(depth);
                printf("\n");
                indent(depth);
                printf("CONDITION: ");
                print_tree(treenode->nodes.while_stmt_node.expr, depth);
            }
            if (treenode->nodes.while_stmt_node.stmt) {
                printf("\n");
                print_tree(treenode->nodes.while_stmt_node.stmt, depth);
            }
            break;
        case do_while_statement:
            indent(depth);
            printf("DO_WHILE_STMT: ");
            if (treenode->nodes.do_while_stmt_node.stmt) {
                printf("\n");
                depth++;
                print_tree(treenode->nodes.do_while_stmt_node.stmt, depth);
            }
            if (treenode->nodes.do_while_stmt_node.expr) {
                indent(depth);
                printf("CONDITION: ");
                print_tree(treenode->nodes.do_while_stmt_node.expr, depth);
            }
            printf("\n");
            break;
        case for_statement:
            indent(depth);
            printf("FOR_STMT: ");
            if (treenode->nodes.for_stmt_node.assgn_stmt) {
                depth++;
                indent(depth);
                printf("\n");
                print_tree(treenode->nodes.for_stmt_node.assgn_stmt, depth);
            }
            if (treenode->nodes.for_stmt_node.expr) {
                depth++;
                indent(depth);
                printf("END_CONDITION: ");
                print_tree(treenode->nodes.for_stmt_node.expr, depth);
            }
            if (treenode->nodes.for_stmt_node.update) {
                printf("\n");
                depth++;
                indent(depth);
                printf("ITER_CONDITION: ");
                print_tree(treenode->nodes.for_stmt_node.update, depth);
            }
            printf("\n");
            depth++;
            if (treenode->nodes.for_stmt_node.stmt) {
                print_tree(treenode->nodes.for_stmt_node.stmt, depth);
            }
            break;
        case ret_statement:
            indent(depth);
            printf("RET_STMT: ");
            if (treenode->nodes.ret_stmt_node.expr) {
                print_tree(treenode->nodes.ret_stmt_node.expr, depth);
            }
            break;
        case not_expression:
            printf("!");
            if (treenode->nodes.not_expr_node.expr) {
                print_tree(treenode->nodes.not_expr_node.expr, depth);
            }
            break;
        case logic_expression:
            if (treenode->nodes.logic_expr_node.expr1) {
                print_tree(treenode->nodes.logic_expr_node.expr1, depth);
            }
            if (treenode->nodes.logic_expr_node.logic) {
                print_tree(treenode->nodes.logic_expr_node.logic, depth);
            }
            if (treenode->nodes.logic_expr_node.expr2) {
                print_tree(treenode->nodes.logic_expr_node.expr2, depth);
            }
            break;
        case ar_expression:
            if (treenode->nodes.ar_expr_node.expr1) {
                print_tree(treenode->nodes.ar_expr_node.expr1, depth);
            }
            if (treenode->nodes.ar_expr_node.ar) {
                print_tree(treenode->nodes.ar_expr_node.ar, depth);
            }
            if (treenode->nodes.ar_expr_node.expr2) {
                print_tree(treenode->nodes.ar_expr_node.expr2, depth);
            }
            break;
        case func_call:
            printf("FUNC_CALL: ");
            if (treenode->nodes.func_call_node.id) {
                print_tree(treenode->nodes.func_call_node.id, depth);
            }
            break;
        case func_call_args:
            printf("FUNC_CALL: ");
            if (treenode->nodes.func_call_args_node.id) {
                print_tree(treenode->nodes.func_call_args_node.id, depth);
            }
            printf(" ARGS: ");
            if (treenode->nodes.func_call_args_node.args) {
                print_tree(treenode->nodes.func_call_args_node.args, depth);
            }
            break;
        case deref:
            printf("*");
            if (treenode->nodes.deref_node.expr) {
                print_tree(treenode->nodes.deref_node.expr, depth);
            }
            break;
        case address:
            printf("&");
            if (treenode->nodes.address_node.expr) {
                print_tree(treenode->nodes.address_node.expr, depth);
            }
            break;
    }
}

void analyze_tree(node *treenode) {
    if (!treenode) {
        return;
    }
    switch (treenode->node_type) {
        case leaf:
            switch (treenode->nodes.leaf_node.type) {
                case id_list:
                    
                    break;
                case decl_id:
                    
                    break;
                default:
                    
                    break;
            }
            break;
        case main_function:
            

            
            if (treenode->nodes.main_function_node.param_list) {
                
                
                
                
            }
            
            
            
            
            if (treenode->nodes.main_function_node.stmt) {
                
                
                
            }
            
            break;
        case function:
            
            
            if (treenode->nodes.function_node.id) {
                
            }
            if (treenode->nodes.function_node.param_list) {
                
                
                
                
            }
            if (treenode->nodes.function_node.type) {
                
                
                
                
                
            }
            if (treenode->nodes.function_node.stmt) {
                
                
                
            }
            
            break;
        case procedure:
            

            
            if (treenode->nodes.procedure_node.id) {
                
            }
            if (treenode->nodes.procedure_node.param_list) {
                
            }
            
            
            
            if (treenode->nodes.procedure_node.stmt) {
                
                
                
            }
            
            break;
        case parameter_list:
            
            
            if (treenode->nodes.param_list_node.ids) {
                
            }
            if (treenode->nodes.param_list_node.type) {
                
                
            }
            
            break;
        case list:
            //int list_lenght = sizeof(treenode->nodes.list_node.list) / sizeof(treenode->nodes.list_node.list[0]);
            for (int i = 0; i < treenode->nodes.list_node.num - 1; i++) { // make another loop for ids !!!!
                
                //
            }
            break;
        case decl_var:
            
            if (treenode->nodes.var_decl_node.param_list) {
                
            }
            
            if (treenode->nodes.var_decl_node.type) {
                
                
            }
            break;
        case decl_str:
            
            if (treenode->nodes.str_decl_node.param_list) {
                
            }
            break;
        case decl_assgn:
            if (treenode->nodes.assgn_decl_node.decl_id) {
                
            }
            
            if (treenode->nodes.assgn_decl_node.expr) {
                
            }
            break;
        case decl_id_ar:
            if (treenode->nodes.id_ar_decl_node.decl_id) {
                
            }
            
            if (treenode->nodes.id_ar_decl_node.expr) {
                
            }
            
            break;
        case decl_id_int:
            if (treenode->nodes.id_int_decl_node.decl_id) {
                
            }
            
            if (treenode->nodes.id_int_decl_node.integer) {
                
            }
            
            break;
        case str_id_ar:
            if (treenode->nodes.id_ar_str_node.str_id) {

            }
            if (treenode->nodes.id_ar_str_node.expr) {

            }
            break;
        case str_id_int:
            if (treenode->nodes.id_int_str_node.str_id) {

            }
            if (treenode->nodes.id_int_str_node.integer) {

            }
            break;
        case update:
            if (treenode->nodes.update_node.id) {
                
            }
            
            if (treenode->nodes.update_node.expr) {
                
            }
            break;
        case decl_statement:
            
            if (treenode->nodes.decl_stmt_node.decl) {
                
            }
            
            break;
        case assgn_statement:
            
            
            if (treenode->nodes.assgn_stmt_node.ids) {
                
            }
            
            if (treenode->nodes.assgn_stmt_node.expr) {
                
            }
            
            break;
        case expr_statement:
            
            if (treenode->nodes.expr_stmt_node.expr) {
                
            }
            
            break;
        case if_statement:
            
            
            if (treenode->nodes.if_stmt_node.expr) {
                
                
                
                
                
            }
            if (treenode->nodes.if_stmt_node.stmt) {
                
                
                
            }
            break;
        case if_else_statement:
            
            
            if (treenode->nodes.if_else_stmt_node.expr) {
                
                
                
                
                
            }
            if (treenode->nodes.if_else_stmt_node.stmt) {
                
                
                
            }
            
            
            
            
            if (treenode->nodes.if_else_stmt_node.elsestmt) {
                
            }
            break;
        case while_statement:
            
            
            if (treenode->nodes.while_stmt_node.expr) {
                
                
                
                
                
                
            }
            if (treenode->nodes.while_stmt_node.stmt) {
                
                
            }
            break;
        case do_while_statement:
            
            
            if (treenode->nodes.do_while_stmt_node.stmt) {
                
                
                
            }
            if (treenode->nodes.do_while_stmt_node.expr) {
                
                
                
            }
            
            break;
        case for_statement:
            
            
            if (treenode->nodes.for_stmt_node.assgn_stmt) {
                
                
                
                
            }
            if (treenode->nodes.for_stmt_node.expr) {
                
                
                
                
            }
            if (treenode->nodes.for_stmt_node.update) {
                
                
                
                
                
            }
            
            
            if (treenode->nodes.for_stmt_node.stmt) {
                
            }
            break;
        case ret_statement:
            
            
            if (treenode->nodes.ret_stmt_node.expr) {
                
            }
            break;
        case not_expression:
            
            if (treenode->nodes.not_expr_node.expr) {
                
            }
            break;
        case logic_expression:
            if (treenode->nodes.logic_expr_node.expr1) {
                
            }
            if (treenode->nodes.logic_expr_node.logic) {
                
            }
            if (treenode->nodes.logic_expr_node.expr2) {
                
            }
            break;
        case ar_expression:
            if (treenode->nodes.ar_expr_node.expr1) {
                
            }
            if (treenode->nodes.ar_expr_node.ar) {
                
            }
            if (treenode->nodes.ar_expr_node.expr2) {
                
            }
            break;
        case func_call:
            
            if (treenode->nodes.func_call_node.id) {
                
            }
            break;
        case func_call_args:
            
            if (treenode->nodes.func_call_args_node.id) {
                
            }
            
            if (treenode->nodes.func_call_args_node.args) {
                
            }
            break;
        case deref:
            
            if (treenode->nodes.deref_node.expr) {
                
            }
            break;
        case address:
            
            if (treenode->nodes.address_node.expr) {
                
            }
            break;
    }
}

void indent(int depth) {
    for (int i = depth; i >= 0; i--) {
        printf("\t");
    }
}

void *pass_type_str_decl(node *decl_param_list) {
    for (int i = 0; i < decl_param_list->nodes.list_node.length; ++i) {
        if (decl_param_list->nodes.list_node.list[i]->node_type == leaf) {
            decl_param_list->nodes.list_node.list[i]->nodes.leaf_node.data_type = type_string;
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_id_ar) {
            decl_param_list->nodes.list_node.list[i]->nodes.id_ar_decl_node.decl_id->nodes.leaf_node.data_type = type_string;
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_id_int) {
            decl_param_list->nodes.list_node.list[i]->nodes.id_int_decl_node.decl_id->nodes.leaf_node.data_type = type_string;
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_assgn) {
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == leaf) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.leaf_node.data_type = type_string;
            }
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == decl_id_ar) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.id_ar_decl_node.decl_id->nodes.leaf_node.data_type = type_string;
            }
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == decl_id_int) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.id_int_decl_node.decl_id->nodes.leaf_node.data_type = type_string;
            }
        }
    }
}

void *pass_type_decl(node *decl_param_list, node *type) {
    for (int i = 0; i < decl_param_list->nodes.list_node.length; ++i) {
        if (decl_param_list->nodes.list_node.list[i]->node_type == leaf) {
            decl_param_list->nodes.list_node.list[i]->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
            //printf("%u\n", decl_param_list->nodes.list_node.list[i]->nodes.leaf_node.data_type);
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_id_ar) {
            decl_param_list->nodes.list_node.list[i]->nodes.id_ar_decl_node.decl_id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_id_int) {
            decl_param_list->nodes.list_node.list[i]->nodes.id_int_decl_node.decl_id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
        }
        if (decl_param_list->nodes.list_node.list[i]->node_type == decl_assgn) {
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == leaf) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
            }
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == decl_id_ar) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.id_ar_decl_node.decl_id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
            }
            if (decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->node_type == decl_id_int) {
                decl_param_list->nodes.list_node.list[i]->nodes.assgn_decl_node.decl_id->nodes.id_int_decl_node.decl_id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
            }
        }
    }
}

void *pass_type_func(node *ids, node *type) {
    for (int i = 0; i < ids->nodes.list_node.length; ++i) {
        ids->nodes.list_node.list[i]->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
        /*printf("type: %u\n", ids->nodes.list_node.list[i]->nodes.leaf_node.data_type);
        printf("length: %zu", ids->nodes.list_node.length);*/
    }
}

/*void free_tree(node *root) {
    if (!treenode) {
        return;
    }
    switch (treenode->node_type) {
        case leaf:
            switch (treenode->nodes.leaf_node.type) {
                case id_list:

                    break;
                case decl_id:

                    break;
                default:

                    break;
            }
            break;
        case main_function:



            if (treenode->nodes.main_function_node.param_list) {




            }




            if (treenode->nodes.main_function_node.stmt) {



            }

            break;
        case function:


            if (treenode->nodes.function_node.id) {

            }
            if (treenode->nodes.function_node.param_list) {




            }
            if (treenode->nodes.function_node.type) {





            }
            if (treenode->nodes.function_node.stmt) {



            }

            break;
        case procedure:



            if (treenode->nodes.procedure_node.id) {

            }
            if (treenode->nodes.procedure_node.param_list) {

            }



            if (treenode->nodes.procedure_node.stmt) {



            }

            break;
        case parameter_list:


            if (treenode->nodes.param_list_node.ids) {

            }
            if (treenode->nodes.param_list_node.type) {


            }

            break;
        case list:
            //int list_lenght = sizeof(treenode->nodes.list_node.list) / sizeof(treenode->nodes.list_node.list[0]);
            for (int i = 0; i < treenode->nodes.list_node.num - 1; i++) { // make another loop for ids !!!!

                //
            }
            break;
        case decl_var:

            if (treenode->nodes.var_decl_node.param_list) {

            }

            if (treenode->nodes.var_decl_node.type) {


            }
            break;
        case decl_str:

            if (treenode->nodes.str_decl_node.param_list) {

            }
            break;
        case decl_assgn:
            if (treenode->nodes.assgn_decl_node.decl_id) {

            }

            if (treenode->nodes.assgn_decl_node.expr) {

            }
            break;
        case decl_id_ar:
            if (treenode->nodes.id_ar_decl_node.decl_id) {

            }

            if (treenode->nodes.id_ar_decl_node.expr) {

            }

            break;
        case decl_id_int:
            if (treenode->nodes.id_int_decl_node.decl_id) {

            }

            if (treenode->nodes.id_int_decl_node.integer) {

            }

            break;
        case update:
            if (treenode->nodes.update_node.id) {

            }

            if (treenode->nodes.update_node.expr) {

            }
            break;
        case decl_statement:

            if (treenode->nodes.decl_stmt_node.decl) {

            }

            break;
        case assgn_statement:


            if (treenode->nodes.assgn_stmt_node.ids) {

            }

            if (treenode->nodes.assgn_stmt_node.expr) {

            }

            break;
        case expr_statement:

            if (treenode->nodes.expr_stmt_node.expr) {

            }

            break;
        case if_statement:


            if (treenode->nodes.if_stmt_node.expr) {





            }
            if (treenode->nodes.if_stmt_node.stmt) {



            }
            break;
        case if_else_statement:


            if (treenode->nodes.if_else_stmt_node.expr) {





            }
            if (treenode->nodes.if_else_stmt_node.stmt) {



            }




            if (treenode->nodes.if_else_stmt_node.elsestmt) {

            }
            break;
        case while_statement:


            if (treenode->nodes.while_stmt_node.expr) {






            }
            if (treenode->nodes.while_stmt_node.stmt) {


            }
            break;
        case do_while_statement:


            if (treenode->nodes.do_while_stmt_node.stmt) {



            }
            if (treenode->nodes.do_while_stmt_node.expr) {



            }

            break;
        case for_statement:


            if (treenode->nodes.for_stmt_node.assgn_stmt) {




            }
            if (treenode->nodes.for_stmt_node.expr) {




            }
            if (treenode->nodes.for_stmt_node.update) {





            }


            if (treenode->nodes.for_stmt_node.stmt) {

            }
            break;
        case ret_statement:


            if (treenode->nodes.ret_stmt_node.expr) {

            }
            break;
        case not_expression:

            if (treenode->nodes.not_expr_node.expr) {

            }
            break;
        case logic_expression:
            if (treenode->nodes.logic_expr_node.expr1) {

            }
            if (treenode->nodes.logic_expr_node.logic) {

            }
            if (treenode->nodes.logic_expr_node.expr2) {

            }
            break;
        case ar_expression:
            if (treenode->nodes.ar_expr_node.expr1) {

            }
            if (treenode->nodes.ar_expr_node.ar) {

            }
            if (treenode->nodes.ar_expr_node.expr2) {

            }
            break;
        case func_call:

            if (treenode->nodes.func_call_node.id) {

            }
            break;
        case func_call_args:

            if (treenode->nodes.func_call_args_node.id) {

            }

            if (treenode->nodes.func_call_args_node.args) {

            }
            break;
        case deref:

            if (treenode->nodes.deref_node.expr) {

            }
            break;
        case address:

            if (treenode->nodes.address_node.expr) {

            }
            break;
    }
}*/
