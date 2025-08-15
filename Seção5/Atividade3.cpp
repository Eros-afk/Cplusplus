#include <iostream>

int main(){
    float Numero1, Numero2, Numero3, Media{0.0};
    std::cout << "Digite o primeiro numero: ";
    std::cin >> Numero1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> Numero2;
    std::cout << "Digite o terceiro numero: ";
    std::cin >> Numero3;
    Media = (Numero1 + Numero2 + Numero3) / 3;
    std::cout << "A media dos numeros e: " << Media << std::endl;
} 