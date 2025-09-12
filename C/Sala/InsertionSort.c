
#include <stdio.h>

void InsertionSort(int *v, int n){
    int i, j, aux;
    for(i = 1; i < n; i++){
        aux = v[i];
        for (j = i; j > 0 && aux < v[j - 1]; j--){
            v[j] = v[j - 1];
        }
        v[j] = aux;
    }
}

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i=0; i<n; i++){
        printf(" %d |", v[i]);
    }
}

int main()
{
    int n = 10;
    int vetor[10] = {-8,-22,14,42,15,23,53,9,90,67};

    
    
    printf("Vetor original:\n");
    imprimirVetor(vetor, n);
    
    insertionSort(vetor, n);
    
    printf("\n");
    
    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);

}

