#include <iostream>

/*int ParOuIm(int num){
    if (num % 2 == 0) {
        return 1; // Par
    } else {
        return 0; // Ímpar
    }
}*/

//Protótipo da função ParOuIm
bool ParOuIm(int num);

int main(){
    int numero;
    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (ParOuIm(numero)) {
        std::cout << "O número " << numero << " é par." << std::endl;
    } else {
        std::cout << "O número " << numero << " é ímpar." << std::endl;
    }

    return 0;
}

bool ParOuIm(int num){
    return (num % 2 == 0); // Retorna true se for par, false se for ímpar
}