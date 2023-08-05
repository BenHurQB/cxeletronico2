#include "varGlobais.h"

void processaDados(int valor){

  int n100, n50, n20, n10, n5,n2, n1;

  n100 = valor / 100;
  n50 =(valor - (n100*100))/50;
  n20 = (valor - (n100 *100) - (n50 * 50) )/ 20; 
  n10 = (valor - (n100 *100) - (n50 * 50) - (n20 * 20))/ 10;
  n5 = (valor - (n100 *100) - (n50 * 50) - (n20 * 20)- (n10 * 10))/ 5;
  n2 = (valor - (n100 *100) - (n50 * 50) - (n20 * 20)- (n10 * 10) - (n5 * 5) )/ 2;
  n1 = (valor - (n100 *100) - (n50 * 50) - (n20 * 20)- (n10 * 10) - (n5 * 5)- (n2 * 2))/ 1;


  printf("\nVoce sera atendido com: \n ");
  if(n100 != 0){
  printf ("\n [  %d  ] notas de R$ 100,00 " , n100);
    }
  if(n50 != 0){
  printf ("\n [  %d  ] notas de R$ 50,00 " , n50);
    }
  if(n20 != 0){
  printf ("\n [  %d  ] notas de R$ 20,00 " , n20);
    }
  if(n10 != 0){
  printf ("\n [  %d  ] notas de R$ 10,00 " , n10);
    } 
  if(n5 != 0){
  printf ("\n [  %d  ] notas de R$ 5,00 " , n5);
    }
  if(n2 != 0){
  printf ("\n [  %d  ] notas de R$ 2,00 " , n2);
    }
  if(n1 != 0){
  printf ("\n [  %d  ] notas de R$ 1,00 " , n1);
    }

  
}