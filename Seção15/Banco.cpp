#include "Conta.h"
#include <iostream>
#include <string>
#include <windows.h>

int main(){
    SetConsoleOutputCP(CP_UTF8);

    //Criamos um objeto CC1 e CC2 do tipo Conta. Está alocado na Stack
    Conta ContaCliente01;
    Conta ContaCliente02;

    ContaCliente01.SetBanco("Banco do Brasil");
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