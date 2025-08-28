#include <iostream>
#include <ctime>

int main(){
    //O tipo de dados time_t é usado para representar o tempo de calendário
    time_t HoraAtual = time(0);

    /*Função localtime recebe tempo em segundos de uma variável do tipo time_t, converte para o tempo local, armazena os dados na struct e retorna um ponteiro para uma struct do tipo tm com os dados locais.*/
    tm* MinhaHora = localtime(&HoraAtual);
    std::cout << "Hora: " << MinhaHora->tm_hour << " : " << MinhaHora->tm_min << " : " << MinhaHora->tm_sec << "\n";

    std::cout << "Dia: " << MinhaHora->tm_mday << "\n"; 
    std::cout << "Mes: " << MinhaHora->tm_mon << "\n";
    std::cout << "Ano: " << 1900 + MinhaHora->tm_year << "\n";
    std::cout << ctime(&HoraAtual);
}