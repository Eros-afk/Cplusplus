#include <iostream>
#include <windows.h>
#include "Matematica.h"

int main(){
    SetConsoleOutputCP(CP_UTF8); // Configura a saída do console para UTF-8
    int a, b;
    std::cout << "Digite Primeiro Numero: ";
    std::cin >> a;
    std::cout << "Digite Segundo Numero: ";
    std::cin >> b;
    std::cout << "Soma: " << soma(a, b) << std::endl;
    std::cout << "Subtração: " << subtracao(a, b) << std::endl;
    std::cout << "Multiplicação: " << multiplicacao(a, b) << std::endl;
    std::cout << "Divisão: " << divisao(a, b) << std::endl;
    std::cout << "Potência: " << potencia(a, b) << std::endl;
    std::cout << "Raiz: " << raiz(a) << std::endl;
    std::cout << "Raiz: " << raiz(b) << std::endl;
    std::cout << "Fim do Programa!" << std::endl;

    return 0;
}