#include <iostream>

class Casa{
    /*Estes são os atributos, as propriedades da classe e são representados por variáveis
    Serão as características de cada objeto criado a partir desta classe
    Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto*/
    //Por padrão em uma classe a visibilidade é do tipo private
    public:
    //Private: esta indicando que estes atributos só poderão ser acessados dietamente no código da classe Casa
    //Com public esses atributos estarão acessíveis fora do código da classe
        int numQuartos{4};
        float tamanho{90.0f};
        //No geral coloca b na frente de uma variável bool para identificar que ela é do tipo booleana(bool)
        bool bTemSuite{true};
        /*Public significa que estará acesível fora do código da classe*/
    public:
        //Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando for criado(instanciado) a partir desta classe.
        void mostrarTamanho();
        int obtenhaNumeroDeQuartos();
        bool temSuite();
        void setNumQuartos(int num);
};

int main(){
    /*Quando declaramos variáveis de tipos int, char, float, double, etc poderemos agora declarar variaveis tendo como tipo uma classe
    Se for do tipo classe, um local na memória será reservado para armazenar essa variável*/
    Casa CasaDePraia;
    //Como a função main está fora do código da classe, dentro dela não será possível acessar membros privados da classe Casa!
    //Contudo poderá ser acessado os membros public
    CasaDePraia;
    CasaDePraia.mostrarTamanho();
    CasaDePraia.setNumQuartos(6);
    std::cout << "\n Num Quartos: " << CasaDePraia.obtenhaNumeroDeQuartos();
    std::cout << "\n Tem Suites: " << CasaDePraia.temSuite() ? std::cout << "Sim" : std::cout << "Não" << std::endl;
    std::cout << std::endl;
    /*Para acessar os membros da classe Casa usamos neste caso a notação ponto
    NomeDoObjeto.NomeDoAtributo ou NomeDoObjeto.NomeDoMetodo ou função*/

    return 0;
}

/*O operador escopo indica que o método pertence a classe casa
Estes códigos pertencem a classe casa e portanto podem acessar diretamente os seus atributos privados*/
void Casa::mostrarTamanho()
{
    std::cout << "\nTamanho: " << tamanho;
}

int Casa::obtenhaNumeroDeQuartos()
{
    return numQuartos;
}

bool Casa::temSuite()
{
    return bTemSuite;
}

void Casa::setNumQuartos(int num)
{
    if (num <= 6 && num >= 0){
        numQuartos = num;
    } 
    else{
        std::cout << "\nNumero de quartos invalidos\n";
    }
}
