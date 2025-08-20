#include <iostream>

int main(){
    int num{4096};
    int *ptr;
    int *ptr2;
    ptr = &num;
    ptr2 = ptr;

    std::cout << "Endereço contido dentro de ptr: " << ptr << std::endl; 
    std::cout << "Endereço contido dentro de ptr2: " << ptr2 << std::endl;
    std::cout << "Endereço de ptr na memoria RAM: " << &ptr << std::endl;
    std::cout << "Endereço de ptr2 na memoria RAM: " << &ptr2 << std::endl;
    std::cout << "Valor de num: " << num << std::endl;
    *ptr2 = *ptr + 10;
    std::cout << "Valor de num agora: " << num << std::endl;
    
}