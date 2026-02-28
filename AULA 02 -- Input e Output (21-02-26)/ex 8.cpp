#include <iostream>

int main() {

    int nota1, nota2;
    
    std::cout << "Digite a primeira nota: " << std::endl;
    std::cin >> nota1;
    
    std::cout << "Digite a segunda nota: " << std::endl;
    std::cin >> nota2;
    
    int media = (nota1 + nota2) / 2;
    std::cout << "A nota média do aluno é " << media << std::endl;

    return 0;
}