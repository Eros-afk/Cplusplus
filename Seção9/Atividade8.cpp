#include <iostream>

int main(){
    int numero{234};
    int *ponteiro;
    ponteiro = &numero; // ponteiro recebe o endereço de numero
    //int *ponteiro = &numero; declaração e atribuição na mesma linha
    std::cout << "O valor de numero: " << numero << std::endl;
    *ponteiro = 1456; // ponteiro aponta para o endereço de numero e altera seu valor
    std::cout << "Novo valor de numero: "<< *ponteiro << std::endl;
    std::cout << "Endereço de numero: " << &numero << std::endl;
    std::cout << "Endereço de ponteiro: " << &ponteiro << std::endl;

    int *outroptr = ponteiro; // outroptr aponta para o mesmo endereço que ponteiro

    *ponteiro += 200;

    std::cout << "Valor de outroptr: " << *outroptr << std::endl;
}