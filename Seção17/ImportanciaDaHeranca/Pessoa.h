#pragma once
#include <iostream>

/*Quando você não indica a visibilidade o encapsulamento por padrão em uma classe ele será private*/
class Pessoa{
    public:
    std::string Nome;
    int CPF;
    int Matricula;

    void AcessarSistema();
};