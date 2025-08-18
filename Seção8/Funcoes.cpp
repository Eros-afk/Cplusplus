#include <iostream>

int main(){
    int num;
    std::cout << "Digite um número: ";
    std::cin >> num;
    std::cout << "A soma deste numero com 100: " << num + 100 << std::endl;
    std::cout << "A soma deste numero com 1000: " << num + 1000 << std::endl;
    return 0;
}