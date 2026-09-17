#include <iostream>



int main(int argc, char* argv[]){

    std::cout << "\nNome do programa: " << argv[0] << "\n";

    std::cout << "\nForam passados " << argc -1 << " argumentos.\n"<< std::endl;
    
    return 0;
}