#include <iostream>

int main(){
    int vetor[] = {1, 23, -78, 900, 234};
    int *ptr;
    /*ptr aponta para o endereco do vetor
    Logo isso é o mesmo que ptr = &vetor[0]*/
    //ptr = vetor;
    ptr = vetor;
    //O nome de um vetor é o mesmo que &vetor[0]

    for(int i = 0; i < 5; i++){
        std::cout << "Vetor[" << i << "] Endereco: " << &vetor[i] << " Valor: " << vetor[i] << "\n";
    }
    std::cout << "\n*** Enderecos com aritmetica de Ponteiros***\n";
    std::cout << "Valor contido em ptr: " << ptr <<"\n";
    std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
    /*(ptr + 0) pega o endereço de ptr e adiciona zero, logo é o primeiro elemento do vetor (ptr+0 = ptr), já que ptr aponta para o primeiro elemento ptr=vetor ou ptr=&vetor[0]*/
    std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
    /*(ptr + 1) pega o endereço de ptr e desloca uma unidade de tamanho do tipo do ponteiro*/
    //Soma 4 bytes ao endereço de ptr
    std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
    /*(ptr + 2) pega o endereço de ptr e desloca duas unidade de tamanho do tipo do ponteiro*/
    //Soma 8 bytes ao endereço de ptr
    std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
    std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
    std::cout << "Valor contido em ptr: " << ptr <<"\n";

    /*O valor de ptr não muda O que está dentro de ptr permanece
    Os comandos apenas usam o valor de ptr!*/
    /*Agora iremos mudar usando o ptr++ que é o mesmo que ptr = ptr + 1*/

    ptr++;

    std::cout << "Valor contido em ptr depois de ptr++: " << ptr << "\n";
    /*Agora mudou pois ptr++ é o mesmo que ptr + 1 que na aritmética de ponteiros é pegar o valor de ptr e somar o tamanho do tipo de dados que ele aponta que no caso é de 4 bytes!*/

    ptr = &vetor[3]; //ptr passa a apontar para 900
    ptr--; //Decrementa e aponta para -78 ou vetor[2]
    std::cout << "Valor do apontado por ptr: " << *ptr << "\n";

    ptr = vetor; //Faz com que o ptr aponte novamente para o início do vetor
    for (int i = 0; i < 5; i++){
        std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
        //Também pode agora colocar o vetor desta forma usando ponteiros
        //*(ptr + i) fará o mesmo trabalho contido em *(ptr + 1, +2, +3...)
    }

    /*Porém pode ser simplificado para ptr[i] = *(ptr + i)*/
    for(int i = 0; i < 5; i++){
        std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
    }

    /*
    Conclusão:
    Vetor[i] também é o mesmo que *(Vetor + i)
    Como o nome do vetor é o mesmo que &Vetor[0]
    *(Vetor + i) é o mesmo que *(&Vetor[0] + i)
    *(&Vetor[0] + 2) é o mesmo que vetor[2]
    */

    std::cout << "*(vetor + 2) = " << *(vetor + 2) << " Mesmo que vetor[2] = " << vetor[2] << "\n";

    std::cout << "[ ";
    for (int i = 0; i < 5; i++){
        std::cout << *(vetor + i) << " ";
    }
    std::cout << " ]";

    return 0;
}