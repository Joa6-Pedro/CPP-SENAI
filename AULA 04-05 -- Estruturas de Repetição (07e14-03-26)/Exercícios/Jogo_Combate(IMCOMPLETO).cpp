#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>


int main(){

    srand(time(0));
    bool jogando = true;
    
    while (jogando) {
        short nVitorias, nDerrotas;
        short opc;
        
        short hpPlayer = 10;
        short hpPC = 10;
        
        short poderCombatePlayer;
        short poderCombatePC = rand() % 6 + 1;
        
        short dmgPlayer;
        short dmgPC = rand() % 6 + 1
        
        std::string escolhaPlayer;

        bool playerGanhou = false;
        
        while (hpPlayer > 0 || hpPC > 0) {
            
            //Player escolhe que ataque usar
            std::cout << "- Cabeçada: Tem poder de combate 4, causa 3 de dano e toma 1 de dano por recoil" << std::endl;
            std::cout << "- Soco: Tem poder de combate aleatório (jogar no dado D6) causa dano aleatório (jogar no dado D6)"
            std::cout << "Escolha um ataque: ";
            std::cin >> escolhaPlayer;
            
            escolhaPlayer[0] = toupper(escolhaPlayer[0]);
            
            //define o poder de ataque e dano
            if (escolhaPlayer == "Cabeçada") {
                dmgPlayer = 3;
                poderCombatePlayer = 4;
                hpPlayer--;
            }else if (escolhaPlayer == "Soco") {
                poderCombatePlayer = rand() % 6 + 1;
                dmg = rand() % 6 + 1;
            }else {
                std::cout << "Erro! input invalido!"
                continue;
            }
            
            if (poderCombatePlayer > poderCombatePC) {
                hpPC -= dmgPlayer
            }else {
                hpPlayer -= dmgMaquina
            }
        }
        
        hpPlayer > 0? playerGanhou = true : playerGanhou = false;
        
        if (playerGanhou){
            nVitorias ++    
        }else {
            nDerrotas--
        }
        

        //Exibe o placar de jogo
        std::cout << "\n____________________________________________" << std::endl;
        std::cout << "                      PLACAR                  " << std::endl;
        std::cout << "Vitórias: " << nVitorias << std::endl;
        std::cout << "Derrotas: " << nDerrotas << std::endl;
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
