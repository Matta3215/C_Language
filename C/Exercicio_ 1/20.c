#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int valor = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}