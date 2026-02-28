#include <iostream>

int main() {

    double c, f;
    
    std::cout << "Digite o valor a ser convertido: " << std::endl;
    std::cin >> c;
    
    f = (c * 1.8 + 32);
    
    std::cout << c << "ºC é igual a "<< f << "ºF" << std::endl;
    
    return 0;
}