#include <iostream>

int main() {

    int n1, n2;
    
    std::cout << "Digite um número inteiro: " << std::endl;
    std::cin >> n1;
    
    std::cout << "Digite outro número inteiro: " << std::endl;
    std::cin >> n2;
    
    int resultado = n1 + n2;
    std::cout << "Resultado: " << resultado << std::endl; 
    return 0;
}