#include <iostream>
#include <tchar.h>
#include <string>

int main(){
    _tsetlocale(LC_ALL, _T("portuguese"));
    //É possível utilizar especificadores de tipo para definir o tipo de variável que será utilizado.
    //Pode usar () para iniciar variáveis com valores literais.
    //{} É possível utilizar chaves para inicializar variáveis com valores literais (int, float, caractere, quanto valores escalares, vetores, enums etc).

    int NumeroInteiro{10}; // Inicialização com chaves
    float NumeroFloat(3.14f); // Inicialização com parênteses
    char Letra{'a'}; // Inicialização com chaves
    //String é um tipo de dado que representa uma sequência de caracteres.
    //No C++, strings são representadas pela classe std::string, que faz parte da biblioteca padrão.
    std::string Texto{"Olá, Mundo!"}; // Inicialização de string com chaves
    //%d indica que o valor será um inteiro, %f indica que o valor será um float, %c indica que o valor será um caractere e %s indica que o valor será uma string.
    std::printf ("Número Inteiro: %d Número Real: %.2f", NumeroInteiro, NumeroFloat);

    return 0;
}