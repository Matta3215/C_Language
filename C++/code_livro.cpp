#include <iostream>

class Livro{
private:
    std::string titulo;
    std::string autor;
    int anoPublicacao;

public:
    Livro(){

    }

    Livro(std::string tituloInicial, std::string autorInicial, int anoPublicacaoInicial)
        : titulo{tituloInicial},
          autor{autorInicial},
          anoPublicacao{0}
    {
        if (anoPublicacaoInicial > 0){
            anoPublicacao = anoPublicacaoInicial;
        }
    }

    Livro(std::string tituloInicial, std::string autorInicial)
        : titulo{tituloInicial},
          autor{autorInicial},
          anoPublicacao{2026}
    {
    }
 
    std::string getTitulo(){
        return titulo;
    }

    std::string getAutor(){
        return autor;
    }

    int getAnoPublicacao(){
        return anoPublicacao;
    }
};

int main(){
    Livro l1("Revolucao dos Bichos", "George Orwell", 1945);

    Livro l2("Dementados", "Demetrius");

    std:: cout << "\n\nTitulo: " << l1.getTitulo() << std::endl;
    std:: cout << "Autor: " << l1.getAutor() << std::endl;
    std:: cout << "Ano de Publicacao: " << l1.getAnoPublicacao() << "\n\n";

    std:: cout << "Titulo: " << l2.getTitulo() << std::endl;
    std:: cout << "Autor: " << l2.getAutor() << std::endl;
    std:: cout << "Ano de Publicacao: " << l2.getAnoPublicacao() << "\n\n";

    return 0;
}