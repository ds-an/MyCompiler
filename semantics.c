#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "nodes.h"

void pass_type_tree(node *treenode, ScopeStack *scopeStack, node *global_functions) {
    //pop_symbol_table(scopeStack);
    if (!treenode) {
        return;
    }
    switch (treenode->node_type) {
        case leaf:
            if (!(treenode->nodes.leaf_node.type == logic_op ||
                  treenode->nodes.leaf_node.type == ar_op ||
                  treenode->nodes.leaf_node.type == literal ||
                  treenode->nodes.leaf_node.type == decl_id_integer ||
                  treenode->nodes.leaf_node.type == str_id_integer ||
                  treenode->nodes.leaf_node.type == func_type ||
                  treenode->nodes.leaf_node.type == param_type ||
                  treenode->nodes.leaf_node.type == func_call_id)) {
                pass_type_else(treenode, scopeStack);
                add_symbol_to_table(treenode, scopeStack);
                printf("The current scope is: %d\n", scopeStack->top);
                printf("%s\n", treenode->nodes.leaf_node.info);
                //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                printf("%d\n", treenode->nodes.leaf_node.data_type);
                //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
            }

            break;
        case main_function:
            push_symbol_table(scopeStack);


            if (treenode->nodes.main_function_node.param_list) {



                pass_type_tree(treenode->nodes.main_function_node.param_list, scopeStack, global_functions);
            }




            if (treenode->nodes.main_function_node.stmt) {


                pass_type_tree(treenode->nodes.main_function_node.stmt, scopeStack, global_functions);
            }
            pop_symbol_table(scopeStack);
            break;
        case function:
            if (scopeStack->top == 0) {
                add_to_list(global_functions, treenode);
                printf("Added function to the global list: %s\n", treenode->nodes.function_node.id->nodes.leaf_node.info);
            }
            if (scopeStack->top > 0) {
                add_to_list(scopeStack->scopestack[scopeStack->top]->local_functions, treenode);
                scopeStack->scopestack[scopeStack->top]->local_functions_length++;
                printf("Added function to the local list: %s, "
                       "in scope %d\n", treenode->nodes.function_node.id->nodes.leaf_node.info, scopeStack->top);
            }
            push_symbol_table(scopeStack);

            if (treenode->nodes.function_node.id) {
                pass_type_tree(treenode->nodes.function_node.id, scopeStack, global_functions);
            }
            if (treenode->nodes.function_node.param_list) {



                pass_type_tree(treenode->nodes.function_node.param_list, scopeStack, global_functions);
            }
            if (treenode->nodes.function_node.type) {




                pass_type_tree(treenode->nodes.function_node.type, scopeStack, global_functions);
            }
            if (treenode->nodes.function_node.stmt) {


                pass_type_tree(treenode->nodes.function_node.stmt, scopeStack, global_functions);
            }
            pop_symbol_table(scopeStack);
            break;
        case procedure:
            if (scopeStack->top == 0) {
                add_to_list(global_functions, treenode);
                printf("Added function to the global list: %s\n", treenode->nodes.procedure_node.id->nodes.leaf_node.info);
            }
            if (scopeStack->top > 0) {
                add_to_list(scopeStack->scopestack[scopeStack->top]->local_functions, treenode);
                scopeStack->scopestack[scopeStack->top]->local_functions_length++;
                printf("Added function to the local list: %s, "
                       "in scope %d\n", treenode->nodes.function_node.id->nodes.leaf_node.info, scopeStack->top);
            }
            push_symbol_table(scopeStack);


            if (treenode->nodes.procedure_node.id) {
                pass_type_tree(treenode->nodes.procedure_node.id, scopeStack, global_functions);
            }
            if (treenode->nodes.procedure_node.param_list) {
                pass_type_tree(treenode->nodes.procedure_node.param_list, scopeStack, global_functions);
            }



            if (treenode->nodes.procedure_node.stmt) {


                pass_type_tree(treenode->nodes.procedure_node.stmt, scopeStack, global_functions);
            }
            pop_symbol_table(scopeStack);
            break;
        case parameter_list:
            /*for (int i = 0; i < treenode->nodes.param_list_node.ids->nodes.list_node.length; ++i) {
                node *mynode = treenode->nodes.param_list_node.ids->nodes.list_node.list[i];
                add_symbol_to_table(mynode,
                                    scopeStack);
            }
            printf("%d\n", scopeStack, global_functions->scopestack[0]->size);*/
            if (treenode->nodes.param_list_node.ids) {
                pass_type_tree(treenode->nodes.param_list_node.ids, scopeStack, global_functions);
            }
            if (treenode->nodes.param_list_node.type) {

                pass_type_tree(treenode->nodes.param_list_node.type, scopeStack, global_functions);
            }

            break;
        case list:
            if (treenode->nodes.list_node.list_type == block_statement) {
                push_symbol_table(scopeStack);
            }
            for (int i = 0; i < treenode->nodes.list_node.num - 1; i++) { // make another loop for ids !!!!
                pass_type_tree(treenode->nodes.list_node.list[i], scopeStack, global_functions);
                //
            }
            if (treenode->nodes.list_node.list_type == block_statement) {
                pop_symbol_table(scopeStack);
            }
            break;
        case decl_var:

            if (treenode->nodes.var_decl_node.param_list) {
                pass_type_tree(treenode->nodes.var_decl_node.param_list, scopeStack, global_functions);
            }

            if (treenode->nodes.var_decl_node.type) {

                pass_type_tree(treenode->nodes.var_decl_node.type, scopeStack, global_functions);
            }
            break;
        case decl_str:

            if (treenode->nodes.str_decl_node.param_list) {
                pass_type_tree(treenode->nodes.str_decl_node.param_list, scopeStack, global_functions);
            }
            break;
        case decl_assgn:
            if (treenode->nodes.assgn_decl_node.decl_id) {
                pass_type_tree(treenode->nodes.assgn_decl_node.decl_id, scopeStack, global_functions);
            }

            if (treenode->nodes.assgn_decl_node.expr) {
                pass_type_tree(treenode->nodes.assgn_decl_node.expr, scopeStack, global_functions);
            }
            break;
        case decl_id_ar:
            if (treenode->nodes.id_ar_decl_node.decl_id) {
                pass_type_tree(treenode->nodes.id_ar_decl_node.decl_id, scopeStack, global_functions);
            }

            if (treenode->nodes.id_ar_decl_node.expr) {
                pass_type_tree(treenode->nodes.id_ar_decl_node.expr, scopeStack, global_functions);
            }

            break;
        case decl_id_int:
            if (treenode->nodes.id_int_decl_node.decl_id) {
                pass_type_tree(treenode->nodes.id_int_decl_node.decl_id, scopeStack, global_functions);
            }

            if (treenode->nodes.id_int_decl_node.integer) {
                pass_type_tree(treenode->nodes.id_int_decl_node.integer, scopeStack, global_functions);
            }

            break;
        case str_id_ar:
            if (treenode->nodes.id_ar_str_node.str_id) {
                pass_type_tree(treenode->nodes.id_ar_str_node.str_id, scopeStack, global_functions);
            }

            if (treenode->nodes.id_ar_str_node.expr) {
                pass_type_tree(treenode->nodes.id_ar_str_node.expr, scopeStack, global_functions);
            }

            break;
        case str_id_int:
            if (treenode->nodes.id_int_str_node.str_id) {
                pass_type_tree(treenode->nodes.id_int_str_node.str_id, scopeStack, global_functions);
            }

            if (treenode->nodes.id_int_str_node.integer) {
                pass_type_tree(treenode->nodes.id_int_str_node.integer, scopeStack, global_functions);
            }

            break;
        case update:
            if (treenode->nodes.update_node.id) {
                pass_type_tree(treenode->nodes.update_node.id, scopeStack, global_functions);
            }

            if (treenode->nodes.update_node.expr) {
                pass_type_tree(treenode->nodes.update_node.expr, scopeStack, global_functions);
            }
            break;
        case decl_statement:

            if (treenode->nodes.decl_stmt_node.decl) {
                pass_type_tree(treenode->nodes.decl_stmt_node.decl, scopeStack, global_functions);
            }

            break;
        case assgn_statement:


            if (treenode->nodes.assgn_stmt_node.ids) {
                pass_type_tree(treenode->nodes.assgn_stmt_node.ids, scopeStack, global_functions);
            }

            if (treenode->nodes.assgn_stmt_node.expr) {
                pass_type_tree(treenode->nodes.assgn_stmt_node.expr, scopeStack, global_functions);
            }

            break;
        case expr_statement:

            if (treenode->nodes.expr_stmt_node.expr) {
                pass_type_tree(treenode->nodes.expr_stmt_node.expr, scopeStack, global_functions);
            }

            break;
        case if_statement:


            if (treenode->nodes.if_stmt_node.expr) {




                pass_type_tree(treenode->nodes.if_stmt_node.expr, scopeStack, global_functions);
            }
            if (treenode->nodes.if_stmt_node.stmt) {


                pass_type_tree(treenode->nodes.if_stmt_node.stmt, scopeStack, global_functions);
            }
            break;
        case if_else_statement:


            if (treenode->nodes.if_else_stmt_node.expr) {




                pass_type_tree(treenode->nodes.if_else_stmt_node.expr, scopeStack, global_functions);
            }
            if (treenode->nodes.if_else_stmt_node.stmt) {


                pass_type_tree(treenode->nodes.if_else_stmt_node.stmt, scopeStack, global_functions);
            }




            if (treenode->nodes.if_else_stmt_node.elsestmt) {
                pass_type_tree(treenode->nodes.if_else_stmt_node.elsestmt, scopeStack, global_functions);
            }
            break;
        case while_statement:


            if (treenode->nodes.while_stmt_node.expr) {





                pass_type_tree(treenode->nodes.while_stmt_node.expr, scopeStack, global_functions);
            }
            if (treenode->nodes.while_stmt_node.stmt) {

                pass_type_tree(treenode->nodes.while_stmt_node.stmt, scopeStack, global_functions);
            }
            break;
        case do_while_statement:


            if (treenode->nodes.do_while_stmt_node.stmt) {


                pass_type_tree(treenode->nodes.do_while_stmt_node.stmt, scopeStack, global_functions);
            }
            if (treenode->nodes.do_while_stmt_node.expr) {


                pass_type_tree(treenode->nodes.do_while_stmt_node.expr, scopeStack, global_functions);
            }

            break;
        case for_statement:


            if (treenode->nodes.for_stmt_node.assgn_stmt) {



                pass_type_tree(treenode->nodes.for_stmt_node.assgn_stmt, scopeStack, global_functions);
            }
            if (treenode->nodes.for_stmt_node.expr) {



                pass_type_tree(treenode->nodes.for_stmt_node.expr, scopeStack, global_functions);
            }
            if (treenode->nodes.for_stmt_node.update) {




                pass_type_tree(treenode->nodes.for_stmt_node.update, scopeStack, global_functions);
            }


            if (treenode->nodes.for_stmt_node.stmt) {
                pass_type_tree(treenode->nodes.for_stmt_node.stmt, scopeStack, global_functions);
            }
            break;
        case ret_statement:


            if (treenode->nodes.ret_stmt_node.expr) {
                pass_type_tree(treenode->nodes.ret_stmt_node.expr, scopeStack, global_functions);
            }
            break;
        case not_expression:

            if (treenode->nodes.not_expr_node.expr) {
                pass_type_tree(treenode->nodes.not_expr_node.expr, scopeStack, global_functions);
            }
            break;
        case logic_expression:
            if (treenode->nodes.logic_expr_node.expr1) {
                pass_type_tree(treenode->nodes.logic_expr_node.expr1, scopeStack, global_functions);
            }
            if (treenode->nodes.logic_expr_node.logic) {
                pass_type_tree(treenode->nodes.logic_expr_node.logic, scopeStack, global_functions);
            }
            if (treenode->nodes.logic_expr_node.expr2) {
                pass_type_tree(treenode->nodes.logic_expr_node.expr2, scopeStack, global_functions);
            }
            break;
        case ar_expression:
            if (treenode->nodes.ar_expr_node.expr1) {
                pass_type_tree(treenode->nodes.ar_expr_node.expr1, scopeStack, global_functions);
            }
            if (treenode->nodes.ar_expr_node.ar) {
                pass_type_tree(treenode->nodes.ar_expr_node.ar, scopeStack, global_functions);
            }
            if (treenode->nodes.ar_expr_node.expr2) {
                pass_type_tree(treenode->nodes.ar_expr_node.expr2, scopeStack, global_functions);
            }
            break;
        case func_call:
            int index_func_local = -1;
            int index_scope_local = -1;
            int index_func_global = find_function(treenode->nodes.func_call_args_node.id, global_functions);
            for (int i = scopeStack->top; i >= 0; i--) {
                if (find_function(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[i]->local_functions) != -1) {
                    printf("I'm trying to find the function.\n");
                    index_func_local = find_function(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[i]->local_functions);
                    index_scope_local = i;
                    break;
                }
            }
            if (index_func_global != -1) {
                pass_type_function_scope(treenode->nodes.func_call_args_node.id, global_functions, index_func_global);
                add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);
                //-----------------------
                printf("The current scope is: %d\n", scopeStack->top);
                printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
            } else if (index_func_local != -1) {
                pass_type_function_scope(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[index_scope_local]->local_functions, index_func_local);
                add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);
                //------------------------
                printf("The current scope is: %d\n", scopeStack->top);
                printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
            } else {
                pass_type_else(treenode->nodes.func_call_args_node.id, scopeStack);
                add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);
                printf("The current scope is: %d\n", scopeStack->top);
                printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
            }

            if (treenode->nodes.func_call_node.id) {
                pass_type_tree(treenode->nodes.func_call_node.id, scopeStack, global_functions);
            }
            break;
        case func_call_args:
            index_func_local = -1;
            index_scope_local = -1;
            index_func_global = find_function(treenode->nodes.func_call_args_node.id, global_functions);
            for (int i = scopeStack->top; i >= 0; i--) {
                if (find_function(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[i]->local_functions) != -1) {
                    printf("I'm trying to find the function.\n");
                    index_func_local = find_function(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[i]->local_functions);
                    index_scope_local = i;
                    break;
                }
            }
            if (index_func_global != -1) {
                node *function_args = extract_function_args(global_functions->nodes.list_node.list[index_func_global]);
                pass_type_function_scope(treenode->nodes.func_call_args_node.id, global_functions, index_func_global);
                add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);
                check_function_call(treenode->nodes.func_call_args_node.args, function_args);
                printf("The current scope is: %d\n", scopeStack->top);
                    printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                    //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                    printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                    //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
                } else if (index_func_local != -1) {
                node *function_args = extract_function_args(scopeStack->scopestack[index_scope_local]->local_functions->nodes.list_node.list[index_func_local]);
                    pass_type_function_scope(treenode->nodes.func_call_args_node.id, scopeStack->scopestack[index_scope_local]->local_functions, index_func_local);
                    add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);\
                    check_function_call(treenode->nodes.func_call_args_node.args, function_args);
                printf("The current scope is: %d\n", scopeStack->top);
                    printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                    //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                    printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                    //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
                } else {
                    pass_type_else(treenode->nodes.func_call_args_node.id, scopeStack);
                    add_symbol_to_table(treenode->nodes.func_call_args_node.id, scopeStack);
                    printf("The current scope is: %d\n", scopeStack->top);
                    printf("%s\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.info);
                    //printf("%s\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.info);
                    printf("%d\n", treenode->nodes.func_call_args_node.id->nodes.leaf_node.data_type);
                    //printf("%d\n", scopeStack->scopestack[scopeStack->top]->table[scopeStack->scopestack[scopeStack->top]->top]->nodes.leaf_node.data_type);
                }

            if (treenode->nodes.func_call_args_node.id) {
                pass_type_tree(treenode->nodes.func_call_args_node.id, scopeStack, global_functions);
            }

            if (treenode->nodes.func_call_args_node.args) {
                pass_type_tree(treenode->nodes.func_call_args_node.args, scopeStack, global_functions);
            }
            break;
        case deref:

            if (treenode->nodes.deref_node.expr) {
                pass_type_tree(treenode->nodes.deref_node.expr, scopeStack, global_functions);
            }
            break;
        case address:

            if (treenode->nodes.address_node.expr) {
                pass_type_tree(treenode->nodes.address_node.expr, scopeStack, global_functions);
            }
            break;
    }
}

void check_tree(node *treenode) {
    if (!treenode) {
        return;
    }
    switch (treenode->node_type) {
        case leaf:
            //printf("%s", treenode->nodes.leaf_node.info);
            if (treenode->nodes.leaf_node.data_type == null &&
                !(treenode->nodes.leaf_node.type == logic_op ||
                  treenode->nodes.leaf_node.type == ar_op)) {
                fprintf(stderr,
                        "Error: identifier \"%s\" undeclared.\n", treenode->nodes.leaf_node.info);
            }
            break;
        case main_function:



            if (treenode->nodes.main_function_node.param_list) {



                check_tree(treenode->nodes.main_function_node.param_list);
            }




            if (treenode->nodes.main_function_node.stmt) {


                check_tree(treenode->nodes.main_function_node.stmt);
            }
            break;
        case function:


            if (treenode->nodes.function_node.id) {
                check_tree(treenode->nodes.function_node.id);
            }
            if (treenode->nodes.function_node.param_list) {



                check_tree(treenode->nodes.function_node.param_list);
            }
            if (treenode->nodes.function_node.type) {




                check_tree(treenode->nodes.function_node.type);
            }
            if (treenode->nodes.function_node.stmt) {


                check_tree(treenode->nodes.function_node.stmt);
            }
            break;
        case procedure:



            if (treenode->nodes.procedure_node.id) {
                check_tree(treenode->nodes.procedure_node.id);
            }
            if (treenode->nodes.procedure_node.param_list) {
                check_tree(treenode->nodes.procedure_node.param_list);
            }



            if (treenode->nodes.procedure_node.stmt) {


                check_tree(treenode->nodes.procedure_node.stmt);
            }
            break;
        case parameter_list:
            /*for (int i = 0; i < treenode->nodes.param_list_node.ids->nodes.list_node.length; ++i) {
                node *mynode = treenode->nodes.param_list_node.ids->nodes.list_node.list[i];
                add_symbol_to_table(mynode,
                                    scopeStack);
            }
            printf("%d\n"->scopestack[0]->size);*/
            if (treenode->nodes.param_list_node.ids) {
                check_tree(treenode->nodes.param_list_node.ids);
            }
            if (treenode->nodes.param_list_node.type) {

                check_tree(treenode->nodes.param_list_node.type);
            }

            break;
        case list:
            if (treenode->nodes.list_node.list_type == block_statement) {

            }
            for (int i = 0; i < treenode->nodes.list_node.num - 1; i++) { // make another loop for ids !!!!
                check_tree(treenode->nodes.list_node.list[i]);
                //
            }
            if (treenode->nodes.list_node.list_type == block_statement) {
            }
            break;
        case decl_var:

            if (treenode->nodes.var_decl_node.param_list) {
                check_tree(treenode->nodes.var_decl_node.param_list);
            }

            if (treenode->nodes.var_decl_node.type) {

                check_tree(treenode->nodes.var_decl_node.type);
            }
            break;
        case decl_str:

            if (treenode->nodes.str_decl_node.param_list) {
                check_tree(treenode->nodes.str_decl_node.param_list);
            }
            break;
        case decl_assgn:
            if (treenode->nodes.assgn_decl_node.decl_id) {
                check_tree(treenode->nodes.assgn_decl_node.decl_id);
            }

            if (treenode->nodes.assgn_decl_node.expr) {
                check_tree(treenode->nodes.assgn_decl_node.expr);
            }
            break;
        case decl_id_ar:
            if (treenode->nodes.id_ar_decl_node.decl_id) {
                check_tree(treenode->nodes.id_ar_decl_node.decl_id);
            }

            if (treenode->nodes.id_ar_decl_node.expr) {
                check_tree(treenode->nodes.id_ar_decl_node.expr);
            }

            break;
        case decl_id_int:
            if (treenode->nodes.id_int_decl_node.decl_id) {
                check_tree(treenode->nodes.id_int_decl_node.decl_id);
            }

            if (treenode->nodes.id_int_decl_node.integer) {
                check_tree(treenode->nodes.id_int_decl_node.integer);
            }

            break;
        case str_id_ar:
            if (treenode->nodes.id_ar_str_node.str_id) {
                check_tree(treenode->nodes.id_ar_str_node.str_id);
            }

            if (treenode->nodes.id_ar_str_node.expr) {
                check_tree(treenode->nodes.id_ar_str_node.expr);
            }

            break;
        case str_id_int:
            if (treenode->nodes.id_int_str_node.str_id) {
                check_tree(treenode->nodes.id_int_str_node.str_id);
            }

            if (treenode->nodes.id_int_str_node.integer) {
                check_tree(treenode->nodes.id_int_str_node.integer);
            }

            break;
        case update:
            if (treenode->nodes.update_node.id) {
                check_tree(treenode->nodes.update_node.id);
            }

            if (treenode->nodes.update_node.expr) {
                check_tree(treenode->nodes.update_node.expr);
            }
            break;
        case decl_statement:

            if (treenode->nodes.decl_stmt_node.decl) {
                check_tree(treenode->nodes.decl_stmt_node.decl);
            }

            break;
        case assgn_statement:
            if (treenode->nodes.assgn_stmt_node.expr->node_type == leaf &&
                treenode->nodes.assgn_stmt_node.ids->node_type != deref &&
                treenode->nodes.assgn_stmt_node.ids->nodes.leaf_node.data_type !=
                treenode->nodes.assgn_stmt_node.expr->nodes.leaf_node.data_type) {
                fprintf(stderr,
                        "Error: type mismatch in assign statement on a variable %s\n",
                        treenode->nodes.assgn_stmt_node.ids->nodes.leaf_node.info);
            }
            if (treenode->nodes.assgn_stmt_node.ids->nodes.leaf_node.data_type == type_bool &&
                    treenode->nodes.assgn_stmt_node.expr->node_type == list &&
                    check_logic_list(treenode->nodes.assgn_stmt_node.expr) != 0) {
                fprintf(stderr,
                        "Error: not a valid logic expression\n");
            }
            /*if ((treenode->nodes.assgn_stmt_node.ids->nodes.leaf_node.data_type == type_int ||
                    treenode->nodes.assgn_stmt_node.ids->nodes.leaf_node.data_type == type_real) &&
                    check_ar_list(treenode->nodes.assgn_stmt_node.expr) != 0) {
                fprintf(stderr,
                        "Error: not a valid arithmetic expression\n");
            }*/


            if (treenode->nodes.assgn_stmt_node.ids) {
                check_tree(treenode->nodes.assgn_stmt_node.ids);
            }

            if (treenode->nodes.assgn_stmt_node.expr) {
                check_tree(treenode->nodes.assgn_stmt_node.expr);
            }

            break;
        case expr_statement:

            if (treenode->nodes.expr_stmt_node.expr) {
                check_tree(treenode->nodes.expr_stmt_node.expr);
            }

            break;
        case if_statement:


            if (treenode->nodes.if_stmt_node.expr) {




                check_tree(treenode->nodes.if_stmt_node.expr);
            }
            if (treenode->nodes.if_stmt_node.stmt) {


                check_tree(treenode->nodes.if_stmt_node.stmt);
            }
            break;
        case if_else_statement:


            if (treenode->nodes.if_else_stmt_node.expr) {




                check_tree(treenode->nodes.if_else_stmt_node.expr);
            }
            if (treenode->nodes.if_else_stmt_node.stmt) {


                check_tree(treenode->nodes.if_else_stmt_node.stmt);
            }




            if (treenode->nodes.if_else_stmt_node.elsestmt) {
                check_tree(treenode->nodes.if_else_stmt_node.elsestmt);
            }
            break;
        case while_statement:


            if (treenode->nodes.while_stmt_node.expr) {





                check_tree(treenode->nodes.while_stmt_node.expr);
            }
            if (treenode->nodes.while_stmt_node.stmt) {

                check_tree(treenode->nodes.while_stmt_node.stmt);
            }
            break;
        case do_while_statement:


            if (treenode->nodes.do_while_stmt_node.stmt) {


                check_tree(treenode->nodes.do_while_stmt_node.stmt);
            }
            if (treenode->nodes.do_while_stmt_node.expr) {


                check_tree(treenode->nodes.do_while_stmt_node.expr);
            }

            break;
        case for_statement:


            if (treenode->nodes.for_stmt_node.assgn_stmt) {



                check_tree(treenode->nodes.for_stmt_node.assgn_stmt);
            }
            if (treenode->nodes.for_stmt_node.expr) {



                check_tree(treenode->nodes.for_stmt_node.expr);
            }
            if (treenode->nodes.for_stmt_node.update) {




                check_tree(treenode->nodes.for_stmt_node.update);
            }


            if (treenode->nodes.for_stmt_node.stmt) {
                check_tree(treenode->nodes.for_stmt_node.stmt);
            }
            break;
        case ret_statement:


            if (treenode->nodes.ret_stmt_node.expr) {
                check_tree(treenode->nodes.ret_stmt_node.expr);
            }
            break;
        case not_expression:

            if (treenode->nodes.not_expr_node.expr) {
                check_tree(treenode->nodes.not_expr_node.expr);
            }
            break;
        case logic_expression:
            if (strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "&&") == 0 ||
                    strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "||") == 0 ) {
                if (treenode->nodes.logic_expr_node.expr1->node_type == leaf &&
                        treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.data_type != type_bool) {
                    fprintf(stderr,
                            "Error: type mismatch on a variable %s in a logic expression\n",
                            treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.info);
                }
                if (treenode->nodes.logic_expr_node.expr2->node_type == leaf &&
                    treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.data_type != type_bool) {
                    fprintf(stderr,
                            "Error: type mismatch on a variable %s in a logic expression\n",
                            treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.info);
                }
            }
            if (strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "<") == 0 ||
                strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, ">") == 0 ||
                    strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "<=") == 0 ||
                    strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, ">=") == 0 ) {
                if (treenode->nodes.logic_expr_node.expr1->node_type == leaf &&
                        (treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.data_type != type_int &&
                                treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.data_type != type_real)) {
                    fprintf(stderr,
                            "Error: type mismatch on a variable %s in a logic expression\n",
                            treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.info);
                }
                if (treenode->nodes.logic_expr_node.expr2->node_type == leaf &&
                    (treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.data_type != type_int &&
                     treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.data_type != type_real)) {
                    fprintf(stderr,
                            "Error: type mismatch on a variable %s in a logic expression\n",
                            treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.info);
                }
            }
            if (strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "==") == 0 ||
                strcmp(treenode->nodes.logic_expr_node.logic->nodes.leaf_node.info, "!=") == 0 ) {
                if (treenode->nodes.logic_expr_node.expr1->node_type == leaf &&
                        treenode->nodes.logic_expr_node.expr2->node_type == leaf &&
                    treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.data_type !=
                            treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.data_type) {
                    fprintf(stderr,
                            "Error: type mismatch on a variables %s and %s in a logic expression\n",
                            treenode->nodes.logic_expr_node.expr1->nodes.leaf_node.info,
                            treenode->nodes.logic_expr_node.expr2->nodes.leaf_node.info);
                }
            }
            if ((treenode->nodes.logic_expr_node.expr1->node_type == logic_expression &&
                    treenode->nodes.logic_expr_node.expr2->node_type != logic_expression) ||
                    (treenode->nodes.logic_expr_node.expr1->node_type != logic_expression &&
                     treenode->nodes.logic_expr_node.expr2->node_type == logic_expression)) {
                fprintf(stderr,
                        "Error: not a valid logic expression\n");
            }
            if (treenode->nodes.logic_expr_node.expr1) {
                check_tree(treenode->nodes.logic_expr_node.expr1);
            }
            if (treenode->nodes.logic_expr_node.logic) {
                check_tree(treenode->nodes.logic_expr_node.logic);
            }
            if (treenode->nodes.logic_expr_node.expr2) {
                check_tree(treenode->nodes.logic_expr_node.expr2);
            }
            break;
        case ar_expression:
            if (treenode->nodes.ar_expr_node.expr1->node_type == leaf &&
                    treenode->node_type != deref &&
                    (treenode->nodes.ar_expr_node.expr1->nodes.leaf_node.data_type != type_int &&
                            treenode->nodes.ar_expr_node.expr1->nodes.leaf_node.data_type != type_real)) {
                fprintf(stderr,
                        "Error: type mismatch on a variable %s in an arithmetic expression\n",
                        treenode->nodes.ar_expr_node.expr1->nodes.leaf_node.info);
            }
            if (treenode->nodes.ar_expr_node.expr2->node_type == leaf &&
                    treenode->node_type != deref &&
                (treenode->nodes.ar_expr_node.expr2->nodes.leaf_node.data_type != type_int &&
                 treenode->nodes.ar_expr_node.expr2->nodes.leaf_node.data_type != type_real)) {
                fprintf(stderr,
                        "Error: type mismatch on a variable %s in an arithmetic expression\n",
                        treenode->nodes.ar_expr_node.expr2->nodes.leaf_node.info);
            }
            if (treenode->nodes.ar_expr_node.expr1) {
                check_tree(treenode->nodes.ar_expr_node.expr1);
            }
            if (treenode->nodes.ar_expr_node.ar) {
                check_tree(treenode->nodes.ar_expr_node.ar);
            }
            if (treenode->nodes.ar_expr_node.expr2) {
                check_tree(treenode->nodes.ar_expr_node.expr2);
            }
            break;
        case func_call:

            if (treenode->nodes.func_call_node.id) {
                check_tree(treenode->nodes.func_call_node.id);
            }
            break;
        case func_call_args:

            if (treenode->nodes.func_call_args_node.id) {
                check_tree(treenode->nodes.func_call_args_node.id);
            }

            if (treenode->nodes.func_call_args_node.args) {
                check_tree(treenode->nodes.func_call_args_node.args);
            }
            break;
        case deref:

            if (treenode->nodes.deref_node.expr) {
                check_tree(treenode->nodes.deref_node.expr);
            }
            break;
        case address:

            if (treenode->nodes.address_node.expr) {
                check_tree(treenode->nodes.address_node.expr);
            }
            break;
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

void *pass_type_param_list(node *ids, node *type) {
    for (int i = 0; i < ids->nodes.list_node.length; ++i) {
        ids->nodes.list_node.list[i]->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
        /*printf("type: %u\n", ids->nodes.list_node.list[i]->nodes.leaf_node.data_type);
        printf("length: %zu", ids->nodes.list_node.length);*/
    }
}

void *pass_type_function(node *id, node *type) {
    id->nodes.function_node.id->nodes.leaf_node.data_type = type->nodes.leaf_node.data_type;
}


void pass_type_function_scope(node *func_call_id, node *function_list, int i) {
    if (function_list->nodes.list_node.list[i]->node_type == function)
        func_call_id->nodes.leaf_node.data_type = function_list->nodes.list_node.list[i]->nodes.function_node.id->nodes.leaf_node.data_type;
    if (function_list->nodes.list_node.list[i]->node_type == procedure)
        func_call_id->nodes.leaf_node.data_type = function_list->nodes.list_node.list[i]->nodes.procedure_node.id->nodes.leaf_node.data_type;
}

int find_function(node *func_call_id, node *function_list) {
    for (int i = function_list->nodes.list_node.length - 1; i >= 0; i--) {
        if ((function_list->nodes.list_node.list[i]->node_type == function &&
             strcmp(function_list->nodes.list_node.list[i]->nodes.function_node.id->nodes.leaf_node.info,
                    func_call_id->nodes.leaf_node.info) == 0) ||
            (function_list->nodes.list_node.list[i]->node_type == procedure &&
             strcmp(function_list->nodes.list_node.list[i]->nodes.procedure_node.id->nodes.leaf_node.info,
                    func_call_id->nodes.leaf_node.info) == 0)
                ) {
            //func_call->nodes.leaf_node.data_type = function_list->nodes.list_node.list[i]->nodes.function_node.id->nodes.leaf_node.data_type;
            return i;
        }
    }
    return -1;
}

node *extract_function_args(node *myfunction) {
    node *arglist = crnode_list();
    if (myfunction->node_type == function) {
        node *param_list = myfunction->nodes.function_node.param_list;
        int param_list_length = param_list->nodes.list_node.length;
        for (int i = 0; i < param_list_length; i++) {
            int ids_length = param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.length;
            for (int j = 0; j < ids_length; j++) {
                printf("Adding the id %s\n", param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.list[j]->nodes.leaf_node.info);
                add_to_list(arglist, param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.list[j]);
            }
        }
    }
    if (myfunction->node_type == procedure) {
        node *param_list = myfunction->nodes.procedure_node.param_list;
        int param_list_length = param_list->nodes.list_node.length;
        for (int i = 0; i < param_list_length; i++) {
            int ids_length = param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.length;
            for (int j = 0; j < ids_length; j++) {
                printf("Adding the id %s\n", param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.list[j]->nodes.leaf_node.info);
                add_to_list(arglist, param_list->nodes.list_node.list[i]->nodes.param_list_node.ids->nodes.list_node.list[j]);
            }
        }
    }
    return arglist;
    /*if (func_call->nodes.list_node.length == function->nodes.list_node.length &&
            func_call != NULL && function != NULL) {
        for (int i = 0; i < func_call->nodes.list_node.length; i++) {
            if (func_call->nodes.list_node.list[i]->nodes.leaf_node.data_type !=
                    function->nodes.list_node.list[i]->nodes.leaf_node.data_type) {
                fprintf(stderr,
                        "Error: type mismatch in the function call.\n");
            }
        }
    } else if ((func_call->nodes.list_node.length == function->nodes.list_node.length &&
               func_call != NULL && function == NULL) ||
               ((func_call->nodes.list_node.length == function->nodes.list_node.length &&
                    func_call == NULL && function != NULL))) {
        fprintf(stderr,
                "Error: incorrect number of arguments in the function call.\n");
    } else if (func_call->nodes.list_node.length == function->nodes.list_node.length &&
               func_call == NULL && function == NULL) {

    } else {
        fprintf(stderr,
                "Error: incorrect number of arguments in the function call.\n");
    }*/
}

void pass_type_else(node *symbol, ScopeStack *stack) {
    for (int i = 0; i <= stack->top; i++) {
        SymbolTable *current_scope = stack->scopestack[i];
        int declared = 0;
        for (int j = 0; j <= current_scope->top; j++) {
            if (!(symbol->nodes.leaf_node.type == decl_id ||
                  symbol->nodes.leaf_node.type == decl_id_br ||
                  symbol->nodes.leaf_node.type == id_list ||
                  symbol->nodes.leaf_node.type == func_call_id ||
                  symbol->nodes.leaf_node.type == func_id) &&
                (strcmp(current_scope->table[j]->nodes.leaf_node.info, symbol->nodes.leaf_node.info) == 0) &&
                (current_scope->table[j]->nodes.leaf_node.type == decl_id ||
                 current_scope->table[j]->nodes.leaf_node.type == decl_id_br ||
                 current_scope->table[j]->nodes.leaf_node.type == id_list)) {
                if (declared) {
                    fprintf(stderr,
                            "Error: double declaration, "
                            "identifier \"%s\" has already been declared.\n", symbol->nodes.leaf_node.info);
                } else {
                    symbol->nodes.leaf_node.data_type = current_scope->table[j]->nodes.leaf_node.data_type;
                    declared = 1;
                }
                continue;
            } /*else if ((symbol->nodes.leaf_node.type == decl_id ||
                        symbol->nodes.leaf_node.type == decl_id_br ||
                        symbol->nodes.leaf_node.type == id_list) &&
                       (strcmp(current_scope->table[j]->nodes.leaf_node.info, symbol->nodes.leaf_node.info) == 0) &&
                       (current_scope->table[j]->nodes.leaf_node.type == decl_id ||
                        current_scope->table[j]->nodes.leaf_node.type == decl_id_br ||
                        current_scope->table[j]->nodes.leaf_node.type == id_list)) {
                fprintf(stderr,
                        "Error: double declaration, identifier \"%s\" has already been declared.\n", symbol->nodes.leaf_node.info);
                continue;
            }*/ else if (symbol->nodes.leaf_node.type == func_call_id &&
                         current_scope->table[j]->nodes.leaf_node.type == func_id &&
                         strcmp(current_scope->table[j]->nodes.leaf_node.info, symbol->nodes.leaf_node.info) == 0) {
                symbol->nodes.leaf_node.data_type = current_scope->table[j]->nodes.leaf_node.data_type;
                continue;
            } else if (symbol->nodes.leaf_node.type == func_id &&
                       current_scope->table[j]->nodes.leaf_node.type == func_id &&
                       strcmp(current_scope->table[j]->nodes.leaf_node.info, symbol->nodes.leaf_node.info) == 0
                    ) {
                fprintf(stderr,
                        "Error: function with the name \"%s\" exists already.\n", symbol->nodes.leaf_node.info);
                continue;
            } else if (symbol->nodes.leaf_node.type == decl_id ||
                       symbol->nodes.leaf_node.type == decl_id_br ||
                       symbol->nodes.leaf_node.type == id_list ||
                       symbol->nodes.leaf_node.type == func_id) {
                continue;
            } else if (symbol->nodes.leaf_node.data_type == null) {
                /*fprintf(stderr,
                        "Error: identifier \"%s\" undeclared.\n", symbol->nodes.leaf_node.info);*/
            }
        }
        /*for (int k = current_scope->top; k >= 0; k--) {
            if ((symbol->nodes.leaf_node.type == decl_id ||
                 symbol->nodes.leaf_node.type == decl_id_br ||
                 symbol->nodes.leaf_node.type == id_list) &&
                (strcmp(current_scope->table[k]->nodes.leaf_node.info, symbol->nodes.leaf_node.info) == 0) &&
                (current_scope->table[k]->nodes.leaf_node.type == decl_id ||
                 current_scope->table[k]->nodes.leaf_node.type == decl_id_br ||
                 current_scope->table[k]->nodes.leaf_node.type == id_list)) {
                fprintf(stderr,
                        "Error: double declaration, identifier \"%s\" has already been declared.\n",
                        symbol->nodes.leaf_node.info);
                continue;
            }
        }*/
    }
}

void *add_symbol_to_table(node *node, ScopeStack *stack) {
    int top_index_stack = stack->top;
    stack->scopestack[top_index_stack]->top++;
    int top_index_table = stack->scopestack[top_index_stack]->top;
    stack->scopestack[top_index_stack]->table[top_index_table] = node;
    /*strcpy(stack->scopestack[top_index_stack]->table[top_index_table]->nodes.leaf_node.info, node.info);
    stack->scopestack[top_index_stack]->table[top_index_table]->nodes.leaf_node.type = node.type;
    stack->scopestack[top_index_stack]->table[top_index_table]->nodes.leaf_node.data_type = node.data_type;*/
}

void *push_symbol_table(ScopeStack *stack) {
    SymbolTable *scope = (SymbolTable*) malloc(sizeof(SymbolTable));
    scope->table = (node**) malloc(sizeof(node) * 150);
    scope->size = 0;
    scope->capacity = 150;
    scope->top = -1;
    scope->local_functions = crnode_list();
    scope->local_functions_length = -1;
    stack->top++;
    stack->scopestack[stack->top] = scope;
    stack->size++;
}

void *pop_symbol_table(ScopeStack *stack) {
    //maybe put underflow error condition here
    int top_index = stack->top;
    free(stack->scopestack[top_index]->table);
    free(stack->scopestack[top_index]->local_functions);
    free(stack->scopestack[top_index]);
    stack->top--;
    stack->size--;
}

ScopeStack *cr_scope_stack() {
    ScopeStack* scopeStack = (ScopeStack*) malloc(sizeof(ScopeStack));
    scopeStack->scopestack = (SymbolTable**) malloc(sizeof(SymbolTable) * 50);
    scopeStack->size = 0;
    scopeStack->capacity = 50;
    scopeStack->top = -1;
    return scopeStack;
}

int check_logic_list(node *treenode) {
    int failflag = 0;
    for (int i = 0; i < treenode->nodes.list_node.length; i++) {
        if (treenode->nodes.list_node.list[i]->node_type == logic_expression &&
                (treenode->nodes.list_node.list[i]->nodes.logic_expr_node.expr1->nodes.list_node.list_type != logic ||
                        treenode->nodes.list_node.list[i]->nodes.logic_expr_node.expr2->nodes.list_node.list_type != logic)) {
            failflag = 1;
        }
    }
    return failflag;
}

void check_function_call(node *func_call_args_list, node *function_param_ids_list) {
    if (func_call_args_list == NULL && function_param_ids_list->nodes.list_node.length != 0) {
        fprintf(stderr,
                "Error: incorrect number of arguments in the function call.\n");
    } else if (func_call_args_list->nodes.list_node.length != function_param_ids_list->nodes.list_node.length) {
        fprintf(stderr,
                "Error: incorrect number of arguments in the function call.\n");
    } else {
        for (int i = 0; i < func_call_args_list->nodes.list_node.length; i++) {
            if (func_call_args_list->nodes.list_node.list[i]->nodes.leaf_node.data_type !=
                    function_param_ids_list->nodes.list_node.list[i]->nodes.leaf_node.data_type) {
                printf("I'm a func_call node %s with a type %d\n", func_call_args_list->nodes.list_node.list[i]->nodes.leaf_node.info,
                       func_call_args_list->nodes.list_node.list[i]->nodes.leaf_node.data_type);
                printf("I'm a function node %s with a type %d\n", function_param_ids_list->nodes.list_node.list[i]->nodes.leaf_node.info,
                       function_param_ids_list->nodes.list_node.list[i]->nodes.leaf_node.data_type);
                fprintf(stderr,
                        "Error: type mismatch in the function call.\n");
                }
            }
        }
}

/*int check_ar_list(node *treenode) {
    int failflag = 0;
    for (int i = 0; i < treenode->nodes.list_node.length; i++) {
        if (treenode->nodes.list_node.list[i]->node_type == ar_expression &&
            (treenode->nodes.list_node.list[i]->nodes.ar_expr_node.expr1->nodes.list_node.list_type != ar ||
             treenode->nodes.list_node.list[i]->nodes.ar_expr_node.expr2->nodes.list_node.list_type != ar)) {
            failflag = 1;
        }
    }
    return failflag;
}*/
