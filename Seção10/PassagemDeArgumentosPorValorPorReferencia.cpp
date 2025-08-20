#include <iostream>

//Agora estamos indicando que a função TrocaNumeros recebe referências para os números
//Isso significa que qualquer alteração feita dentro da função afetará as variáveis originais
void TrocaNumeros(int &num1, int &num2);

int main(){
    int numero1, numero2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numero1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> numero2;
    std::cout << "Antes da troca: " << std::endl;
    std::cout << "Num1 = " << numero1 << " Num2 = " << numero2 << std::endl;
    TrocaNumeros(numero1, numero2);
    std::cout << "Depois da troca: " << std::endl;
    std::cout << "Num1 = " << numero1 << " Num2 = " << numero2 << std::endl;
    std::cout << "Endereço de numero1: " << &numero1 << std::endl;
    std::cout << "Endereço de numero2: " << &numero2 << std::endl;

    return 0;
}

//Agora Num1 e Num2 não recebem simplesmente uma cópia do valor de Numero1 e Numero2. Eles passam a ser Referências de Numero1 e Numero2 respectivamente. Assim se eles alterarem o valor isso irá afetar as variáveis, pois agora eles são referências!

	//Isso aqui (int& Num1, int& Num2) é o mesmo que
	//int& Num1 = Numero1 e int& Num2 = Numero2;
	//só que isso ocorre na chamada da função.
	//ISSO DAMOS O NOME DE PASSAGEM DE ARGUMENTOS PARA A FUNÇÃO POR REFERÊNCIA!

void TrocaNumeros(int &num1, int &num2){
    std::cout << "Endereço de num1: " << &num1 << std::endl;
    std::cout << "Endereço de num2: " << &num2 << std::endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
}