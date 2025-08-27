#include <iostream>

class Data{
    /*Como não foi especificado a struct o acesso será public*/
    public:
    int Dia;
    int Mes;
    int Ano;

    Data(): Dia(22), Mes(7), Ano(2025){}
};

int main(){
    Data Agenda;
    /*Assim podemos acessar seus atributos*/
    Agenda.Dia = 22;
    Agenda.Mes = 7;
    Agenda.Ano = 2025;
    
    std::cout << "Dia: " << Agenda.Dia << "\nMes: " << Agenda.Mes << "\nAno: " << Agenda.Ano;

    return 0;
}