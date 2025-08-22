#include <iostream>

int main(){
    int matriz[5][5];
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i < j){
                std::cout << " 1 ";
            } 
            else if (i == j) {
                std::cout << " 0 ";
            } 
            else if (i > j){
                std::cout << "-1 ";
            }
        } //fim for j
        std::cout << "\n";
    } //fim for i

    return 0;
}