#include <iostream>
#include <clocale>
//Diretiva de pré-processamento para incluir a biblioteca de entrada e saída padrão

// int main() {
//     //Declaração de variáveis
//     int idade = 25; // Variável do tipo inteiro
//     float altura = 1.75f; // Variável do tipo ponto flutuante
//     char genero = 'M'; // Variável do tipo caractere
//     bool estudante = true; // Variável do tipo booleano

//     //Exibição dos valores das variáveis
//     std::cout << "Idade: " << idade << std::endl;
//     std::cout << "Altura: " << altura << " metros" << std::endl;
//     std::cout << "Genero: " << genero << std::endl;
//     std::cout << "Estudante: " << (estudante ? "Sim" : "Não") << std::endl;

//     return 0;
// }

int main(){
    setlocale(LC_ALL, "") == NULL;
    int numVidas = 5;
    int pontos = 1350;
    bool jogoAtivo = true;
    std::cout << "*********INICIO DO JOGO**********" << std::endl;
    std::cout << "Vidas: " << numVidas << std::endl;
    std::cout << "Pontuação: " << pontos << std::endl;
    std::cout << "Tamanho de numVidas: " << sizeof(numVidas) << " bytes" << std::endl;
    std::cout << "Tamanho de pontos: " << sizeof(pontos) << " bytes" << std::endl;
    std::cout << "Endereço que numVidas está armazenado: " << &numVidas << std::endl;
    std::cout << "Endereço que pontos está armazenado: " << &pontos << std::endl;
    std::cout << "*******************" << std::endl;

    std::cout << "**********Durante o Jogo**********" << std::endl;
    pontos = pontos + 200; // Aumenta a pontuação
    numVidas = numVidas - 1; // Diminui o número de vidas
    std::cout << "Vidas: " << numVidas << std::endl;
    std::cout << "Pontuação: " << pontos << std::endl;
    std::cout << "**********************************" << std::endl;
}