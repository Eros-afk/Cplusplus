#include <iostream>
#include <string>

struct Livro{
    int id, ano;
    std::string titulo;
    std::string autor;
    std::string editora;

    void cadastro() {
        std::cout << "\nID: " << id << "\nTitulo: " << titulo << "\nAutor: " << autor << "\nEditora: " << editora << "\nAno: " << ano << std::endl;
    }
};

int main(){
    Livro Livros[5];

    // Cadastro dos livros
    for (int i = 0; i < 5; i++){
        std::cout << "****Cadastro de Livros****" << std::endl;
        std::cout << "Digite o ID do livro: ";
        std::cin >> Livros[i].id;
        std::cout << "Digite o Titulo do livro: ";
        std::cin.ignore();
        std::getline(std::cin, Livros[i].titulo);
        std::cout << "Digite o Autor do Livro: ";
        std::getline(std::cin, Livros[i].autor);
        std::cout << "Digite a Editora do livro: ";
        std::getline(std::cin, Livros[i].editora);
        std::cout << "Digite o ano do livro: ";
        std::cin >> Livros[i].ano;
    }

    // Exibe os livros cadastrados
    std::cout << "\n=== Livros Cadastrados ===\n";
    for (int i = 0; i < 5; i++){
        Livros[i].cadastro();
    }

    return 0;
}