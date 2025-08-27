
#include <stdio.h>

int buscarBinariaRecursiva(int *v, int inicio, int final, int x){
    if (inicio<=final){
        int meio = (inicio+final)/2;
        if(v[meio]==x){
            return meio;
        }
        else if(v[meio]>x){
            return buscarBinariaRecursiva(v, inicio, meio-1, x);
        }else{
            return buscarBinariaRecursiva(v, meio+1, final, x);
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
    if (buscarBinariaRecursiva(vetor, 0, 9, elem) != -1){
        printf("\nO valor se encontra na %dª posição ", buscarBinariaRecursiva(vetor, 0, 9, elem)+1);
    }else{
        printf("\nO valor não se encontra no vetor");
    }
    return 0;
}