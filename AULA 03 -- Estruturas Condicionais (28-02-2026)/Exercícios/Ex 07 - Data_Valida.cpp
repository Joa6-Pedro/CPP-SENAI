#include <iostream>

int main(){

    int ano, mes, dia;
    bool bissexto, dataValida;
    
    std::cout << "Digite uma data no padrao (dia mes ano) usando espaço no lugar de '/': ";
    std::cin >> dia;
    std::cin >> mes;
    std::cin >> ano;
    
    //Calcula se o ano é bissexto
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
    
    //Calcula se a data é valida
    switch (mes) {
        
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dia <= 31 && dia > 0? dataValida = true : dataValida = false;
            break;
            
        case 4: case 6: case 9: case 11:
            dia <= 30 && dia > 0? dataValida = true : dataValida = false;
            break;
            
        case 2:
            if (bissexto) {
                dia <= 29 && dia > 0? dataValida = true : dataValida = false;
                
            }else {
                dia <= 28 && dia > 0? dataValida = true : dataValida = false;
                
            }
            break;
            
        default:
            dataValida = false;
            break;
            
    }
    
    if (dia < 0 || ano < 0) {
        dataValida = false;
    }
    
    
    std::cout << "A data " << dia << "/" << mes << "/" << ano << (dataValida? " é válida." : " não é válida.") << std::endl;

    return 0;
}