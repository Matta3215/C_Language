
#include <stdio.h>

typedef struct cel{
    int conteudo;
    struct cel *seg;
} cel;

typedef struct fila{
    int quant;
    int max;
    struct cel *inicio; 
    struct cel *fim;
} Fila;

Fila* cria_fila(){
    Fila* fi = (Fila*) malloc(sizeof(Fila));
    if (fi!=NULL){
        fi->quant = 0;
        fi->max = 5;
        fi->inicio = NULL;
        fi->fim = NULL:
    }
    return fi;
}

int enqueue(Fila* fi, int x){
    if(fi==NULL || fi->quant >= fi->max){
        return -1;
    }
    cel* no = (cel*) malloc(sizeof(cel));
    if(no==NULL){return -1;}
    
    no->conteudo = x;
    no->seg = NULL;
    
    if(fi->quant==0){
        fi->inicio = no;
        fi->fim = no;
    }else{
    fi->fim->seg = no;
    fi->fim = no;
    }
    
    fi->quant++;
}

int main()
{
    int i=1;
    while(i!=0){printf(" ");}
    
    return 0;
}