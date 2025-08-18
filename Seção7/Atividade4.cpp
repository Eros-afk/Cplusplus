#include <iostream>

int main(){
    int num = 0;
    
    while (num <= 50) {
        if(num % 2 == 0 /*num % 2 != 0 impares*/) {
            std::cout << num << std::endl;
        }
        ++num;
    }   

    return 0;
}