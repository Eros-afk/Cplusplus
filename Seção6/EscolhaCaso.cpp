#include <iostream>

int main(){
    int num1, num2;
    char operacao;
    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;
    std::cout << "Digite a operação (+, -, *, /): ";
    std::cin >> operacao;

    switch(operacao) {
        case '+':
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0)
                std::cout << "Resultado: " << static_cast<double>(num1) / num2 << std::endl;
            else
                std::cout << "Erro: Divisão por zero!" << std::endl;
            break;
        default:
            std::cout << "Operação inválida!" << std::endl;
    }

    return 0;
}