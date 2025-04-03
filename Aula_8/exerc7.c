#include <stdio.h>

int main(void) {
    
  int numero;

  printf("digite 4 números ínteiros: ");
  
  
  for(int linha = 0; linha < 4; linha++ ){
      scanf("%d", &numero);
        for(int i = 0; i < numero; i++){
            printf("*");
        }
        
        printf(" ");
  }
  
  
    

  return 0;
}