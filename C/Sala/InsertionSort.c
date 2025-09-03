
#include <stdio.h>

void insertionsort(int *v, int n){
    int aux;
    for (int i = 0; i < n; i++){
           
       for (int j = i; j >= 0; j--){
           if(v[i] < v[j]){
               
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
           }
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
    int elem;
    int vetor[10] = {-8,-22,14,42,15,23,53,9,90,67};
    printf("Digite um Número: ");
    scanf("%d", &elem);
    
    
    imprimirVetor(vetor, elem);
    insertionsort(vetor, elem);
    printf("\n");
    imprimirVetor(vetor, elem);
}