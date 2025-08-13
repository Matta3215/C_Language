
#include <stdio.h>

int main()
{   
    int soma;
    int vetor[6];
    vetor[0] = 1;
    vetor[1] = 0;
    vetor[2] = 5;
    vetor[3] = -2;
    vetor[4] = -5;
    vetor[5] = 7;
    
    soma = vetor[0] + vetor[1] + vetor[5];
    printf("Total da soma: %d\n", soma);
    
    printf("\nValor da quarta posição: %d", vetor[4]);
    vetor[4] = 100;
    printf("\nNovo valor da quarta posição: %d\n", vetor[4]);
    
    for (int i = 0; i < 6; i++){
        printf("\nValor da %dª posição: %d", i+1, vetor[i]);
    }
    return 0;
}