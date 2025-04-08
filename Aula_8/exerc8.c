#include <stdio.h>
int testa_par(int x);


int main() {
    int valor;
    printf("Digite um valor: ");
    scanf("%d", &valor);

    return 0;
}

int testa_par(int x) {
    if (x % 2 == 0) {
        return 1;
    } else{
        
        return 0;
    }

}
