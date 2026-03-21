/*
Exercício 01 - Lista 4
_______________________________________________________________________
Requisito: Uma loja registra suas vendas diárias da semana em um array de 
7 posições (domingo a sábado). Faça um programa que:
    • Peça ao usuário que informe os valores das vendas de cada dia.
    • Calcule o total da semana.
    • Calcule a média de vendas.
    • Informe o dia com maior e menor valor de vendas.
_______________________________________________________________________

autor: eu mesmo
data: 21/03/2026

*/

#include <iostream>
#include <array>

int main(){
    
    std::array<float, 7> dias;
    float total = 0;
    float maior, menor, media;
    int diaMaiorVenda, diaMenorVenda;
    
    for (int i = 0; i < dias.size(); i++) {
        
        //Entrada de valores
        std::cout << "Digite o valor para o dia " << i+1 << ": ";
        std::cin >> dias[i];
        
        //Define maior e menor
        if (i == 0) {
            maior = dias[i];
            menor = dias[i];
        }else if (dias[i] > maior) {
            maior = dias[i];
            diaMaiorVenda = i+1;
        }else if(dias[i] < menor) {
            menor = dias[i];
            diaMenorVenda = i+1;
        }
        
        //calcula total
        total += dias[i];
        
    }
    
    media = total / dias.size();
    
    std::cout << "\nTabela semanal: [ ";
    for (int j = 0 ; j < dias.size(); j++) {
        std::cout << dias[j] << ", ";
    }
    std::cout << "]\n";
    
    std::cout << "\nValor total da semana: " << total << "\n";
    
    std::cout << "Media de venda diária: " << media << "\n";

    std::cout << "Dia de menor venda: " << diaMenorVenda << ". Com valor de: " << menor << "\n";
   
    std::cout << "Dia de maior venda: " << diaMaiorVenda << ". Com valor de: " << maior << "\n";

    
    return 0;
}
