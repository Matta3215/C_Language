#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *V, int inicio, int meio, int fim);

void mergeSort(int *V, int inicio, int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(V, inicio, meio);
        mergeSort(V, meio+1, fim);
        merge(V, inicio, meio, fim);
    }
}

void merge(int *V, int inicio, int meio, int fim) {
    int i = inicio;
    int j = meio + 1;
    int k = 0;
    int tamanho = fim - inicio + 1;
    int *temp = (int *) malloc(tamanho * sizeof(int));

    // 1. Combinar ordenando
    while (i <= meio && j <= fim) {
        if (V[i] <= V[j]) {
            temp[k++] = V[i++];
        } else {
            temp[k++] = V[j++];
        }
    }

    // 2. Copiar o que sobrar da metade esquerda (se houver)
    while (i <= meio) {
        temp[k++] = V[i++];
    }

    // 3. Copiar o que sobrar da metade direita (se houver)
    while (j <= fim) {
        temp[k++] = V[j++];
    }

    // 4. Copiar do auxiliar para o original
    for (i = inicio, k = 0; i <= fim; i++, k++) {
        V[i] = temp[k];
    }

    free(temp);
}

void imprimirVetor(int *v, int n){
    printf("Vetor: |");
    for(int i=0; i<n; i++){
        printf(" %d |", v[i]);
    }
    printf("\n");
}

int main()
{
    
    int vetor[10] = {5,26,76,32,12,40,3,7,4,10};
    int n = 10;
    
     printf("Vetor original:\n");
    imprimirVetor(vetor, n);
    
    mergeSort(vetor, 0, n-1);
    
    printf("\n");
    
    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);

    return 0;
}