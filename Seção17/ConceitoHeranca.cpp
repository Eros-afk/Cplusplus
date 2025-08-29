#include <iostream>
//Classe base também chamada de Superclasse, Classe Mãe/Pai;
class Base{
    /*As seções public, protegida e privada de uma classe devem ser declaradas nesta ordem: Public depois protected e private
    Indica que os membros do objeto criado a partir desta classe terão acesso direto a todos os atributos e funções presentes na seção public*/
    public:
    void SolicitarNumeros(){
        std::cout << "Num1: ";
        std::cin >> Num1;
        std::cout << "Num2: ";
        std::cin >> Num2;
        /*Chamada do método privado da classe dentro da própria classe o que é permitido
        Ou seja não é necessário ter todos os métodos públicos. Neste caso apenas SolicitarNumeros é público e isso basta, pois este método irá chamar os demais métodos privados da classe*/
        MostrarResultado(Num1, Num2);
    }

    /*Aqui indica que os membros da seção private só serão acessíveis dentro do código da classe. O objeto não poderá acessar diretametne estes itens atributos e métodos*/
    private:
    float Num1, Num2;
    float Soma(int Num1, int Num2){
        return (Num1 + Num2);
    }
    //Esse método só pode ser chamado dentro da classe
    void MostrarResultado(int Num1, int Num2){
        std::cout << "Soma de: " << Num1 << "+" << Num2 << " = " << Soma(Num1, Num2) << "\n";
    }
};

//Agora declaramos uma classe que herda da classe Base, porém ela não tem nada e está vazia. A classe Derivada também é chamada de subclasse, classe filha/filho.
class Derivada : public Base{

};

int main(){
    Derivada Obj;
    Obj.SolicitarNumeros();
    /*Isso indica que uma classe herda tudo de sua classe Base(Superclasse) mas NÃO HERDA OS ITENS PRIVADOS(PRIVATE) DA SUPERCLASSE(CLASSE BASE)*/
    return 0;
}