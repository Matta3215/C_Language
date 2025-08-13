#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &n);

    int vetor1[n], vetor2[n], intersecao[n];
    int cont_intersecao = 0;
    
    for (int i = 0; i < n; i++) {
        printf("1- Digite um número inteiro: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("2- Digite um número inteiro: ");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (vetor1[i] == vetor2[j]) {
                int ja_existe = 0;
                for (int k = 0; k < cont_intersecao; k++) {
                    if (intersecao[k] == vetor1[i]) {
                        ja_existe = 1;
                        break;
                    }
                }
                if (!ja_existe) {
                    intersecao[cont_intersecao] = vetor1[i];
                    cont_intersecao++;
                }
                break;
            }
        }
    }
    if (cont_intersecao > 0) {
        printf("\nVetor interseção: ");
        for (int i = 0; i < cont_intersecao; i++) {
            printf("%d ", intersecao[i]);
        }
    } else {
        printf("\nNão há elementos em comum.");
    }

    return 0;
}
