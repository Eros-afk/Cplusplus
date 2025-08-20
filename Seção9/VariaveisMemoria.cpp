#include <iostream>

int main(){
    int num = 10;
    double salario = 4567.90;
    std::cout << "Tamanho da variavel num: " << sizeof(num) << " bytes" << std::endl;
    std::cout << "Tamanho da variavel salario: " << sizeof(salario) << " bytes" << std::endl;
    std::cout << " Endereço da variavel num: " << &num << std::endl;
    std::cout << " Endereço da variavel salario: " << &salario << std::endl;

    return 0;

}