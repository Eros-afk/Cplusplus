#include <iostream>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int escolha = 0;
    //Será executado ao menos uma vez
    do {
        std::cout << "****Tickets Cinme*****";
        std::cout << "\n1 - Comprar Ingresso";
        std::cout << "\n2 - Comprar Meia Entrada";
        std::cout << "\n3 - Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> escolha;
        std::cout << "Você digitou: " << escolha << std::endl;

        switch (escolha)
        {
        case 1:
            std::cout << "Ingresso comprado com sucesso!" << std::endl;
            break;
        case 2:
            std::cout << "Meia entrada comprada com sucesso!" << std::endl;
            break;
        case 3:
            std::cout << "Saindo..." << std::endl;
            break;
        default:
            std::cout << "Opção inválida. Tente novamente." << std::endl;
        }

    } while (escolha != 3);

    return 0;
}