#include <iostream>

int valor_1, valor_2;

int main(){

    std::cout << "\nDigite um valor: ";
    std::cin >> valor_1;

    std::cout << "Digite um segundo valor: ";
    std::cin >> valor_2;
    
    int div_int = valor_1 / valor_2;

    std::cout << "\nDivisao inteira: " << valor_1 << " / " << valor_2 << " = " << div_int;
    
    int resto = valor_1 % valor_2;

    std::cout << "\nResto: " << resto;

    double div_real = (double)valor_1 / (double)valor_2;

    std::cout << "\nDivisao real: " << div_real << "\n";

    std::cout << "\n----Calc do acumulador----\n";
    
    double acumulador = valor_1;

    std::cout << "\nValor inicial: " << acumulador;

    acumulador += valor_2;

    std::cout << "\nAdicionado pelo segundo valor: " << acumulador;

    acumulador *= resto;

    std::cout << "\nMultiplicado pelo resto: " << acumulador;

    acumulador -= div_int;

    std::cout << "\nSubtraido pela divisao inteira: " << acumulador << "\n\n";

    return 0;
}