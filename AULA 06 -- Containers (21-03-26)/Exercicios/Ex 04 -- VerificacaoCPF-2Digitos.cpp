/*

Exercício 04 - Lista 4
____________________________________________________________________________

Requisito: Faça um programa que o usuário digite um CPF (exemplo: 123.456.789-10) e o sistema
valide se os dois dígitos verificadores estão corretos (no caso do exemplo, o número 4 e
número 0 após o traço)
____________________________________________________________________________

autor: eu mesmo
data: 25/03/2026


*/
#include <iostream>
#include <array>
#include <string>
#include <thread>
#include <chrono>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    std::string CPF;
    std::array<short,11> numCPF{};

    int calculo = 0;
    short multiplicador = 10;
    bool valido1 = false;
    bool valido2 = false;
    
    std::cout << "Digite um CPF no padrão (xxx.xxx.xxx-xx): ";
    std::cin >> CPF;
    //std::this_thread::sleep_for(std::chrono::milliseconds(500));
    
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

        calculo += numCPF[i] * multiplicador;
        multiplicador--;
        
    }
    
    calculo = (calculo * 10) % 11;
    
    if (calculo > 9) calculo = 0;
    
    if (calculo == numCPF[9]) valido1 = true;
    
    
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
    if (!valido1){
        std::cout << "\nLogo...\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1500));
        std::cout << "CPF Invalido." << "\n\n";
        return 0;
    }
    
    //************************* Calculo 2ºDigito *****************************************************
    
    calculo = 0;
    multiplicador = 11;
    for (short i = 0; i < 10; i++) {

        calculo += numCPF[i] * multiplicador;
        multiplicador--;
    
    }

    calculo = (calculo * 10) % 11;
    
    if (calculo > 9) calculo = 0;
    
    if (calculo == numCPF[10]) valido2 = true;

    std::cout << "\nSegundo digito verificador: " << numCPF[10];
    std::cout << "\nResultado do calculo: " << calculo;
    std::cout << "\nLogo...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));
    std::cout << (valido1&&valido2? "CPF Valido.": "CPF Invalido.") << "\n\n";
    

    system("Pause");
    return 0;
}