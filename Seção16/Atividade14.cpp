#include <iostream>

struct Ponto3D
{
    int X, Y, Z;

    void DesenharPonto3D(Ponto3D Pontos){
        std::cout << "X:" << Pontos.X <<" Y:" << Pontos.Y << " Z:" << Pontos.Z;
    }
};

int main(){
    Ponto3D PontosC;
    PontosC.X = 3;
    PontosC.Y = 4;
    PontosC.Z = 5;
    PontosC.DesenharPonto3D(PontosC);
    return 0;
}