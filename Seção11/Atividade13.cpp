#include <iostream>
#include <iomanip>

int main(){
    float notas[]{4.9, 9.5, 5.6, 2.5, 9.6, 6.4, 7.5, 9.8, 8.7, 10.0};
    float soma{0.0f};
    int totalNotas;
    /*Tamanho do array notal dividido pelo tamanho do tipo de dados em bytes*/
    totalNotas = sizeof(notas) / sizeof(float);
    std::cout << "Tamanho do vetor notas: " << sizeof(notas) << " Bytes" << std::endl;
    std::cout << "Tamanho do tipo float: " << sizeof(float) << " Bytes" << std::endl;
    for(auto nota : notas){
        soma += nota;
    }
    std::cout << "A média das notas é: " << std::fixed << std::setprecision(4) << soma /totalNotas;

    return 0;
}