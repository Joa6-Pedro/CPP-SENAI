#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>


int main(){

    srand(time(0));
    bool jogando = true;
    
    while (jogando) {
        short nVitorias, nDerrotas, nEmpates;
        short opc;
        short numPC = rand() % 3 + 1;
        std::string escolhaPlayer,escolhaPC;
        char escolhaParaChar;
        
        
        //define escolha do player
        std::cout << "\nEscolha pedra, papel ou tesoura: ";
        std::cin >> escolhaPlayer;
        escolhaPlayer[0] = std::toupper(escolhaPlayer[0]);
        
        
        //Transforma a escolha do player de string para char (o switch n aceita string)
        if (escolhaPlayer == "Pedra") {
            escolhaParaChar = 'R';
        }else if (escolhaPlayer == "Papel") {
            escolhaParaChar = 'P';
        }else if (escolhaPlayer == "Tesoura") {
            escolhaParaChar = 'S';
        }
        
        //define escolha da máquina
        switch (numPC) { 
            case 1: escolhaPC = "Pedra"; break;
            case 2: escolhaPC = "Papel"; break;
            case 3: escolhaPC = "Tesoura"; break;
        }
        
        //define condições de empate ou vitoria para cada escolha;
        bool empate = escolhaPlayer == escolhaPC;
        bool pedraGanha = escolhaPC == "Tesoura" && escolhaParaChar == 'R';
        bool papelGanha = escolhaPC == "Pedra" && escolhaParaChar == 'P';
        bool tesouraGanha = escolhaPC == "Papel" && escolhaParaChar == 'S';
        bool ganhou = false;
        
        //Decide o resultado
        if (pedraGanha || tesouraGanha || papelGanha) {
            ganhou = true;
        }

        //Exibe o resultado e as escolhas
        std::cout << "\n********************************************" << std::endl;
        std::cout << "                      ESCOLHAS                " << std::endl;
        if (empate) {
            std::cout << "\nVocê escolheu: " << escolhaPlayer << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "A máquina também escolheu " << escolhaPC << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "O resultado foi empate!" << std::endl;
            nEmpates++;
        }else if(!ganhou && !empate) {
            std::cout << "\nVocê escolheu: " << escolhaPlayer << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "A máquina escolheu: " << escolhaPC << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Você perdeu!" << std::endl;
            nDerrotas++;
        }else if(ganhou) {
            std::cout << "\nVocê escolheu: " << escolhaPlayer << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "A máquina escolheu: " << escolhaPC << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Você ganhou!" << std::endl;
            nVitorias++;
        }
        std::cout << "\n********************************************" << std::endl;
        
        //Exibe o placar de jogo
        std::cout << "\n____________________________________________" << std::endl;
        std::cout << "                      PLACAR                  " << std::endl;
        std::cout << "Vitórias: " << nVitorias << std::endl;
        std::cout << "Derrotas: " << nDerrotas << std::endl;
        std::cout << "Empates: " << nEmpates << std::endl;
        std::cout << "____________________________________________" << std::endl;
        
        //Decide se contiua rodando ou não
        std::cout << "\nJogar novamente? (1 - sim | 0 - não): ";
        std::cin >> opc;
        if (opc == 0) {
            jogando = false;
        }
        
    }
    

    return 0;
}
