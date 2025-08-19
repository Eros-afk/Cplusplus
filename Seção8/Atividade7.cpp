#include <iostream>

double soma(char operador, double num1, double num2);

int main(){
    char operador;
    double num1, num2;
    std::cout << "Digite o operador (+, -, *, /): ";
    std::cin >> operador;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Resultado: " << soma(operador, num1, num2) << std::endl;

    return 0;
}

double soma(char operador, double num1, double num2) {
    switch (operador) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                std::cerr << "Erro: Divisão por zero!" << std::endl;
                return 0; // Retorna 0 ou pode lançar uma exceção
            }
        default:
            std::cerr << "Erro: Operador inválido!" << std::endl;
            return 0; // Retorna 0 ou pode lançar uma exceção
    }
}