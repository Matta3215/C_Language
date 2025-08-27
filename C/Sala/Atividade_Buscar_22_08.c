
#include <stdio.h>

int buscar(int n, int vetor[], int tamanho){
    
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    int vetor[7] = {23,4,67,-8,54,90,21};
    printf("Digite um Número: ");
    scanf("%d", &n);
    
    
    
    if (buscar(n, vetor, 7) != -1){
        printf("O valor se encontra na %dª posição ", buscar(n, vetor, 7)+1);
    }
    return 0;
}