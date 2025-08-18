#include <iostream>

int main(){
    double MaiorNumero, num1, num2;

    std::cout << "Digite o primeiro número: ";
    std::cin >> num1;
    std::cout << "Digite o segundo número: ";
    std::cin >> num2;

    if (num1 > num2)
        std::cout << "num1 é maior que num2." << std::endl;
    
    else
        std::cout << "num2 é maior que num1." << std::endl;
    
    
    //Operador Ternário
    //Estrutura: condição ? valor_se_verdadeiro : valor_se_falso;
    MaiorNumero = (num1 > num2) ? num1 : num2;
    std::cout << "O maior número é: " << MaiorNumero << std::endl;
    
    //O operador ? será utilizado para decidir que comando será executado com base na condição fornecida.
    (num1 > num2) ? std::cout << "num1 é maior que num2." << std::endl : std::cout << "num2 é maior que num1." << std::endl;

    return 0;
}