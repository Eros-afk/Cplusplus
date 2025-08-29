#pragma once
#include <iostream>

/*Quando você não indica a visibilidade o encapsulamento por padrão em uma classe ele será private*/
class Pessoa{
    public:

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

    /*Como agora os atributos são privados, você precisa criar métodos públicos que poderão ser usados para ogter(GET) ou alterar(SET) estes atributos*/

    std::string GetNome();
    int GetCPF();
    int GetMatricula();
    void SetNome(std::string NovoNome);
    void SetCPF(int NovoCPF);
    void SetMatricula(int NovaMatricula);
    void MostrarDados();

private:
    std::string Nome;
    int CPF;
    int Matricula;
};