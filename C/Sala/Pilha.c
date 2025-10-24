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
    
    int push(Pilha* pilha, int x){
    if(pilha==NULL) {return 0;}
    cel* aux = (cel*) malloc(sizeof(cel));
    if(aux==NULL){return 0;}
    aux->conteudo = x;
    aux->seg = *pilha;
    *pilha = aux;
    return 1;
    }
    
    int pop(Pilha* pilha){
    if(pilha==NULL || *pilha==NULL){return 0;}
    cel *aux = *pilha;
    int valor = aux->conteudo;
    *pilha = aux->seg;
    
    free(aux);
    return valor;
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
    
    int mostrar_topo(Pilha* pilha){
        if(pilha==NULL || *pilha==NULL){printf("NULL\n");return 0;}
        return (*pilha)->conteudo;
    }
    
    void libera_pilha(Pilha* pilha){
        if(pilha!=NULL){
            cel *aux;
            while((*pilha)!=NULL){
                aux = *pilha;
                *pilha = (*pilha) -> seg;
                free(aux);
            }
            free(pilha);
        }
    }
int main()
{
    Pilha *pil;
    pil = cria_pilha();
    
    Pilha *pil2;
    pil2 = cria_pilha();
    
    push(pil, 15);
    push(pil, 75);
    push(pil, 30);
    push(pil, 45);
    imprime_pilha(pil);
    
    printf("%d\n", pop(pil));
    imprime_pilha(pil);
    printf("%d\n", mostrar_topo(pil));
    mostrar_topo(pil2);

    
}