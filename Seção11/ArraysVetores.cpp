#include <iostream>
#include <string>
#include <iomanip>

int main(){
    //Devem ter todos os compartimentos o mesmo tipo de dados e por isso ela é considerada uma variável composta (varios locais de armazenamento) e homogênea (todos os locais de armazenamento são do mesmo tipo).
    float nota[5];
    float media, soma{0.0f};
    std::string NomeDoAluno;

    std::cout << "Digite o nome do aluno: ";
    std::cin >> NomeDoAluno;
    for(int i = 0; i < 5; i++) {
        std::cout << "Digite a nota " << (i + 1) << ": ";
        std::cin >> nota[i];
        soma += nota[i];
    }

    media = soma / 5;
    std::cout << "A media do aluno " << NomeDoAluno << " e: " << std::fixed << std::setprecision(9) << media << std::endl;
}