#include <iostream>

//Agora vamos fazer o mesmo. A passagem de argumentos por referência, mas usando ponteiros.
//A diferença é que vamos passar o endereço dos números, e não os números em si.
//Além disso, eles precisam ser desreferenciados dentro da função para acessar os valores.
//Aqui foi indicado que a função deve receber endereços de memória, ou seja, ponteiros.
void TrocaNumeros(int* num1, int* num2);

int main(){
    int numero1, numero2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> numero2;
    std::cout << "Antes da troca: " << std::endl;
    std::cout << "Num1 = " << numero1 << " Num2 = " << numero2 << std::endl;
    TrocaNumeros(&numero1, &numero2);
    std::cout << "Depois da troca: " << std::endl;
    std::cout << "Num1 = " << numero1 << " Num2 = " << numero2 << std::endl;
    std::cout << "Endereço de numero1: " << &numero1 << std::endl;
    std::cout << "Endereço de numero2: " << &numero2 << std::endl;

    return 0;
}



void TrocaNumeros(int* num1, int* num2){
    //Deu diferente pois ponteiro é uma variável e portanto possui endereço alocado na memória. Ele possui dentro dele o endereço de memória da variável que ele aponta.
    std::cout << "Endereço de num1 da função: " << &num1 << std::endl;
    std::cout << "Endereço de num2 da função: " << &num2 << std::endl;
    std::cout << "Endereço de memória contido dentro de num1: " << num1 << std::endl;
    std::cout << "Endereço de memória contido dentro de num2: " << num2 << std::endl;
    //Se num1 agora é um ponteiro logo terá dentro dele o endereço de memória do número 1.
    //Nesse caso queremos o valor que num1 aponta e que neste caso será num1. Por isso diferentemente das referências, os ponteiros precisam ser desreferenciados com o operador *.
    int temp = *num1;
    //Agora temp recebe o valor apontado por num1.

    //Agora o valor apontado por num1(que será o número 1) recebe o valor apontado por num2(que será o número 2).
    *num1 = *num2;

    //O valor apontado por num2(que será o número 2) recebe o valor de temp, que é o número 1.
    *num2 = temp;
    //temp é uma variável int normal logo nã pode nem precisa ser desreferenciada, pois já é um valor normal.

    //Também chamamos isso de passagem de argumentos por referência, pois estamos passando o endereço de memória dos números, e não os números em si. Usanso ponteiros.
}