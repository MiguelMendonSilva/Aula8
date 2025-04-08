// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int tentativas = 3;
    int numero = 7;
    int num;
    
    do{
        printf("\nDigite um número ( 3 tentativas): ");
        scanf("%d", &num);
        
        if(num == 7){
            puts("Você ganhou!!");
            tentativas = 0;
        } else {
            tentativas = tentativas - 1;
            if(tentativas != 0){
                printf("Você errou, digite outro número, tentativas restantes: %d", tentativas) ;
                
            } else {
                printf("Fim de jogo!!");
            }
        }
        
    } while (tentativas  != 0);
       
    
    return 0;
}
