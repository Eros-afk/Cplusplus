#include <iostream>
#include <string>
#include <iomanip>

int main(){
    float nota1, nota2, nota3, nota4, nota5, media;
    std::string NomeDoAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> NomeDoAluno;
    std::cout << "Digite a nota 1: ";
    std::cin >> nota1;
    std::cout << "Digite a nota 2: ";
    std::cin >> nota2;
    std::cout << "Digite a nota 3: ";
    std::cin >> nota3;
    std::cout << "Digite a nota 4: ";
    std::cin >> nota4;
    std::cout << "Digite a nota 5: ";
    std::cin >> nota5;

    media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    std::cout << "A media do aluno " << NomeDoAluno << " e: " << std::fixed << std::setprecision(9) << media << std::endl;
}