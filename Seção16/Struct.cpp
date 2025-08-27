#include <iostream>

struct Data{
    /*Como não foi especificado a struct o acesso será public*/
    static int contador;
    int id;
    int Dia;
    int Mes;
    int Ano;
    Data(){
        /*Como contador é estatico ele não vai perder o valor e portanto irá incrementar de um a cada chamada do destrutor*/
        id = contador++;
        std::cout << "\nConstrutor de Data(" << id << ")executado" << "\n";
    }
    ~Data(){
        std::cout << "\nDestrutor ~Data(" << id << ")Executado\n";
    }
};

int Data::contador = 1;

int main(){
    {
    Data Agenda1;
        {
            Data Agenda2;
            /*Agora o Agenda3 está na HEAP e não será destruído ao final do escopo {}, só será destruido se for utilizado a função delete*/
            Data *Agenda3 = new Data;
            delete(Agenda3);
        }
    Data Agenda4;
    }
    return 0;
}