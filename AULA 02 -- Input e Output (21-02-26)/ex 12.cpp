#include <iostream>
#include <string>
#include <cmath>

int main() {

    float altura,largura,m2;
    
    std::cout << "Digite a altura da parede que deseja pintar: " << std::endl;
    std::cin >> altura;
    
    std::cout << "Digite a largura da parede: " << std::endl;
    std::cin >> largura;
    
    m2 = altura * largura;
    float latas = m2/3;
    int result = std::ceil(latas);
    
    std::cout << "A sua parede tem uma area de " << m2 << " m². Serão necessárias " << result << " para pintar toda a parede." << std::endl;

    return 0;
}