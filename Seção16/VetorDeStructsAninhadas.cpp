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
    Pessoa Pessoa1[2];

    for(int i=0; i < 2; i++){
    Pessoa1[i].Nome = "Udemy";
    Pessoa1[i].DtNascimento.Dia = 1+i;
    Pessoa1[i].DtNascimento.Mes = 2+i;
    Pessoa1[i].DtNascimento.Ano = 2000+i;
    Pessoa1[i].Endereco.Rua = "Rua A";
    Pessoa1[i].Endereco.Cidade = "Sao Francisco";
    Pessoa1[i].Endereco.Estado = "California";
    Pessoa1[i].Endereco.Pais = "EUA";
    }

    for(int i=0; i < 2; i++){
    std::cout << "Nome: " << Pessoa1[i].Nome << "\n";
    std::cout << "Data Nascimento: " << Pessoa1[i].DtNascimento.Dia << "\\" << Pessoa1[i].DtNascimento.Mes << "\\" << Pessoa1[i].DtNascimento.Ano << "\n";
    std::cout << "Endereco: " << "Rua: " << Pessoa1[i].Endereco.Rua << " \nCidade: " << Pessoa1[i].Endereco.Cidade << " \nEstado: " << Pessoa1[i].Endereco.Estado << " \nPais: " << Pessoa1[i].Endereco.Pais << "\n";
    }

    return 0;
}