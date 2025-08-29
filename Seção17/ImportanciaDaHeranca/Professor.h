#pragma once
#include "Pessoa.h"

class Professor : public Pessoa{
    std::string Departamento;
    void EfetuarChamada();
    void EntregarPauta();
};