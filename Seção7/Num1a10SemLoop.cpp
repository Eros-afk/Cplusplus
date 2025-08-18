#include <iostream>

int main(){
    int numero = 0;
    while (numero <= 10) {
        std::cout << numero << std::endl;
        ++numero;
    }
    
    
    
    /*
    Algo bizarro que imprime os números de 0 a 10 sem usar loops.
    std::cout << "0" << std::endl;
    std::cout << "1" << std::endl;
    std::cout << "2" << std::endl;
    std::cout << "3" << std::endl;
    std::cout << "4" << std::endl;
    std::cout << "5" << std::endl;
    std::cout << "6" << std::endl;
    std::cout << "7" << std::endl;
    std::cout << "8" << std::endl;
    std::cout << "9" << std::endl;
    std::cout << "10" << std::endl;
    */
    return 0;  
}