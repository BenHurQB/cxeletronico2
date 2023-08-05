#include "varGlobais.h"
#include "entraDados.h"
#include "processaDados.h"

int main(void) {


  int valor;
  char cons = 's';

  while (cons == 's'){
  
    entraDados(&valor);
    processaDados(valor);
    printf("\n\nDeseja continuar? ");
    scanf(" %c", &cons);
    cons = tolower(cons);
    }
    
  printf("\nBen Inf agradece vossa consulta!!! Ateh breve...");
  printf("\nBy BQB");
  
  return 0;
}