/*
Exercício 03 - Lista 4
____________________________________________________________________________

Requisito: Faça um programa que o usuário digite um CPF (exemplo: 123.456.789-10)
e o sistema valide se o primeiro digito verificador está correto
(no caso do exemplo,o número 1 após o traço). 
Utilize array de short para os números do CPF.
____________________________________________________________________________

autor: eu mesmo
data: 21/03/2026

*/

#include <iostream>
#include <array>
#include <windows.h>
#include <thread>
#include <chrono>

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::string CPF;
    std::array<short,11> numCPF{};
    std::array<short,9> multiplicadores = {10,9,8,7,6,5,4,3,2};

    int calculo = 0;

    bool valido = false;
    
    std::cout << "Digite um CPF no padrão (xxx.xxx.xxx-xx): ";
    std::cin >> CPF;
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
    short j=0;
    for (short i = 0; i < CPF.length(); i++) {
        
        if (CPF[i] == '.' || CPF[i] == '-') {
            continue;
        }else{
            numCPF[j] = CPF[i] - '0';
            j++;
        }
        
    }

    for (short i = 0; i < 9; i++) {
        calculo += numCPF[i] * multiplicadores[i];
    }
    
    calculo = (calculo * 10) % 11;
    
    if (calculo > 9) calculo = 0;
    
    if (calculo == numCPF[9]) valido = true;
    
    
    std::cout << "\nCPF: ";
    for (short i = 0; i < 11; i++) {
        
        std::cout << numCPF[i];
        if (i == 2 || i == 5) {
            std::cout << '.';
        }else if (i == 8) {
            std::cout << '-';
        }
        
    }
    
    std::cout << "\nPrimeiro digito verificador: " << numCPF[9];
    std::cout << "\nResultado do calculo: " << calculo;
    std::cout << "\nLogo...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    std::cout << (valido? "CPF Valido.": "CPF Invalido.") << "\n\n";
    
    system("Pause");
    return 0;
}
