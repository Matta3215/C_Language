#include <iostream>

double valor1{11.25};

int valor2{10};

// o erro ocorre nessa linha, não permitindo a conversão de um double para um int
//int valor3{32.32}; 
// .\tarefa05.cpp:8:12: error: narrowing conversion of '3.232e+1' from 'double' to 'int' [-Wnarrowing]

auto valor4{11};

int main(){

    std::cout << "\n" << valor1 << "\n";
    
    std::cout << valor2 << "\n";

    //std::cout << valor3 << "\n\n";
    
    std::cout << valor4 << "\n";

    valor4 = 15.25;
    
    //mesmo passando um valor double para a variável valor4, o tipo se mantém como int estático, transformando 15.25 em 15
    std::cout << valor4 << "\n\n";
    
    return 0;
}