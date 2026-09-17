#include <iostream>
#include "math_utils.hpp"

int main(){

    MalthUtils math;

    int calc = math.Soma(5, 7);

    float a_circ = math.areaCirculo(5);

    std::cout << "\nSoma: "<< calc << "\n";
    std::cout << "Area do Circulo: " << a_circ << "\n\n";
}