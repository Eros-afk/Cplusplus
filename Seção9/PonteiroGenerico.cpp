#include <iostream>

int main(){
    int num{4890};
    char letra{'A'};
    void *ptrg;
    ptrg = &letra;

    std::cout << "Valor de letra via ptrg: " << *(char*)ptrg << std::endl;
    //Primeiro convertemos o ponteiro genérico para o tipo correto, depois desreferenciamos
    ptrg = &num;
    std::cout << "Valor de num via ptrg: " << *(int*)ptrg << std::endl;

    return 0;
}