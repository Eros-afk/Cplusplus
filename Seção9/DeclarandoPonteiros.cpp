#include <iostream>

int main(){
    int *ptr;
    int num = 101;
    ptr = &num; // Atribuição do endereço da variável num ao ponteiro ptr
    *ptr = 202; // Modifica o valor da variável num através do ponteiro ptr

    std::cout << "Valor da variável num: " << num << std::endl; // Exibe o valor modificado
    std::cout << "Valor do ponteiro ptr: " << *ptr << std::endl; // Exibe o valor apontado pelo ponteiro
    std::cout << "Endereço da variável num: " << &num << std::endl;
    std::cout << "Endereço do ponteiro ptr: " << &ptr << std::endl;
    std::cout << "Endereço armazenado no ponteiro ptr: " << ptr << std::endl; // Exibe o endereço armazenado no ponteiro

    return 0;
}