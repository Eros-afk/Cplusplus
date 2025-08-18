#include <iostream>

//O que a função vai retornar
//Tipo de retorno da função 
int soma(int num, int numsomado){
    /*
    //Variável local
    int resultado = num + numsomado;
    return resultado; //Retorna o resultado da soma
    */

    return num + numsomado; //Retorna a soma diretamente
    //A função soma recebe dois parâmetros, num e numsomado, e retorna a soma deles.
}

int main(){
    int num, numsomado;
    std::cout << "Digite um número: ";
    std::cin >> num;
    std::cout << "Digite o numero a ser somado: ";
    std::cin >> numsomado;
    std::cout << "A soma deste numero: " << num << " + " << numsomado << " e: " << soma(num, numsomado) << std::endl;
    return 0;
}