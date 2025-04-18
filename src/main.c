#include<stdio.h>
#include "tad_tree.h"

int main(void) {
  int size, type;
  TREE root;

  printf("=== Tree Loader ===\n");
  printf("Enter how many elements to load: ");
  scanf("%d", &size);

  printf("Choose the type of structure (1=String, 2=List, 3=Set): ");
  scanf("%d", &type);

  root = load_tree(size, type);

  printf("\n=== Tree Structure ===\n");
  show_tree(root);
  printf("\n");

  return 0;
}

/*

Codigo para compilar los tads.c:

  (Para compilar el tad_string.c)
  (Para compilar el tad_list.c)
  (Para compilar el tad_set.c)
  (Para compilar el tad_tree.c)
  (Para compilar el main.c)
  (Para vincular y generar el ejecutable)

gcc -Iinclude -c tads/tad_string.c -o src/tad_string.o
gcc -Iinclude -c tads/tad_list.c -o src/tad_list.o
gcc -Iinclude -c tads/tad_set.c -o src/tad_set.o
gcc -Iincluude -c tads/tad_tree.c -o src/tad_tree.o
gcc -Iinclude -c src/main.c -o src/main.o
gcc src/main.o src/tad_tree.o src/tad_set.o src/tad_list.o src/tad_string.o -o PE.exe

*/