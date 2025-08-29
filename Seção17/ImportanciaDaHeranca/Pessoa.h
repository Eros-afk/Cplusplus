#pragma once
#include <iostream>

/*Quando você não indica a visibilidade o encapsulamento por padrão em uma classe ele será private*/
class Pessoa{
    public:
    std::string Nome;
    int CPF;
    int Matricula;

    // Pessoa(){
    //     Nome = "";
    //     CPF = 0;
    //     Matricula = 0;
    // }

    Pessoa() : Nome(""), CPF(0), Matricula(0) {}

    // Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula){
    //     Nome= NovoNome;
    //     CPF = NovoCPF;
    //     Matricula = NovaMatricula;
    // }

    Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula):Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula){}

    void AcessarSistema();
};