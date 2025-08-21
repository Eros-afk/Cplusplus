#include <iostream>

int main() {
    int num;
    double vetor[20], maior{0}, menor{0};

    std::cout << "Digite o numero de elementos: ";
    std::cin >> num;

    for (int i = 0; i < num; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> vetor[i];
        //Maior recebe (vetor maior que maior? Sim recebe vetor, Não ele é o maior)
        //Menor recebe (Vetor menor que menor? Sim recebe vetor, Não ele é o menor)
        maior = (i == 0 || vetor[i] > maior) ? vetor[i] : maior;
        menor = (i == 0 || vetor[i] < menor) ? vetor[i] : menor;
    }

    std::cout << "O maior numero e: " << maior << std::endl;
    std::cout << "O menor numero e: " << menor << std::endl;

    return 0;
}