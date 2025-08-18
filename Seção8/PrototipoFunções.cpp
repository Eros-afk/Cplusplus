#include <iostream>

/*
main já é uma função
A função main é o ponto de entrada do programa
retorno é int
O nome main é obrigatório a função main deve retornar um valor inteiro
Ela não recebe parâmetros pode existir argumentos de linha de comando, que serão enviados a dois parâmetros
int main(int argc, char* argv[])
*/

float soma(float num1, float num2); //Declaração da função soma

int main(){
    std::cout << soma(100, 500);
    return 0;

}

float soma (float num1, float num2){
    return num1 + num2;
}