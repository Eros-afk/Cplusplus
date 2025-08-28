#include <iostream>
#include <cstring>

struct Data
{
    int Dia, Mes, Ano;
};

struct Endereco
{
    std::string Rua, Cidade, Estado, Pais;
};

struct Pessoa
{
    std::string Nome;
    Data DtNascimento;
    Endereco Endereco;
};


int main(){
    Pessoa Pessoa1;
    Pessoa1.Nome = "Udemy";
    Pessoa1.DtNascimento.Dia = 1;
    Pessoa1.DtNascimento.Mes = 2;
    Pessoa1.DtNascimento.Ano = 2000;
    Pessoa1.Endereco.Rua = "Rua A";
    Pessoa1.Endereco.Cidade = "Sao Francisco";
    Pessoa1.Endereco.Estado = "California";
    Pessoa1.Endereco.Pais = "EUA";

    std::cout << "Nome: " << Pessoa1.Nome << "\n";
    std::cout << "Data Nascimento: " << Pessoa1.DtNascimento.Dia << "\\" << Pessoa1.DtNascimento.Mes << "\\" << Pessoa1.DtNascimento.Ano << "\n";
    std::cout << "Endereco: " << "Rua: " << Pessoa1.Endereco.Rua << " \nCidade: " << Pessoa1.Endereco.Cidade << " \nEstado: " << Pessoa1.Endereco.Estado << " \nPais: " << Pessoa1.Endereco.Pais;

    return 0;
}