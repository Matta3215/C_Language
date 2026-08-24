#include <iostream>
#include <format>


class Produto {
private:

    int codigo;
    int quantidade;
    double preco;

public:

    Produto(int codigoInicial, int quantidadeInicial, double precoInicial)
        : codigo{codigoInicial},
          quantidade{quantidadeInicial},
          preco{precoInicial}
    {
    } 
    /*void definirDados() {

    std::cout << "\n==== CADASTRO DE PRODUTO ====\n";
    std::cout << "Digite o Codigo: ";
    std::cin >> codigo;
    
    std::cout << "Digite a Quantidade: ";
    std::cin >> quantidade;

    std::cout << "Digite o Preco: R$";
    std::cin >> preco;

    }*/

    void aplicarDesconto(double percentual){
        std::cout << "\nDigite o desconto: ";
        std::cin >> percentual;
        if (percentual >= 0){
            setPreco(preco - (preco*percentual/100));
        }
        else{
            std::cout << "\nValor invalido\n";
        }
    }

    /*void exibirDados(){
        std::cout << "\n==== PRODUTO ====\n";
        std::cout << "Codigo: "<< codigo <<"\n";
        std::string precoFormat = std::format("Preco: R${:.2f}", preco);
        std::cout << precoFormat << "\n";
        std::cout << "Quantidade: " << quantidade << "\n\n";
    }*/

    double calcularValorEstoque(){
        return preco * quantidade;
    }

    int getCodigo(){
        return codigo;
    }

    void setCodigo(int novoCodigo){
        if (novoCodigo >= 0.0){
            codigo = novoCodigo;
        }
    }

    int getQuantidade(){
        return quantidade;
    }

    void setQuantidade(int novaQuantidade){
        if (novaQuantidade >= 0.0){
            quantidade = novaQuantidade;
        }
    }
    
    double getPreco(){
        return preco;
    }

    void setPreco(double novoPreco){
        if (novoPreco >= 0.0){
            preco = novoPreco;
        }
    }    

};

int main(){
    /*Produto produto;*/
    double desconto;
    
    Produto p1 = Produto(67, 30, 150);
    
    /*produto.setCodigo(67);
    produto.setQuantidade(30);
    produto.setPreco(150);*/

    //produto.definirDados();
    //produto.exibirDados();
    
    p1.aplicarDesconto(desconto);
    double valorEstoque = p1.calcularValorEstoque();
    
    std::cout << "\n==== PRODUTO ====\n";

    std::string codigoFormat = std::format("Codigo: {}", p1.getCodigo());
    std::cout << codigoFormat << std::endl;

    std::string precoFormat = std::format("Preco: R${:.2f}", p1.getPreco());
    std::cout << precoFormat << "\n";

    std::string quantidadeFormat = std::format("Quantidade: {}", p1.getQuantidade());
    std::cout << quantidadeFormat << "\n";

    std::string valorEstoqueFormat = std::format("Valor total do estoque: R${:.2f}", valorEstoque);
    std::cout << "\n" << valorEstoqueFormat << "\n\n";

    
    return 0;
}