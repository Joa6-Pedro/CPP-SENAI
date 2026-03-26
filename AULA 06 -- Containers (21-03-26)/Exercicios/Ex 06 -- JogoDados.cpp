/*
Exercício 06 - Lista 4
____________________________________________________________________________
Requisito: Faça um jogo de dados usando vector, no qual o usuário pode:
    • Informar quantos dados simultâneos quer jogar.
    • Informar quantas vezes quer jogar aqueles dados.
    • Após isso o sistema deverá fazer os lançamentos e mostrar o número de vezes
    que caiu cada resultado.
____________________________________________________________________________

autor: eu mesmo
data: 25/03/2026

*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <windows.h>

int main () {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    std::srand(time(0));

    int nDados, vezes;

    std::cout << "Digite quantos Dados deseja jogar por vez: ";
    std::cin >> nDados;

    std::cout << "Digite quantas vezes deseja jogar o(s) dado(s): ";
    std::cin >> vezes;

    std::vector<unsigned short> contador(6,0); //Inicia um vetor de tamanho 6 com todos os valores 0.
    
        std::cout << "\nRolando dados...";
        std::this_thread::sleep_for(std::chrono::milliseconds(300));

    for (int i = 0; i < vezes; i++){
        for (int j = 0; j < nDados; j++){
            int resultadoDado = (rand() % 6) + 1;
            contador.at(resultadoDado-1)++;
        }
    }

    std::cout << "\n\nResultados:\n"
              << "  O resultado foi 1:  " << contador[0] << " vezes.\n"
              << "  O resultado foi 2:  " << contador[1] << " vezes.\n"
              << "  O resultado foi 3:  " << contador[2] << " vezes.\n"
              << "  O resultado foi 4:  " << contador[3] << " vezes.\n"
              << "  O resultado foi 5:  " << contador[4] << " vezes.\n"
              << "  O resultado foi 6:  " << contador[5] << " vezes.\n\n";

    system("Pause");
    return 0;
}