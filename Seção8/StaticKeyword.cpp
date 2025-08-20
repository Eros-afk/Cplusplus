#include <iostream>

int ContadorChamadas(){
    // Variável estática, mantém o valor entre chamadas
    // Isso significa que ela não é reinicializada a cada chamada da função
    static int NumChamadasDaFuncao = 0; // Variável estática, mantém o valor entre chamadas
    NumChamadasDaFuncao++;
    return NumChamadasDaFuncao;
}

int main(){
    
    for(int i = 0; i < 5; i++){
        std::cout << "Contador de chamadas: " << ContadorChamadas() << std::endl;
    }
    
    return 0;
}