#include "tad_tree.h"
#include <stdlib.h>


tData createSTRNode(STR string){
    tData nvo;
    nvo=(tData)malloc(sizeof(dataType));
    nvo->nodeType=str;
    nvo->strData=string;
    return nvo;
}
tData createTREEWithSTR(tData Dato){
    tData nodo,nvo;
    nodo=(tData)malloc(sizeof(dataType));
    nodo->nodeType=str;
    nodo->data=Dato;
    nodo->next=NULL;
    return nodo;
}
tData CargaLista(){
    tData nodo;
    STR phrase;
    int opc;
    printf("Que quiere cargar?: (1)= cadena-- (2)= set -- 3=(list)");
    scanf("%d", &opc);
    if(opc == 1){
       phrase=load();
       nodo=createTREEWithSTR(createSTRNode(phrase));
    }
    else if(opc==2){

    }
}