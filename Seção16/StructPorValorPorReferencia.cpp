#include <iostream>
#include <iomanip>
#include <string>

struct Aluno
{
    unsigned Matricula;
    std::string Nome;
    std::string Curso;
    unsigned Semestre;
    double Mensalidade;
};
//Já é um objeto de tipo desta struct

void MostrarDados(struct Aluno Dado);
//Agora criamos uma referência em Alterar dados... Desta forma Dado não irá mais receber uma simples cópia da Struct. &Dado será um novo alias, uma nova forma de manipular a struct Aluno1
void AlterarDados(Aluno &Dado);

int main(){
    Aluno Aluno1 = {1111, "Fulano", "TI", 4, 990.50};
    //Aluno1 já é um objeto do tipo struct criado e instanciado
    //Enviamos para a função MostrarDado a variável Aluno1(nesse caso é um objeto do tipo struct Aluno)
    std::cout << "Antes de modificar os dados" << std::endl;
    MostrarDados(Aluno1);
    AlterarDados(Aluno1);
    std::cout << "Depois de modificar os Dados\n\n";
    MostrarDados(Aluno1);
    return 0;
}

//Aluno1 é o argumento que será colocado no parâmetro Dado da função
void MostrarDados(Aluno Dado)
{
    std::cout << "*****Dados Do Aluno*****\n";
    std::cout << "Nome: " << Dado.Nome << std::endl;
    std::cout << "Curso: " << Dado.Curso << std::endl;
    std::cout << "Semestre: " << Dado.Semestre << std::endl;
    std::cout << "Matricula: " << Dado.Matricula << std::endl;
    std::cout << "Mensalidade: " << "R$" << std::fixed << std::setprecision(2) <<  Dado.Mensalidade << std::endl;
}

/*
Agora altera pois Dado não recebe mais uma cópia, um valor da struct Aluno1. Dado agora é uma referência para quem for enviada para a função AlterarDados. Dado será capaz de alterar Aluno1, pois é uma referência do mesmo
Aluno1 passa a ser referenciado por Dado
É como se fosse
Aluno &Dado = Aluno1
*/
void AlterarDados(Aluno &Dado)
{
    Dado.Nome = "Beltrano";
    Dado.Curso = "Engenharia";
    Dado.Semestre = 1;
    Dado.Matricula = 2222;
    Dado.Mensalidade = 870.99;
}
