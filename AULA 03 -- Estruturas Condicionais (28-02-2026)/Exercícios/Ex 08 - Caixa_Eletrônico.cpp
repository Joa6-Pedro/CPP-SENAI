#include <iostream>
#include <iomanip>

int main(){

    int valorTotal, valorRestante;
    int nota200, nota100, nota50, nota20, nota10, nota5, nota2, nota1;
    nota200 = 0;
    nota100 = 0;
    nota50 = 0;
    nota20 = 0;
    nota10 = 0;
    nota5 = 0;
    nota2 = 0;
    nota1 = 0;
    
    std::cout << "Digite um valor para sacar: ";
    std::cin >> valorTotal;
    
    //std::cout << std::fixed << std::setprecision(2) << valor;
    valorRestante = valorTotal;
    
    while (valorRestante > 0) {
        if (valorRestante >= 200) {
            nota200 += 1;
            valorRestante -= 200;
        }else if (valorRestante >= 100 ) {
            nota100 += 1;
            valorRestante -= 100;
        }else if (valorRestante >= 50 ) {
            nota50 += 1;
            valorRestante -= 50;
        }else if (valorRestante >= 20) {
            nota20 += 1;
            valorRestante -= 20;
        }else if (valorRestante>= 10) {
            nota10 += 1;
            valorRestante -= 10;
        }else if (valorRestante >= 5) {
            nota5 += 1;
            valorRestante -= 5;
        }else if (valorRestante >= 2) {
            nota2 += 1;
            valorRestante -= 2;
        }else if (valorRestante >= 1) {
            nota1 += 1;
            valorRestante -= 1;
        }
    }
    
    std::cout << "\nCédulas de 200 reais:" << nota200 << std::endl
    <<"Cédulas de 100 reais: " << nota100 << std::endl
    <<"Cédulas de 50 reais: " << nota50 << std::endl
    <<"Cédulas de 20 reais: " << nota20 << std::endl
    <<"Cédulas de 10 reais: " << nota10 << std::endl
    <<"Cédulas de 5 reais: " << nota5 << std::endl
    <<"Cédulas de 2 reais: " << nota2 << std::endl
    <<"Cédulas de 1 real: " << nota1 << std::endl;

    return 0;
}