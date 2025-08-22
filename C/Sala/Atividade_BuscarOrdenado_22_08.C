
#include <stdio.h>

int buscar_ordenado(int n, int vetor[], int tamanho){
    
    for (int i = 0; i < tamanho; i++)
    {   
        
        if (vetor[i] == n)
        {
            return i;
        }else if (vetor[i] > n){
            break;
        }
    }
    return -1;
}

int main()
{
    int n;
    int vetor[7] = {-8,4,21,23,54,67,90};
    printf("Digite um Número: ");
    scanf("%d", &n);
    
    
    
    if (buscar(n, vetor, 7) != -1){
        printf("O valor se encontra na %dª posição ", buscar(n, vetor, 7)+1);
    }else{
        printf("O valor não se encontra no vetor");
    }
    
    
    return 0;
}