#include <iostream>

typedef int inteiro;
typedef char caractere;
typedef float real;

int main(){
    //AQUI É CRIADO APELIDOS
    inteiro Numero{12};
    caractere Letra{'A'};
    float Nota{2.4};
    real Media{7.0};

    std::cout << Numero << "\n";
    std::cout << Letra << "\n";
    std::cout << Nota << "\n";
    std::cout << Media << "\n";

    return 0;
}