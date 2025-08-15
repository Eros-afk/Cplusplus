#include <iostream>

int main(){
    int num1, num2;
    bool comparar;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    // Verifica se os números são iguais
    comparar = (num1 == num2);
    std::cout << "Os numeros sao iguais? " << comparar << std::endl;
    comparar = (num1 != num2);
    std::cout << "Os numeros sao diferentes? " << comparar << std::endl;
    comparar = (num1 > num2);
    std::cout << "O primeiro numero e maior que o segundo? " << comparar << std::endl;
    comparar = (num1 < num2);
    std::cout << "O primeiro numero e menor que o segundo? " << comparar << std::endl;
    comparar = (num1 >= num2);
    std::cout << "O primeiro numero e maior ou igual ao segundo? " << comparar << std::endl;
    comparar = (num1 <= num2);
    std::cout << "O primeiro numero e menor ou igual ao segundo? " << comparar << std::endl;
    return 0;
}
