#include <iostream>

int main(){
    int numero{1024};
    char letra{'A'};

    int &Ref = numero; // Ref é uma referência para numero
    
    // Ref é um alias para numero, qualquer alteração em Ref afeta numero
    // Ref não tem seu próprio endereço, é o mesmo endereço de numero
    // Ref não pode ser reatribuído para apontar para outro endereço
    // Não é uma variável que podemos colocar algo dentro
    // É apenas um atalho para o endereço de numero

    std::cout << "Valor de numero usando ref: " << Ref << std::endl;
    std::cout << "Endereço de numero: " << &numero << std::endl;
    std::cout << "Endereço de Ref: " << &Ref << std::endl;
    int* ptr = &numero; // ptr é um ponteiro para numero
    std::cout << "Valor endereco de ptr na RAM: " << &ptr << std::endl;
    std::cout << "Valor de numero ptr: " << *ptr << std::endl;
    std::cout << "Valor endereco contido dentro de ptr: " << ptr << std::endl;
}