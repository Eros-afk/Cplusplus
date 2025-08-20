#include <iostream>

int Coordenadas(int x = 10, int y = 20, int z = 30);

int main() {
    Coordenadas(); // Chamada com 3 argumentos usando os valores padrão
    Coordenadas(5); // Chamada com 1 argumento, y e z usam valores padrão
    Coordenadas(1, 2); // Chamada com 2 argumentos, z usa valor padrão
    Coordenadas(1, 2, 3); // Chamada com 3 argumentos

    return 0;
}

int Coordenadas(int x, int y, int z) {
    x *= 2; // Multiplica x por 2
    y *= 2; // Multiplica y por 2
    z *= 2; // Multiplica z por 2
    std::cout << "Coordenadas: (" << x << ", " << y << ", " << z << ")" << std::endl;
    return 0;
}