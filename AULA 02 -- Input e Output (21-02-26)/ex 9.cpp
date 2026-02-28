#include <iostream>

int main() {

    float reais, dolar;
    
    std::cout << "Digite o valor a ser convertido: " << std::endl;
    std::cin >> reais;
    
    dolar = reais / 6;
    
    std::cout << "R$" << reais << " é igual a $" << dolar << std::endl;
    
    return 0;
}