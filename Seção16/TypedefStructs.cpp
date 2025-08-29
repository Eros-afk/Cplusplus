#include <iostream>

/*Aqui foi criado um apelido para struct Livro. Este apelido se chama RegistroLivro

Caso não houvese o typedef RegistroLivro seria uma variável do tipo struct criada de forma compacta

*/
typedef struct Livro{
    int ID;
    float Preco;
    std::string Titulo;
    std::string Editora;
}RegistroLivros;

//Seria o mesmo que: typedef struct Livro RegistroLivro;

int main(){
    Livro Aluno1[5];
    /*Aqui foi criada uma variável do tipo RegistroLivro
    Porém RegistroLivro é apenas um apelido um alias para struct Livro
    Cabe ao pré-processador trocar este nome por struct Livro antes da compilação*/
    RegistroLivros Aluno2;
    //Aqui criou-se um ponteiro capaz de apontar para um variavel do tipo RegistroLivro
    RegistroLivros* Ponteiro;
    //Agora Ponteiro recebe o endereço do objeto Aluno2;
    Ponteiro = &Aluno2;
    Ponteiro->ID = 2;
    Ponteiro->Preco = 59.99;

    //Aqui é ponto pois o objeto Aluno2 está na stack
    Aluno2.ID = 1;
    Aluno2.Preco = 33.99;
    Aluno2.Titulo = "Marta";
    Aluno2.Editora = "Globo";

    return 0;
}