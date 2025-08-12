#include <iostream>

int main() {
    // Declaração de variáveis
    int idade = 25; // Variável do tipo inteiro
    float altura = 1.75f; // Variável do tipo ponto flutuante
    char genero = 'M'; // Variável do tipo caractere
    bool estudante = true; // Variável do tipo booleano

    // Exibição dos valores das variáveis
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Estudante: " << (estudante ? "Sim" : "Nao") << std::endl;

    return 0;
}