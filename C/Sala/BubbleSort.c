
#include <stdio.h>

void bubbleSort(int *v, int n){
    int i, troca, aux;
    do {
        troca = 0;
        for(i = 0; i < n -1; i++){
        
        if(v[i] > v[i+1]){
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
            troca = 1;
        }
    }
 } while(troca == 1);
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
    
    bubbleSort(vetor, n);
    
    printf("\n");
    
    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);
}