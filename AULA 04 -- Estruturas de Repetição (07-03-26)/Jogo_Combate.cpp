#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>


int main(){

    srand(time(0));
    bool jogando = true;
    
    while (jogando) {
        std::cout << "                                                CLUBE DA LUTA                          " << std::endl;
        
        short nVitorias = 0;
        short nDerrotas = 0;
        short opc;
        
        short hpPlayer = 10;
        short hpPC = 10;
        
        short poderCombatePlayer;
        short poderCombatePC = rand() % 6 + 1;
        
        short dmgPlayer;
        short dmgPC = rand() % 6 + 1;
        
        short escolhaPlayer;

        bool playerGanhou = false;
        
        while (hpPlayer > 0 && hpPC > 0) {
            
            //Player escolhe que ataque usar
            std::cout << "\n________________________________________________________________________________________________________________" << std::endl;
            std::cout << " 1 - Cabeçada: Tem poder de combate 4, causa 3 de dano e toma 1 de dano por recoil" << std::endl;
            std::cout << " 2 - Soco: Tem poder de combate aleatório (jogar no dado D6) causa dano aleatório (jogar no dado D6)" << std::endl;
            std::cout << "Escolha um ataque: ";
            std::cin >> escolhaPlayer;
            std::cout << "__________________________________________________________________________________________________________________" << std::endl;
            
            //define o poder de ataque e dano
            if (escolhaPlayer == 1) {
                dmgPlayer = 3;
                poderCombatePlayer = 4;
                hpPlayer--;
            }else if (escolhaPlayer == 2) {
                poderCombatePlayer = rand() % 6 + 1;
                dmgPlayer = rand() % 6 + 1;
            }else {
                std::cout << "Erro! input invalido!" << std::endl;
                continue;
            }
            
            std::this_thread::sleep_for(std::chrono::milliseconds(600));
            
            std::cout << "\n**********************************************************************" << std::endl;
            std::cout << "Seu poder de combate: " << poderCombatePlayer << std::endl;
            std::cout << "Poder de combate do adversário: " << poderCombatePC << std::endl;
            
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            if (poderCombatePlayer > poderCombatePC) {
                hpPC -= dmgPlayer;
                std::cout << "\nVocê usou : " << ((escolhaPlayer == 1)? "1 - Cabeçada": "2 - Soco") << ".\nDano causado: " << dmgPlayer << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(300));
                std::cout << "  - Seu hp: " << hpPlayer << std::endl;
                std::cout << "  - Hp do adversário: " << hpPC << std::endl;
                std::cout << "**********************************************************************" << std::endl;
            }else {
                hpPlayer -= dmgPC;
                std::cout << "\n**********************************************************************" << std::endl;
                std::cout << "O adversário usou : Soco.\nDano causado: " << dmgPC << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(300));
                std::cout << " - Seu hp: " << hpPlayer << std::endl;
                std::cout << " - Hp do adversário: " << hpPC << std::endl;
                std::cout << "\n**********************************************************************" << std::endl;
            }
        }
        
        hpPlayer > 0? playerGanhou = true: playerGanhou = false;
        
        if (playerGanhou){
            nVitorias ++;    
        }else {
            nDerrotas--;
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
