
#include <stdio.h>

int main() {
    
    int pares;
    int vetor[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0){
            pares+=1;
        }
    }
    printf("\nO vetor possui %d valores pares", pares);
    return 0;
}