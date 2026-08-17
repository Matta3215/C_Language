#include <iostream>
#include <format>


class Produto {

int codigo;
int quantidade;
double preco;

public:
    void definirDados() {

    std::cout << "\n==== CADASTRO DE PRODUTO ====\n";
    std::cout << "Digite o Codigo: ";
    std::cin >> codigo;

    std::cout << "Digite o Preco: R$";
    std::cin >> preco;

    std::cout << "Digite a Quantidade: ";
    std::cin >> quantidade;
    }

    void aplicarDesconto(double percentual){
        std::cout << "\nDigite o desconto: ";
        std::cin >> percentual;

        preco = preco - (preco*percentual/100);
    }

    void exibirDados(){
        std::cout << "\n==== PRODUTO ====\n";
        std::cout << "Codigo: "<< codigo <<"\n";
        std::string precoFormat = std::format("Preco: R${:.2f}", preco);
        std::cout << precoFormat << "\n";
        std::cout << "Quantidade: " << quantidade << "\n\n";
    }

    double calcularValorEstoque(){
        return preco * quantidade;
    }

};

int main(){
    Produto produto;
    double desconto;
    
    
    produto.definirDados();
    produto.aplicarDesconto(desconto);
    double valorEstoque = produto.calcularValorEstoque();
    produto.exibirDados();
    
    std::string valorEstoqueFormat = std::format("Valor total do estoque: R${:.2f}", valorEstoque);
    std::cout << valorEstoqueFormat << "\n";
    return 0;
}