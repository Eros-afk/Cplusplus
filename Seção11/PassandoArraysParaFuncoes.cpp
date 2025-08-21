#include <iostream>
#include <array>

void mostrarVetor(int Array[], int tamanhoVetor);

int main(){
    int vetor[] = {1,2,3,4,5,6,7,8,9,10};
    //Sizeof devolve o número em Bytes do tamanho de uma variável ou tipo
    //Logo sizeof(vetor) vai devolver o número de elementos do vetor multiplicado pelo tamnaho de seu tipo
    //Pois são gastos 4bytes por int neste vetor e como são 10 elementos o vetor terá tamanho 40 bytes
    //Mas preciso do tamanho
    //Basta dividir pelo tipo do vetor

    int tamanhoVetor = std::size(vetor);

    //int tamnhoVetor = sizeof(vetor) / sizeof(int);
    //Agora serão 40 bytes / 4 bytes = 10 e teremos o tamanho do vetor!
    std::cout << "Tamanho do Vetor: " << tamanhoVetor << std::endl;
    std::cout << "Tamanho de um float " << sizeof(float) << std::endl;
    std::cout << "Tamanho de um int " << sizeof(int) << std::endl;

    mostrarVetor(vetor, tamanhoVetor);
}

void mostrarVetor(int Array[], int tamanhoVetor){
    for (int i = 0; i < tamanhoVetor; i++){
        std::cout << "|" << Array[i] << "|";
    }
}
