#include <iostream>

class Casa
{
	
private:
	int NumQuartos{ 4 };
	float Tamanho{ 90.0f };
	bool bTemSuite{ true };

public:
	void MostrarTamanho();
	int ObtenhaNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);
	
}; 

int main()
{
	/*Casa CasaDePraia;
	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(6);*/
    Casa *CasaDePraia = new Casa();
    /*Nesse caso criamos, instaciamos um objeto via alocação dinâmica de memória, utilizando ponteiros*. Basicamente é o mesmo que declarar da forma "tradicional". Criamos um objeto baseado na classe Casa e o endereço de memória deste objeto será colocado em CasaDePraia*/

    /*Contudo trata-se de um ponteiro. Devemos acessar o apontado pelo desreferenciamento* 
    Logo CasaDePraia.ObtenhaNumeroDeQuartos() devemos usar o desreferenciamento nesse caso o ponteiro é *CasaDePraia
    Existe aqui uma nova estrutura de variável, aqui há atributos e métodos que são acessiveis via ponto.*/

    /*Ficar digitando (*abc). cansa
    Para otimizar foi feito
    (*CasaDePraia). == ->
    É chamado de notação flecha
    Mas tudo continua como notação ponto.
    Temos:
    (*CasaDePraia).SetNumQuartos(5)
    Teremos:
    CasaDePraia->SetNumQuartos(5)*/
	std::cout << "\n Num Quartos: " << CasaDePraia->ObtenhaNumeroDeQuartos();
	std::cout << "\n Tem Suite: ";
    CasaDePraia->TemSuite() ? std::cout << "Sim": std::cout << "Não" << "\n";
	std::cout << "\n";
	system("PAUSE");
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "\nTamanho: " << Tamanho;
}

int Casa::ObtenhaNumeroDeQuartos()
{
	return NumQuartos;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if ((Num <= 6) && (Num >= 0))
	{
		NumQuartos = Num;
	} 
	else
	{
		std::cout << "\nNumero de Quartos Invalidos\n";
	}

}