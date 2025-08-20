#include <iostream>
#include <typeinfo>

template <typename T>
T soma(T a, T b) {
    std::cout << "Tipo de a: " << typeid(a).name() << ", Tipo de b: " << typeid(b).name() << std::endl;
    return a + b;
}

int main(){
    std::cout << "Soma de 5 e 10: " << soma<int>(5, 10) << std::endl; // Inteiros
    std::cout << "Soma de 5.5 e 10.5: " << soma<float>(5.5f, 10.5f) << std::endl; // Floats
    std::cout << "Soma de 5.9999 e 6.9999: " << soma<double>(5.99999, 6.99999) << std::endl; // Double
}