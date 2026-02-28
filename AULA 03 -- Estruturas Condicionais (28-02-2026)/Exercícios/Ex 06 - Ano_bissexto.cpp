#include <iostream>

int main(){
    
    int ano;
    bool bissexto;
    
    std::cout << "Digite um ano: ";
    std::cin >> ano;
    
    if (ano % 100 == 0) {
        
        if (ano % 400 == 0 && ano % 4 == 0) {
            bissexto = true;
            
        }else {
            bissexto = false;
        }
        
    }else {
        
        if (ano % 4 == 0) {
            bissexto = true;
            
        }else {
            bissexto = false;
            
        }
        
    }
    
    std::cout << "O ano de " << ano << (bissexto? " é bissexto": " não é bissexto.") << std::endl;
    
    return 0;
}