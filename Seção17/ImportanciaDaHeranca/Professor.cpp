#include "Professor.h"

void Professor::EfetuarChamada()
{
    std::cout << "Chamada Efetuada\n";
}

void Professor::EntregarPauta()
{
    std::cout << "Pauta Entregue\n";
}

std::string Professor::GetDepartamento()
{
    return Departamento;
}

void Professor::SetDepartamento(std::string NovoDepartamento)
{
    Departamento = NovoDepartamento;
}

void Professor::MostrarDados(){
    //Aqui chamamos o método da classe Base Pessoa
    Pessoa::MostrarDados();
    std::cout << "Departamento: " << GetDepartamento() << "\n";
}
