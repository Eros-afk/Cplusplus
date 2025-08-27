#include <iostream>
#include <string>
#include <windows.h>

struct Livro{
    int id, ano;
    std::string titulo;
    std::string autor;
    std::string editora;

    void cadastro(Livro Livros){
        std::cout << "\nID: " << Livros.id << "\nTitulo: " << Livros.titulo << "\nAutor: " << Livros.autor << "\nEditora: " << Livros.editora << "\nAno: " << Livros.ano;
    }
};

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Livro Livro1;

    std::cout << "****Cadastro de Livro****" << std::endl;
    std::cout << "Digite o ID do livro: ";
    std::cin >> Livro1.id;
    std::cout << "Digite o Titulo do livro: ";
    std::cin.ignore();
    std::getline(std::cin,Livro1.titulo);
    std::cout << "Digite o Autor do Livro: ";
    std::getline(std::cin, Livro1.autor);
    std::cout << "Digite a Editora do livro: ";
    std::getline(std::cin, Livro1.editora);
    std::cout << "Digite o ano do livro: ";
    std::cin >> Livro1.ano;

    Livro1.cadastro(Livro1);
    
    return 0;
}