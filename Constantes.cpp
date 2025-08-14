#include <iostream>
//Usar define para criar constantes
//#define MAX 100 //Define é uma macro, não é uma variável, não ocupa espaço na memória, é substituído pelo pré-processador

int main(){
    const int MAX = 100;
    //const é uma constante, ocupa espaço na memória, é uma variável de leitura apenas 
    int TotalMAX;
    TotalMAX = MAX + 1;
    std::cout << "O valor máximo é: " << TotalMAX << std::endl;
    std::cout << "O valor de MAX é: " << MAX << std::endl;
    std::cout << "O endereço de MAX é: " << &MAX << std::endl;
    return 0;
}