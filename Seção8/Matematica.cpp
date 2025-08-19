#include <iostream>
#include "Matematica.h"
#include <cmath> // Para a função raiz

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

float divisao(int a, int b) {
    if (b == 0) {
        std::cerr << "Erro: Divisão por zero!" << std::endl;
        return 0; // ou lançar uma exceção
    }
    return a / b;
}

int potencia(int base, int expoente) {
    
     return pow(base, expoente); // Usando a função pow da biblioteca cmath
     
    /*int resultado = 1;
    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }
    return resultado;*/
}

float raiz(int numero) {
    if (numero < 0) {
        std::cerr << "Erro: Raiz quadrada de número negativo!" << std::endl;
        return -1; // ou lançar uma exceção
    }
    return (sqrt(numero));
}