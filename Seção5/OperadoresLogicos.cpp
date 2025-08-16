#include <iostream>
#include <tchar.h>

int main(){
    _tsetlocale(LC_ALL, _T("portuguese"));
    double num;
    bool MaiorQue100;
    bool ResultadoLogico, ResultadoLogico2;
    std::cout << "Digite um numero: ";
    std::cin >> num;
    std::cout << "True = 1 e False = 0" << std::endl;
    MaiorQue100 = (num > 100);
    std::cout << "O numero e maior que 100? " << MaiorQue100 << std::endl;

    ResultadoLogico = (num > 100) && (num < 200);
    std::cout << "O numero e maior que 100 e menor que 200? " << ResultadoLogico << std::endl;
    ResultadoLogico2 = (num == 100) || (num > 200) && (num < 1000);
    std::cout << "O numero e igual a 100 ou maior que 200 e menor que 1000? " << ResultadoLogico2 << std::endl;

    return 0;
}