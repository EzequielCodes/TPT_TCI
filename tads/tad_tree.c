#include<stdio.h> 
#include<stdlib.h>
#include"tad_tree.h"

/*Private prototips*/

TREE create_str_node_tree(STR);
TREE create_list_or_set_node_tree(int, TREE);

/*Private prototips*/

/*Private functions*/

TREE create_str_node_tree(STR string){
    TREE node;
    node=(TREE)malloc(sizeof(T_TREE_NODE));
    node->node_type=CONST_STR;
    node->str_date=string;
    return(node);
}

TREE create_list_or_set_node_tree(int node_type, TREE date){
    TREE nodo;
    nodo=(TREE)malloc(sizeof(T_TREE_NODE));
    nodo->node_type=node_type;
    nodo->struct_date=date;
    nodo->next=NULL;
    return nodo;
} 

/*Private functions*/

/*Public functions*/

TREE load_tree(){
    
}

void show_tree(TREE tree) {
}


/*Public functions*/