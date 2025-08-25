#include <iostream>

class Casa{
    /*Estes são os atributos, as propriedades da classe e são representados por variáveis
    Serão as características de cada objeto criado a partir desta classe
    Quando o programa estiver sendo executado e queremos saber qual é a situação do objeto em relação ao valor de seus atributos dizemos que queremos saber o ESTADO do objeto*/
    int numQuartos;
    float tamanho;
    //No geral coloca b na frente de uma variável bool para identificar que ela é do tipo booleana(bool)
    bool bTemSuite;
    //Estas são as operações da classe, ou métodos ou as funções que o objeto poderá executar quando for criado(instanciado) a partir desta classe.
    void mostrarTamanho();
    int obtenhaNumeroDeQuartos();
    bool temSuite();
};

int main(){
    /*Quando declaramos variáveis de tipos int, char, float, double, etc poderemos agora declarar variaveis tendo como tipo uma classe
    Se for do tipo classe, um local na memória será reservado para armazenar essa variável*/
    Casa CasaDePraia;

    return 0;
}

/*O operador escopo indica que o método pertence a classe casa*/
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
