#include <stdio.h>
#include <stdlib.h>

    typedef struct cel{
        int conteudo;
        struct cel *seg;
    } cel;
    
    typedef struct cel *Pilha;
    
    Pilha* cria_pilha(){
    Pilha *pi = (Pilha*) malloc(sizeof(Pilha));
    if(pi != NULL){
        *pi=NULL;
        }
    return pi;
    }
    
    int empilhar(Pilha* pilha, int x){
    if(pilha==NULL) {return 0;}
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux==NULL){return 0;}
    aux->conteudo = x;
    aux->seg = *pilha;
    *pilha = aux;
    return 1;
    }
    
    int desempilhar(Pilha* pilha){
    if(pilha==NULL){return 0;}
    if(*pilha==NULL){return 0;}
    
    cel *aux = *pilha;
    *pilha = aux->seg;
    
    free(aux);
    return 1;
    }
    
    void imprime_pilha(Pilha* pilha) {
    if (pilha == NULL) {
        printf("Pilha nao criada.\n");
        return;
    }
    cel *aux = *pilha;
    printf("Pilha: ");
    while(aux != NULL) {
        printf("%d ", aux->conteudo);
        aux = aux->seg;
    }
    printf("\n");
    }
    
    void mostrar_topo(Pilha* pilha){
        if(pilha==NULL || *pilha==NULL){printf("NULL\n");}
        printf("Topo: %d", (*pilha)->conteudo);
    }
int main()
{
    Pilha *pil;
    pil = cria_pilha();
    
    empilhar(pil, 15);
    empilhar(pil, 75);
    empilhar(pil, 30);
    empilhar(pil, 45);
    imprime_pilha(pil);
    
    desempilhar(pil);
    imprime_pilha(pil);
    mostrar_topo(pil);
}