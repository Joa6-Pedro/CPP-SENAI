#include <iostream>

int main(){
    
    int idade;
    std::cout << "Digite sua idade:";
    std::cin >> idade;
    
    std::cout << "Você " << (idade >= 65 ? "tem direito a gratuidade." : "não tem direito a gratuidade") << std::endl;
    
    return 0;
}