#include <stdio.h>

int main() {
    int n;
    printf("Digite quantos números quer armazenar: ");
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("\n%dº numero: %d", i+1, vetor[i]);
    }

    return 0;
}
