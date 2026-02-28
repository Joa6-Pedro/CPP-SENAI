#include <iostream>

int main(){
    
    float salario;
    float aumento;
    
    std::cout << "Digite seu salário: ";
    std::cin >> salario;
    
    if (salario < 1500) {
        aumento = 25;
        
    }else if (salario >= 1500 && salario <= 1999.99) {
        aumento = 20;
        
    }else if (salario >=2000 && salario <= 2999.99) {
        aumento = 15;
        
    }else if (salario >= 3000 && salario < 5000) {
        aumento = 10;
        
    }else if (salario >=5000) {
        aumento = 5;
    
    }
    int aumentoTxt = aumento;
    aumento /= 100;
    float salarioFinal = salario + salario*aumento;
    float aumentoNum = salario*aumento;

    std::cout << "Seu salário atual é de R$" << salario << ". Você recebeu um aumento de " << aumentoTxt <<"%! Isso equivale a R$"
    << aumentoNum <<". Seu salário agora é de R$" << salarioFinal << std::endl; 
    return 0;
}