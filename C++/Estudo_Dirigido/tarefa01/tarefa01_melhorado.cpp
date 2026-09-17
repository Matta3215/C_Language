#include <iostream>



int main(int argc, char* argv[]){

    std::cout << "\nNome do programa: " << argv[0] << "\n\n";


    for(int i = 1; i < argc; i++){
        std::cout << "Argumento " << i << ": "<< argv[i] << std::endl;
    }


    std::cout << "\nForam passados " << argc -1 << " argumentos.\n"<< std::endl;
    
    
    return 0;
}