#include <iostream>

/*
Recebe um array por referência através de um ponteiro
A variavel *Array irá receber um endereço de memória de um vetor que será enviado para esta função
*/
void DuplicaVetor(int *Array, int tam);
/*
Esta função também recebe um Array via Ponteiro e também retorna um ponteiro.
Retornar o endereço do primeiro elemento do array
*/
int *InverteVetor(int *Array, int tam);
//Mostra o vetor recebido via ponteiro
void MostraVetor(int *Array, int tam);

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int tam = sizeof(numeros)/sizeof(int);
    //Pode usar tbm int tam = std::size(numeros);
    //O endereço do primeiro elemento do vetor é enviado para array
    MostraVetor(numeros, tam);
    DuplicaVetor(numeros, tam);
    MostraVetor(numeros, tam);
    MostraVetor(InverteVetor(numeros,tam), tam);
    return 0;
}

void DuplicaVetor(int *Array, int tam)
{
    for(int i = 0; i < tam; i++){
        Array[i] = 2 * Array[i];
    }
}

//Essa função recebe um array(o endereço do primeiro elemento do array)
int *InverteVetor(int *Array, int tam)
{
    //Para inverter o vetor precisa de um vetor auxiliar
    //ele precisa ser estático pois senão ao sair da função ele iria desaparecer da memória, e não conseguiria ser enviado como retorno da função
    int j = 0;
    static int ArrayInvertido[10];
    //Para conseguir um vetor com valores invertidos faremos
	//Começa do indice Tam -1 ou seja 10 -1 = 9 e vai até 0 i>=0
    for (int i = tam-1; i >= 0; i--){
        ArrayInvertido[j] = Array[i];
        j++;
    }
    //Aqui a função retorna o endereço do primeiro elemento do ArrayInvertido
    return ArrayInvertido;
}

void MostraVetor(int *Array, int tam)
{
    std::cout << " [ ";
    for (int i = 0; i < tam; i++)
    {
        std::cout << Array[i] << " ";
    }
    std::cout << "]" << std::endl;
}
