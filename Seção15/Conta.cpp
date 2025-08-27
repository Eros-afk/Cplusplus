#include "Conta.h"
#include <iostream>
#include <string>
#include <windows.h>

//SetConsoleOutputCP(CP_UTF8);
/*Pode usar o construtor padrão para ja iniciar os atributos do objeto
Com algum valor padrão e evitar lixo de memória*/
Conta::Conta(){
    //Aqui o this está implícito
    //Seria o mesmo que this->Banco
    Banco = "";
    Agencia = 0;
    NumConta = 0;
    Titular = "";
    Saldo = 0.0;
    std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
    this->Banco = Banco;
    this->Agencia = Agencia;
    this->NumConta = NumConta;
    this->Titular = Titular;
    this->Saldo = Saldo;
    std::cout << "\nConstrutor Objeto Endereco: " << this << " executado!\n";
}

Conta::~Conta()
{
    std::cout << "\nDestrutor Objeto Endereco: " << this << " executado!\n";
}

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
    /*Assim aqui também está implicíto*/
    //return this->Titular;
    return Titular;
    //Só colocar this quando for necessário
}

void Conta::GetEnderecoThis()
{
    std::cout <<"this contem dentro o endereco: " << this << "\n";
}

/*E foi recebida no parâmetro Banco*/
void Conta::SetBanco(std::string Banco){
    /*O compilador precisa diferenciar se Banco é variável local ou atributo da classe Conta
    Se this é um ponteiro para chegar no apontado pelo ponteiro temos 
    *this, mas this é um ponteiro para um objeto e ele precisa usar a notação ponto. para acessar atributos e executar funções do objeto
    Agora o compilador sabe que Banco é a variável local que recebeu o argumento string e que deve ser colocada no atributo Banco do objeto apontado por this*/
    this->Banco = Banco;
    /*Aqui o atributo do objeto cujo endereço está em this irá receber o valor que está em Banco*/
}

void Conta::SetAgencia(int Agencia){
    this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta){
    this->NumConta = NumConta;
}

//Nesse caso precisamos do this pois o nome dos parâmetros são iguais
/*Mas se eu mudar para NomeTitular*/
void Conta::SetTitular(std::string Titular){
    /*Aqui não precisaria pois os nomes são diferentes
    Mas como o compilador sabe que Titular pertence a objeto que está executando a função?
    Está implícito o this*/
    //Titular = NomeTitular;
    this->Titular = Titular;
}