#include <iostream>

void funcao1();
void funcao2();
void funcao3();
void funcao4();

/*Variável Global, será armazenada na região de memória da RAM destinada a Variáveis Globais e Variáveis Estáticas*/
int varGlobal {10};

int main(){
    /*Como main() é uma função a variavel varMain é local a função main(), portanto será armazenada na região de memória destinnada a variáveis locais e chamadas de funções (STACK - PILHA)*/
    int varmain{0};
    funcao1;
    return 0;
}

void funcao1()
{
    /*armazenada na região de memória destinnada a variáveis locais e chamadas de funções (STACK - PILHA)*/
    int var01 { 1 };
    /*Variável Estática, será armazenada na região de memória da RAM destinada a Variáveis Globais e Variáveis Estáticas*/
    static int varEstatica{20};
    std::cout << "Chamando Funcao01\n";
    std::cout << "Endereco var01" << &var01;
    varEstatica++;
    std::cout << "\nValor varEstatica: " << varEstatica << std::endl;
    funcao2;
}

void funcao2()
{
    /*armazenada na região de memória destinnada a variáveis locais e chamadas de funções (STACK - PILHA)*/
    int var02 { 2 };
    std::cout << "Chamando Funcao02\n";
    std::cout << "Endereco var02" << &var02;
    funcao3;
    
}

void funcao3()
{
    /*armazenada na região de memória destinnada a variáveis locais e chamadas de funções (STACK - PILHA)*/
    int var03 { 3 };
    std::cout << "Chamando Funcao03\n";
    std::cout << "Endereco var03" << &var03;
    funcao4;
}

void funcao4()
{
    /*armazenada na região de memória destinnada a variáveis locais e chamadas de funções (STACK - PILHA)*/
    int var04 { 4 };
    std::cout << "Chamando Funcao04\n";
    std::cout << "Endereco var04" << &var04;
}
