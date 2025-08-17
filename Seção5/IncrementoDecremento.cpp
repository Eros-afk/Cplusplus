#include <iostream>

int main() {
    /*// Incremento e Decremento são operações que aumentam ou diminuem o valor de uma variável em 1.
    int numero = 5;

    // Incremento
    numero++; // Equivalente a numero = numero + 1;
    std::cout << "Após incremento: " << numero << std::endl;

    // Decremento
    numero--; // Equivalente a numero = numero - 1;
    std::cout << "Após decremento: " << numero << std::endl;
    */


    int num1{10}, num2{20}, resultado;
    num1 = num2++;
    /*Num2++ Pegue o valor da variável num2 e some depois da instrução incremente em 1 o valor de num2
    Logo Num1 = Num2++ é equivalente a dizer 
    Num1 = Num2
    Num2 = Num2 + 1
    Pós-fixado*/
    num2 = ++num1;
    /*++Num1 Pegue o valor da variável num1 e some antes da instrução incremente em 1 o valor de num1
    Logo Num2 = ++Num1 é equivalente a dizer
    Num1 = Num1 + 1
    Num2 = Num1
    Pré-fixado*/
    std::cout << "Valor atual de Num1: " << num1 << " e " << "Valor atual de Num2: " << num2 << std::endl;

    return 0;
}