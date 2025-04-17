#include"tad_tree.h"
#include <stdlib.h>


tData createSTRNode(STR string){
    tData nvo;
    nvo=(tData)malloc(sizeof(dataType));
    nvo->nodeType=str;
    nvo->strData=string;
    return nvo;
}

//Creo un nodo que contenga al str.

tData createTREEWithData(int DATATYPE, tData Dato){
    tData nodo,nvo;
    nodo=(tData)malloc(sizeof(dataType));
    nodo->nodeType=DATATYPE;
    nodo->data=Dato;
    nodo->next=NULL;
    return nodo;
} 

//Aca lo que hago es que, dependiendo si quiero que se cargue un str, set o list
//, tenga un arbol que lo contenga.

tData CargaLista(){
    tData nodo;
    STR phrase;
    int opc;
    printf("Que quiere cargar?: (str)= cadena-- (set)= Conjunto -- (list)=lista");
    scanf("%d", &opc);
    if(opc == 1){
       phrase=load();
       nodo=createTREEWithData(opc, createSTRNode(phrase));
    }
    else if(opc==2){
       nodo=createTREEWithData(opc, CargaLista());
    }else if(opc==3){
      nodo=createTREEWithData(opc, CargaLista());
    }
    printf("\nQuiere cargar mas datos?: 1:si  2:no:  ");
    scanf("%d", &opc);
    if(opc==1){
      nodo->next=CargaLista();
    }
    else{
        nodo->next=NULL;
    }
    return nodo;
}
void Mostrar(tData L){
  if(L!=NULL){
  printf("{");
   if(L->nodeType==str){
     print(L->data->strData);
   }
   else{
    Mostrar(L->data);
   }
   printf("}");
   Mostrar(L->next);
  }
}
//Esta es la carga recursiva, aun le faltan detalles como el que controle
//si es un set, que no haya repetidos y asi. Me falto hacer el muestra pero
//ese es facil, solo hay que ver el tipo de dato y ya, si es str, usamos el mostrar str
//si es de tipo set o list, hay que llamar a la misma funcion de mostrar otra vez.


//Me falta tambien ver el tema de que no meta arboles dentro de arboles de forma infinita
//Y falta probarlo en el main, pero nose por que vs no me deja.
//Gracias por leer :D, me voy a mimir