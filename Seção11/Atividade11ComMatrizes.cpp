#include <iostream>

int main(){
    int matriz[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if (i < j){
                matriz[i][j] = 1;
            }
            else if (i == j){
                matriz[i][j] = 0;
            }
            else if (i > j){
                matriz[i][j] = -1;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if( i > j){
                std::cout << matriz[i][j] << " ";
            }
            else{
                std::cout << " " << matriz[i][j] << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}