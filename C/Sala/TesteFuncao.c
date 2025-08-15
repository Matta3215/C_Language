
#include <stdio.h>

void imprime(int *vet, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("%d\t", vet[i]);
    }
}

void multiplicador(int *vet, int n, int x){
    int i;
    for (i = 0; i < n; i++){
        vet[i] *= x;
    }
}

int main()
{
    int x;
    int vet[5] = {1,2,3,4,5};
    printf("Escreve o multiplicador: ");
    scanf("%d", &x);
    printf("\n");
    multiplicador(vet, 5, x);
    imprime(vet, 5);
    return 0;
}