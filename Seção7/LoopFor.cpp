#include <iostream>

int main(){
    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        soma += i;
    }

    std::cout << "A soma dos números de 1 a 100 é: " << soma << std::endl;
    
    return 0;
}