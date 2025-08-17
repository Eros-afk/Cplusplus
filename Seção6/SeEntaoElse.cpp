#include <iostream>
#include <string>

int main(){
    bool FezSol, CarroPronto, SalarioDepositado;
    bool Acesso;

    std::string SenhaDeAcesso{"1234"};
    std::string SenhaDigitada;

    std::cout << "Digite a senha de acesso: ";
    std::cin >> SenhaDigitada;

    if(SenhaDigitada == SenhaDeAcesso){
        std::cout << "Acesso Permitido!" << std::endl;
        Acesso = true;
    } else {
        std::cout << "Acesso Negado!" << std::endl;
        Acesso = false;
        exit(0);
    }

    return 0;
}