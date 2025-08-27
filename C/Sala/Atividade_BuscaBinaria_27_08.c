
#include <stdio.h>

int buscarBinaria(int *v, int n, int elem){
    int inicio = 0, meio, final = n-1;
    while (inicio<=final){
        meio = (inicio+final)/2;
        if(v[meio] == elem){
            return meio;
        }
        else if(v[meio]<elem){
            inicio = meio+1;    
        }
        else if(v[meio]>elem){
            final = meio-1;
        }
    }
    return -1;
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
    int vetor[10] = {-8,-5,1,4,14,21,13,54,67,90};
    printf("Digite um Número: ");
    scanf("%d", &elem);
    
    
    imprimirVetor(vetor, 10);
    if (buscarBinaria(vetor, 10, elem) != -1){
        printf("\nO valor se encontra na %dª posição ", buscarBinaria(vetor, 10, elem)+1);
    }else{
        printf("\nO valor não se encontra no vetor");
    }
    return 0;
}