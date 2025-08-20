#include <iostream>

int main(){
    int num{4096}; // Variável do tipo int
    int *ptr = &num; // Ponteiro que armazena o endereço de num
    std::cout <<"Valor da variavel num: " << num << std::endl;
    std::cout <<"Valor do endereço de num: " << &num << std::endl;
    std::cout <<"Valor do variavel ptr: " << ptr << std::endl;
    std::cout <<"Valor do endereço que ptr está carregado na memória RAM: " << &ptr << std::endl;
    std::cout << "Valor contido na variavel apontada por ptr: " << *ptr << std::endl;
    *ptr = 20963;
    std::cout << "Valor contido na variavel apontada por ptr: " << *ptr << std::endl;

    return 0;
}