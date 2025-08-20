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
    std::cout << "Endereço de num1: " << &num1 << std::endl;
    std::cout << "Endereço de num2: " << &num2 << std::endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
}