#include <iostream>

int main() {
    int ano = 2026;
    int idade;

    std::cout << "Digite sua idade: " << std::endl;
    std::cin >> idade;
    
    int faltamAnos = 80 - idade;
    int anoFinal = 2026 + faltamAnos;
    
    std::cout << "O usuário completará 80 anos em: " << anoFinal << std::endl;
    return 0;
}