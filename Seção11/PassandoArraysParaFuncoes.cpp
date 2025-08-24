#include <iostream>
#include <array>

void mostrarVetor(int Array[], int tamanhoVetor);
void alterarVetor(int Array[], int tamanhoVetor);

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

    std::cout << "Vetor Original" << std::endl;
    //Aqui seria o mesmo que &vetor[0]
    mostrarVetor(vetor, tamanhoVetor);
    alterarVetor(vetor, tamanhoVetor);
    std::cout << "Vetor Alterado?" << std::endl;
    mostrarVetor(vetor, tamanhoVetor);
    /*O nome de um vetor em C e C++ é o mesmo que &Vetor[0]
    O vetor foi alterado pois foi passado por referencia
    */

    return 0;
}

/*Então int Array[] indica que isso na realidade é um ponteiro
Podemos substituir por*/
void mostrarVetor(int *Ptr_Array, int tamanhoVetor){
    for (int i = 0; i < tamanhoVetor; i++){
        std::cout << "|" << Ptr_Array[i] << "|";
    }
    std::cout << "\n\n";
}

void alterarVetor(int *Ptr_Array, int tamanhoVetor){
    for(int i = 0; i < tamanhoVetor; i++){
        Ptr_Array[i] = Ptr_Array[i]*2;
    }
}
