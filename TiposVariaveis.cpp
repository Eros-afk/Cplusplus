#include <iostream>
#include <iomanip>

int main() {
    // Declaração de variáveis
    int idade = 25; // Variável do tipo inteiro
    float altura = 1.75f; // Variável do tipo ponto flutuante
    double peso = 745345.90455555; // Variável do tipo ponto flutuante de precisão dupla
    char genero = 'M'; // Variável do tipo caractere
    char caractere = '5'; // Variável do tipo caractere
    bool estudante = true; // Variável do tipo booleano
    bool bAchou = true; // Variável booleana adicional para demonstração

    // Exibição dos valores das variáveis
    std::cout << "Idade: " << idade << std::endl;
    std::cout << "Tamnho da variavel idade: " << sizeof(idade) << " bytes" << std::endl;
    std::cout << "Endereco da variavel idade: " << &idade << std::endl;


    std::cout << "Altura: " << altura << " metros" << std::endl;
    std::cout << "Tamanho da variavel altura: " << sizeof(altura) << " bytes" << std::endl;
    std::cout << "Endereco da variavel altura: " << &altura << std::endl;


    std::cout << "Peso: " << std::setprecision(12) << peso << " kg" << std::endl;
    std::cout << "Tamanho da variavel peso: " << sizeof(peso) << " bytes" << std::endl;
    std::cout << "Endereco da variavel peso: " << &peso << std::endl;


    std::cout << "Genero: " << genero << std::endl;
    std::cout << "Tamanho da variavel genero: " << sizeof(genero) << " bytes" << std::endl;
    std::cout << "Endereco da variavel genero: " << (void *)&genero << std::endl;


    std::cout << "Caracter: " << caractere << std::endl;
    std::cout << "Tamanho da variavel caracter: " << sizeof(caractere) << " bytes" << std::endl;
    std::cout << "Endereco da variavel caracter: " << (void *)&caractere << std::endl;


    std::cout << "Estudante: " << (estudante ? "Sim" : "Nao") << std::endl;
    
    bAchou = 1;
    std::cout << "Variavel bAchou: " << bAchou << std::endl;
    bAchou = 0;
    std::cout << "Variavel bAchou apos atribuicao 0: " << bAchou << std::endl;
    bAchou = true;
    std::cout << "Variavel bAchou apos atribuicao true: " << bAchou << std::endl;
    bAchou = false;
    std::cout << "Variavel bAchou apos atribuicao false: " << bAchou << std::endl;
    bAchou = 'd'; // Atribuição de um caractere
    std::cout << "Variavel bAchou apos atribuicao 'd': " << bAchou << std::endl;
    bAchou = "102340A"; // Atribuição de uma string
    std::cout << "Variavel bAchou apos atribuicao '102340A': " << bAchou << std::endl;

    return 0;
}