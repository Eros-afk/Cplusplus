#include <iostream>

int main(){
    /*
    int x = 10; // Variável local ao main
    {
        int y = 20; // Variável local ao bloco
        std::cout << "Dentro do bloco: x = " << x << ", y = " << y << std::endl;
    }
    // y não é acessível aqui, pois está fora do escopo
    std::cout << "Fora do bloco: x = " << x << std::endl;
    */

    // Aqui i foi declarado fora do escopo do for, então pode ser usado depois
    int i;
    for(i = 0; i < 5; i++){
        int j = i + 2;
        std::cout << i << " " << j << std::endl;
    } //porem agora j foi declarado dentro do escopo do for, então não pode ser usado depois
    std::cout << "Valor final de i: " << i << std::endl;

    //Isso é o escopo de uma variavel
    //Visibilidade de uma variavel? Local ou global se local em que bloco? Qual o tempo de vida dela?

    //Os parametros de uma função são variaveis locais a função
    int soma(int a, int b){
        return a + b;
    }

    return 0;
}