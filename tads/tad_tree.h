#ifndef TAD_TREE_H
#define TAD_TREE_H
#include "tad_string.h"
#include "tad_list.h"
#include "tad_set.h"

#define CONST_STR 1
#define CONST_LIST 2
#define CONST_SET 3

/*Mathematic models*/

typedef struct node3 {
    int node_type;
    union {
        STR str_date;

        struct {
            struct node3* struct_date;
            struct node3* next;
        };
    };
}T_TREE_NODE;

typedef T_TREE_NODE* TREE;

/*Mathematic models*/

/*Operations*/

TREE load_tree();
TREE load_tree2();
void show_tree(TREE);

/*Operations*/

#endif