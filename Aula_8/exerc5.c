#include <stdio.h>

int main() {
    
    
        for(int A = 0; A < 2; A++){
            for(int B = 0; B < 2; B++){
                printf("A: %d ", A);
                printf("B: %d ", B);
                printf("%d || %d = %d\n", A, B, A || B);
            }
        }

    return 0;
}