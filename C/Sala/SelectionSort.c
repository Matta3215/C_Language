
#include <stdio.h>

void selectionSort(int *v, int n){
    int i, j, menor, aux;
    for(i = 0;i < n;i++){   //esse for percorre o vetor todo
        menor = i;
        for(j=i + 1;j < n; j++){ //percorre do i até o final
            if(v[j] < v[menor]){ //verifica se achou menor atual
                menor = j; // atualiza o menor
            }
        }
        if(i!=menor){ // se achou um menor que o lugar que estou, troca.
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
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
    
    selectionSort(vetor, n);
    
    printf("\n");
    
    printf("Vetor ordenado:\n");
    imprimirVetor(vetor, n);
}