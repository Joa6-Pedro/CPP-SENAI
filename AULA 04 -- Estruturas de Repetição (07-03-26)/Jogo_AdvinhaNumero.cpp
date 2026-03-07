#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>


int main(){
    
    srand(time(0));
    bool jogando = true;
    short escolha;
    
    while (jogando) {
        short tentativas = 10;
        int chute;
        
            std::cout << "________________________________________________________________________" << std::endl;
            std::cout << "\nSeja bem vindo! Vamos começar o jogo!\n" << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            std::cout << "Pensando em um número..." << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            int num = rand() % 10000 + 1;
            std::cout << "Numero escolhido!" << std::endl;
            
        for (int i=1; i <= tentativas; i++) {
        
            std::cout << "\nDigite um número de 1 a 10000: ";
            std::cin >> chute;
            std::cout << "Processando seu chute..." << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
            
            if (chute == num){
                std::cout << "Parabéns você advinhou o número!!!" << std::endl;
                break;
            }else if (chute > num && i < 10){
                std::cout << "O número secreto é menor que " << chute << ". Tente novamente." << std::endl;
                std::cout << "Tentativas restantes: " << tentativas-i << std::endl;
            }else if (chute < num && i < 10){
                std::cout << "O número secreto é maior que " << chute << ". Tente novamente." << std::endl;
                std::cout << "Tentativas restantes: " << tentativas-i << std::endl;
            }else if (chute != num){
                std::cout << "Você não conseguiu acertar o número." << std::endl;
            }else {
                std::cout << "Erro! número invalido. Tente novamente." << std::endl;
            }
            
        }
        
        std::cout << "\nO número era: " << num << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));

        std::cout << "\nDigite 1 para jogar novamente | Digite 0 para encerrar o programa: ";
        std::cin >> escolha;
        
        switch (escolha) {
            case 1:
                jogando = true;
                break;
            case 0: 
                jogando = false;
                std::cout << "\nEncerrando programa. Obrigado por jogar!" << std::endl;
                std::this_thread::sleep_for(std::chrono::milliseconds(1000));
                break;
            default:
                std::cout << "\nErro! escolha inválida. Encerrando programa...";
                jogando = false;
                break;
        }
    }
    



    return 0;
}
