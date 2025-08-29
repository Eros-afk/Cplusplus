#include <iostream>
//#include "Pessoa.h"
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"

int main(){
    Professor Marcos{"Pazheco", 123456, 987654, "Udemy"};
    Aluno Luke{"Skywalker", 888888, 999999, "Jedi"};
    Bibliotecario ObiWan{"Kenobi", 111111, 222222};
    
    Marcos.MostrarDados();
    Luke.MostrarDados();
    ObiWan.MostrarDados();

    return 0;
}