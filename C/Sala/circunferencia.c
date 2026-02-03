#include <stdio.h>

typedef struct Circ{
    float raio, a, b;
} Circ;



int posicao(Circ c, int x, int y){
    if (x > (Circ.a + Circ.raio) && x < (Circ.a - Circ.raio)){
        if (y > (Circ.b + Circ.raio) && y < (Circ.b - Circ.raio)){
            return 0;
        }
    }
    return 1;
}

int main()
{
    Circ c = {5, 2, 3};
    
    int x = 15, y = 10;
    
    printf(posicao(c, x, y));

    return 0;
}
