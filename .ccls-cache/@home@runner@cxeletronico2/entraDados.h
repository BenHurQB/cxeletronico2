#include "varGlobais.h"

int entraDados(int *valor){

  printf ("\nPrograme Saque Eletronico");
  printf("\n-------------------------------");
  printf("\nInforme um valor R$ ");
  scanf (" %d", *&valor);
  printf("-------------------------------");

  return *valor;

  

  
}