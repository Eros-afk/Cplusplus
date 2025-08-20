#include <iostream>

int main(){
    int numero{1024};
    int numero2{2048};
    int &Ref = numero2; // Ref é uma referência para numero2
    Ref = 3000; // Alterando o valor de numero2 através da referência
    //Podemos alterar o valor de numero2 diretamente sem precisar de *
    //&Ref = numero; // Isso não é permitido, pois Ref já está vinculada a numero2
    // Ref não pode ser reatribuído para apontar para outro endereço, Referência só pode ser inicializada uma única vez
    int *ptr = &numero;
    *ptr = 4048;

    std::cout << "Valor de numero: " << *ptr << std::endl;
    
    ptr = &numero2; // ptr agora aponta para numero2
    *ptr = numero + 2000;

    std::cout << "Valor de numero2: " << *ptr << std::endl;

    return 0;
}