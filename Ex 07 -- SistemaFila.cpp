/*
Exercício 07- Lista 4
____________________________________________________________________________
Requisito: Simule uma fila de atendimento usando vector. O sistema deve permitir:
    • Adicionar uma pessoa ao final da fila.
    • Atender (remover) a primeira pessoa.
    • Listar todas as pessoas na fila.
    • Interface: Crie um menu de opções com (Adicionar, Atender, Listar, Sair).
____________________________________________________________________________

autor: Eu mesmo
data: 27/03/2026

*/
#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));

    std::vector<std::string> nomes = {
        "Alice","Bruno","Carla","Daniel","Eduarda","Francisco"
        "Felipe","Gabriel","Helena","Ícaro","João","Júlia"
    };
    std::vector<std::string> fila;
    bool rodando = true;
    
    while (rodando) {
        
        short opc;

        while (true) {
            std::cout << "\nO que deseja fazer?: \n"
                      <<  "  1 - Adicionar cliente à fila;\n"
                      <<  "  2 - Atender cliente;\n"
                      <<  "  3 - Listar todos os cliente na fila;\n"
                      <<  "  0 - Sair da aplicação.\n";
            std::cin >> opc;
            
            if (opc != 1 && opc != 2 && opc !=3 && opc!=0) {
                std::cout << "Opção inválida. Tente novamente.\n";
                continue;
            }
            break;
        }

        switch (opc) {
            case 1:
                std::cout << "\nCliente adicionado!\n";
                fila.push_back(nomes[rand() % nomes.size()]);
                break;
            case 2:

                if (fila.size() > 0) {
                    std::cout << "\nCliente atendido!\n";
                    fila.erase(fila.begin());
                }
                else std::cout << "\nNão há nenhum cliente na fila.\n";
                break;

            case 3:

                if (fila.size() > 0) {
                    std::cout << "\n";
                    for (int i = 0; i < fila.size(); i++){
                        std::cout << "Posição " << i+1 << ": " << fila[i] << "\n";
                    }
                }
                else std::cout << "\nNão há nenhum cliente na fila.\n";
                break;

            case 0:
                rodando = false;
                break;
            }

    }

    std::cout << "\n\nPrograma Finalizado!\n";
    system("Pause");
    return 0;
}