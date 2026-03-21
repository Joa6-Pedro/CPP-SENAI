/*
Exercício 02 - Lista 4
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

int main(){
    
    std::string CPF;
    std::array<short,11> numCPF;
    
    std::cout << "Digite um CPF no padrão (xxx.xxx.xxx-xx): ";
    std::cin >> cpf;
    
    for (int i = 0; i < CPF.lenght; i++) {
        if (CPF[i] == '.' || CPF[i] == "-") {
            continue;
        }else{
            numCPF[i] = 
        }
    }
    
    return 0;
}
