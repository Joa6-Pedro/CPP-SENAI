/*
Exercício 05 - Lista 4
____________________________________________________________________________
Requisito: Peça ao usuário para digitar notas até que ele digite -1. Armazene os números em um
vector. Depois:
• Exiba a quantidade total de notas digitadas.
• Calcule a média de notas.
• Mostre a maior e a menor notas.
• Mostre as notas que foram menor que 5.
____________________________________________________________________________

autor: eu mesmo
data: 25/03/2026

*/

#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::vector<short> notas;
    
    while (true) {
        short nota;
        
        std::cout << "\nDigite uma nota: ";
        std::cin >> nota;
        
        if (nota == -1) break;

        notas.push_back(nota);

    }

    if (notas.size() < 1) {
        std::cout << "\nNenhuma nota foi digitada\n\n";
        system("Pause");
        return 0;
    }

    short media = 0;
    short menor = notas[0];
    short maior = notas[0];

    for (short nota: notas) {
        media += nota;
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;
    }

    media /= notas.size();

    std::cout << "\n\nNotas: [";
    for (short i: notas) {
        std::cout << i << " ";
    }std::cout << "]";

    std::cout << "\nMédia: " << media;
    std::cout << "\nMaior nota: " << maior;
    std::cout << "\nMenor nota: " << menor;
    std::cout << "\nNotas abaixo de 5: ";
    for (short i: notas) {
        if (i < 5) {
            std::cout << i << " ";
        }
    }std::cout << "\n\n";


    system("Pause");
    return 0;
}