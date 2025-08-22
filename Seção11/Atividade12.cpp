#include  <iostream>
#include <iomanip>
int main(){
    float velocidades[] {70.9f, 89.5f, 65.6f, 102.5f, 123.6f, 63.4f, 74.5f, 99.5f, 68.7f};
    float somaVelocidades {0.0f};
    int tamArray {0};

    /*Cada passada a variavel velo vai receber um valor do array velocidade*/
    for(auto velo : velocidades){
        /*A variavel acumuladora somaVelocidade vai acumula a soma de todas as velocidades contidas no array*/
        somaVelocidades += velo;
        tamArray++;
        /*tamArray será o tamanho do array no final de todas as passadas do loop(iterações)*/
    }
    
    /*std::defaultfloat é o padrão de comportamento do setprecision 4 será o número total de digitos antes e após a vírgurla
    std::fixed você indica que deseja n numeros apos a vírgula
    std::scientific indica que você deseja que seja em notação científica, potência de 10*/
    std::cout << "Média de Velocidade na Rodovia: " << std::fixed << std::setprecision(9) << somaVelocidades/tamArray << " km/h";

    return 0;
}