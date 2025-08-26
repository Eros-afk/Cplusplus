#include "Conta.h"
#include <iostream>
#include <string>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //Criamos um objeto CC1 e CC2 do tipo Conta. Está alocado na Stack

    /*Dessa forma o objeto seria criado com o construtor automático (Padrão/Default)*/
    Conta ContaCliente01("Itau", 2222, 5555, "Adam", 100000);
    //Funciona pois temos os argumentos para o construtor
    Conta ContaCliente02;
    //Erro desaparece pois temos o construtor vazio
    /*Os objetos foram criados(instanciados) e colocados na memória RAM*/

    std::cout << "Endereço de Memória Objeto ContaCliente01: " << &ContaCliente01 << "\n";
    ContaCliente01.GetEnderecoThis();
    std::cout << "Endereço de Memória Objeto ContaCliente02: " << &ContaCliente02 << "\n";
    ContaCliente02.GetEnderecoThis();

    ContaCliente01.SetBanco("Banco do Brasil");
    /*A string "Banco do Brasil foi enviada como argumento para a função SetBanco"*/
    ContaCliente01.SetAgencia(2020);
    ContaCliente01.SetNumConta(1122);
    ContaCliente01.SetTitular("Agler");
    ContaCliente01.Depositar(14690);
    ContaCliente01.Sacar(1500);


    ContaCliente02.SetBanco("Banrisul");
    ContaCliente02.SetAgencia(3030);
    ContaCliente02.SetNumConta(3344);
    ContaCliente02.SetTitular("Felipe");

    /*O objeto ContaCliente02 será enviado como argumento para a função transferir*/
    ContaCliente01.Transferir(ContaCliente02, 2000);

    ContaCliente02.Sacar(500);
    ContaCliente02.Sacar(5000);

    return 0;
}