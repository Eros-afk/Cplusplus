#include <iostream>

int main(){
    float nums[10], soma{0.0f};
    for (int i = 0; i < 10; i++) {
        std::cout << "Digite o numero " << (i + 1) << ": ";
        std::cin >> nums[i];
        soma += nums[i];
    }

    std::cout << "A soma dos 10 numeros e: " << soma << std::endl;
    
    return 0;
}