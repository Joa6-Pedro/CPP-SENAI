#include <iostream>

int main(){
    
    float idade, desconto, valor, valorDesconto, valorFinal, descontoDecimal;
    float preco = 200.00;

    std::cout << "Digite sua idade: ";
    std::cin >> idade;

    if (idade < 10) {
        desconto = 10;
    }else if (idade > 80) {
        desconto = 80;
    }else {
        desconto = idade;
    }
    
    valorDesconto = preco * (desconto/100);
    valorFinal = preco - valorDesconto;

    std::cout << descontoDecimal;

    std::cout << "O valor do produto é: R$" << preco << ". Com o desconto de: " << desconto << "%. O valor final é: R$" << valorFinal << std::endl; 
    return 0;
}