#include "Conta.h"
#include <iostream>
#include <string>
#include <windows.h>

//SetConsoleOutputCP(CP_UTF8);

/*O operador :: está indicando que o metodo sacar pertence a classe Conta e que esse código a seguir vai implementar a função Sacar*/
bool Conta::Sacar(double Valor){
    if(Saldo < Valor){
        std::cout << "Saldo insuficiente!\n";
        std::cout << "Saldo Atual: R$" << ConsultarSaldo() << "\n";
        return false;
    }
    else{
    Saldo = Saldo - Valor;
    std::cout << "Saldo atual: R$" << ConsultarSaldo() << "\n";
    return true;
    }
}

void Conta::Depositar(double Valor){
    Saldo += Valor;
    std::cout << "Deposito de R$ " << Valor << " Efetuado com Sucesso!";
    std::cout << "\nNovo saldo: R$" << Saldo;
}

/*A função recebe como argumentos para seus parâmetros um Objeto do tipo Canta e um valor double*/
//Aqui o parâmetro Destino irá receber este objeto
void Conta::Transferir(Conta &Destino, double Valor){
    if (Saldo < Valor){
        std::cout << "Saldo insuficiente";
    }
    else{
        /*Aqui Destino está como o objeto passado para a função. Logo vai chamar o método Depositar desta função*/
        Destino.Depositar(Valor);
        /*Depois de depositar devemos retirar este valor depositado do saldo*/
        Saldo -= Valor;
        std::cout << "\n*****Dados*****\n";
        std::cout << "Titular: " << Destino.GetTitular() << "\n";
        std::cout << "Banco: " << Destino.GetBanco() << "\n";
        std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
        std::cout << "Conta: " << Destino.GetNumConta() << "\n";
        std::cout << "Transferencia Realizada Com Sucesso!\n";
        std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
    }
    
}

double Conta::ConsultarSaldo(){
    return Saldo;
}

std::string Conta::GetBanco(){
    return Banco;
}

int Conta::GetAgencia(){
    return Agencia;
}

int Conta::GetNumConta()
{
    return NumConta;
}

std::string Conta::GetTitular(){
    return Titular;
}

void Conta::SetBanco(std::string Banco){
    /*O compilador precisa diferenciar se Banco é variável local ou atributo da classe Conta
    Se this é um ponteiro para chegar no apontado pelo ponteiro temos 
    *this, mas this é um ponteiro para um objeto e ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto
    Agora o compilador sabe que Banco é a variável local que recebeu o argumento string e que deve ser colocada no atributo Banco do objeto apontado por this*/
    this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia){
    this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta){
    this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular){
    this->Titular = Titular;
}