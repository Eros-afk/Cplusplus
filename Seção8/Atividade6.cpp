#include <iostream>

float soma(float a, float b);
float subtracao(float a, float b);
float multiplicacao(float a, float b);
float divisao(float a, float b);

int main(){
    float num1, num2;
    std::cout << "Digite Primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite Segundo número: ";
    std::cin >> num2;
    std::cout << "*** Resultados ***" << std::endl;
    std::cout << num1 << " e " << num2 << std::endl;
    std::cout << "Soma: " << soma(num1, num2) << std::endl;
    std::cout << "Subtração: " << subtracao(num1, num2) << std::endl;
    std::cout << "Multiplicação: " << multiplicacao(num1, num2) << std::endl;
    std::cout << "Divisão: " << divisao(num1, num2) << std::endl;
    return 0;
}

float soma(float a, float b) {
    return a + b;
}
float subtracao(float a, float b) {
    return a - b;
}
float multiplicacao(float a, float b) {
    return a * b;
}
float divisao(float a, float b) {
    if (b == 0) {
        std::cerr << "Erro: Divisão por zero!" << std::endl;
        return 0; // Retorna 0 ou pode lançar uma exceção
    }
    return a / b;
}