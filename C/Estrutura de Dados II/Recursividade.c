#include <stdio.h>

int vetor[6] = {4,3,7,2,8,6};

int *v = vetor;

int maior_vetor_recursivo(int *v, int n){
    if (n == 1) {
        return v[0]; 
    }
    
    int m = maior_vetor_recursivo(v, n-1);
    return m > v[n-1] ? m: v[n-1]; 
}

int multi_recursiva(int x, int y){
    if (y == 0){
        return 0;
    }

    return x + multi_recursiva(x, y - 1);
}

int main()
{
    int vetor[6] = {4,3,7,2,8,6};
    
    printf("\nResultado da multiplicação: %d\n", multi_recursiva(100, 2));
    
    printf("\nMaior nº do vetor: %d\n", maior_vetor_recursivo(vetor, 6));
    
    return 0;
}

