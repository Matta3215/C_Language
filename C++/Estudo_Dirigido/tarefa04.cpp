#include <iostream>
#include <string>

int idade;
std::string nome;

int main(){

    std::cout << "\nDigite sua idade: ";
    std::cin >> idade;
    std::cout << "\nIdade digitada: " << idade << "\n";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "\nDigite seu nome: ";

    std::getline(std::cin, nome, '\n'); 

    std::cout << "\nNome digitado: " << nome << "\n\n";
    return 0;
}