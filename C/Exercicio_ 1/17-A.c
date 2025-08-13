#include <stdio.h>

int main() {
    int vetor[6];

    for (int i = 0; i < 6; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 6; i++) {
        printf("\n%dº numero: %d", i+1, vetor[i]);
    }

    return 0;
}
