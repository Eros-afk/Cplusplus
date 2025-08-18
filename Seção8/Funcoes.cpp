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

void exibirMensagem(){
    std::cout << "Esta é uma função que não retorna nada." << std::endl;
    //Função void não retorna nada, apenas executa uma ação
    //Pode ser usada para exibir mensagens ou realizar ações sem necessidade de retorno
    std::cout << "Função executada com sucesso!" << std::endl;
    return; //Opcional, pois ao final de uma função void já é implícito o retorno
}

int main(){
    int num, numsomado;
    exibirMensagem(); //Chama a função que exibe uma mensagem
    std::cout << "Digite um número: ";
    std::cin >> num;
    std::cout << "Digite o numero a ser somado: ";
    std::cin >> numsomado;
    std::cout << "A soma deste numero: " << num << " + " << numsomado << " e: " << soma(num, numsomado) << std::endl;
    return 0;
}