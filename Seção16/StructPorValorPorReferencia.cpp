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

/*Neste caso criamos uma versão sobrecarregada da função AlterarDados. Agora nesta assinatura da função AlterarDados é recebido um parâmetro do tipo ponteiro capaz de apontar para uma variável(objeto) do tipo struct Aluno
lembre-se: Se um dado é um ponteiro ele recebe e pode ter dentro dele um endereço de memória.. Logo ao chamar a função AlterarDados nesta versão com ponteiros, deve-se enviar endereço do objeto!!!*/
void AlterarDados(Aluno* Dados);
void MostrarDados(Aluno* Dados);

int main(){
    /*Agora criamos aqui um outro objeto via ponteiros que irá para a heap da RAM e devemos acessar os membros pela notação flecha*/
    Aluno* Aluno2 = new Aluno;
    Aluno Aluno3; /*Criou-se outro objeto, mas Aluno3 não é um ponteiro para chamar a feunção AlterarDados que modifica este objeto via ponteiros precisamos enviar o endereço de memória de Aluno3*/

    Aluno Aluno1 = {1111, "Fulano", "TI", 4, 990.50};
    //Aluno1 já é um objeto do tipo struct criado e instanciado
    //Enviamos para a função MostrarDado a variável Aluno1(nesse caso é um objeto do tipo struct Aluno)
    std::cout << "Antes de modificar os dados" << std::endl;
    AlterarDados(&Aluno3);
    MostrarDados(&Aluno3);
    MostrarDados(Aluno1);
    AlterarDados(Aluno1);
    std::cout << "Depois de modificar os Dados\n\n";
    MostrarDados(Aluno1);
    
    /*Aqui enviamos Aluno2 para a função AlaterarDados
    Aluno2 é um ponteiro que recebeu dentro dele o endereço do objeto criado a partir da struct Aluno
    Logo enviar Aluno2 significa que estamos enviando o endereço de memória do objeto Aluno criado em new Aluno*/
    AlterarDados(Aluno2);
    std::cout << "\nDepois de modificar os dados\n";
    MostrarDados(Aluno2);
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

void AlterarDados(Aluno *Dados)
{
    /*Aqui fazemos o desreferenciamento de ponteiros
    (*...). pode ser substituido por ->*/
    Dados->Nome = "Cicrano";
    Dados->Curso = "Biologia";
    Dados->Semestre = 2;
    Dados->Matricula = 33333;
    Dados->Mensalidade = 899.90;
}

/*O Dado abaixo é um ponteiro do tipo Aluno
Irá receber dentro dele o endereço contido em Aluno2 e portanto vai conseguir modificar o valor de Aluno2*/
void MostrarDados(Aluno *Dados)
{
    std::cout << "*****Dados Do Aluno*****\n";
    std::cout << "Nome: " << Dados->Nome << std::endl;
    std::cout << "Curso: " << Dados->Curso << std::endl;
    std::cout << "Semestre: " << Dados->Semestre << std::endl;
    std::cout << "Matricula: " << Dados->Matricula << std::endl;
    std::cout << "Mensalidade: " << "R$" << std::fixed << std::setprecision(2) <<  Dados->Mensalidade << std::endl;
}
