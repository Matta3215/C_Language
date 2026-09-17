#include <iostream>

int cout = 67;

int main(){

    std::cout << "\n" << cout << "\n\n";

    return 0;
}

/*É possível fazer isso, pois em c++ o std acaba garantindo que o cout funcione como uma função para printar apenas se for seguido de ::,
dessa maneira, não há problema, nem ambiguidade em relação a utilização de um cout como variável e std::cout como função no mesmo escopo.*/