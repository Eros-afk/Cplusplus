#include <iostream>

int main(){
    int Numero1, Numero2, Soma;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero1;  
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero2;  
    Soma = Numero1 + Numero2;
    std::cout << "A soma dos numeros e: " << Soma << std::endl;
    std::cout << "A subtração dos numeros e: " << Numero1 - Numero2 << std::endl;
    std::cout << "A multiplicação dos numeros e: " << Numero1 * Numero2 << std::endl;
    std::cout << "A divisão dos numeros e: " << Numero1 / Numero2 << std::endl;
    std::cout << "O resto da divisão dos numeros e: " << Numero1 % Numero2 << std::endl;
    return 0;
}