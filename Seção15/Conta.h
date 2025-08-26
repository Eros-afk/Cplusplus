#pragma once
#include <iostream>
#include <string>

/*Este arquivo .h é onde existem apenas as declarações dos atributos e métodos da classe. Aqui não existem as definições, implementações das funções, pois isso será feito no arquivo .cpp. É a separação do O QUE (.h) do COMO (.cpp)*/

class Conta{
    /*Indica que o acesso a estes membros abaixo de private: 
    Só será permitido dentro do código da classe*/
    private:
        std::string Banco;
        int Agencia;
        int NumConta;
        std::string Titular;
        double Saldo{0.0};
    /*Indica que os membros podem ser acessados pelo objeto da classe conta fora do código da classe conta*/
    public:
        bool Sacar(double Valor);
        void Depositar(double Valor);
        /*
        Neste caso o parâmetro Destino recebe apenas uma cópia do valor do objeto. Ele não tem como alterar o objeto pois só recebeu uma cópia dele
        Logo podemos usar o conceito de referência para passar a referência do objeto e com isso Destino poderá alterar este objeto pois será realizada uma passagem de argumentos por Referência e não mais por valor
        */
        void Transferir(Conta &Destino, double Valor);
        double ConsultarSaldo();
        std::string GetBanco();
        int GetAgencia();
        int GetNumConta();
        std::string GetTitular();
        void SetBanco(std::string Banco);
        void SetAgencia(int Agencia);
        void SetTitular(std::string GetTitular);
        void SetNumConta(int NumConta);
};