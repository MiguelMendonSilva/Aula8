#include <stdio.h>

int main(void) {
  int numero;
  int soma = 0;
  do{
      printf("\nDigite um número de 1 a 6: ");
      scanf("%d", &numero);
      
      if (numero % 2 == 0){
          soma += numero;
      } else{
          printf("Soma dos número pares digitados: %d", soma);
          break;
      }
      
      printf("Número par digitado: %d", numero);
      
  } while (numero % 2 == 0);
 
  
  
  return 0;
}