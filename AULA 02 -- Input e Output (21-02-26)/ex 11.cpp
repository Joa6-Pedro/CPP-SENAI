#include <iostream>
#include <string>

int main() {

    std::string nome;
    int idade;
    float peso, altura;
    
    std::cout << "Digite seu nome: " << std::endl;
    getline(std::cin, nome);

    std::cout << "Digite sua idade: " << std::endl;
    std::cin >> idade;
    
    std::cout << "Digite seu peso: " << std::endl;
    std::cin >> peso;
    
    std::cout << "Digite sua altura em Metros: " << std::endl;
    std::cin >> altura;

    float alturaCM = altura*100;
    int tamanhoNome = nome.length();
    float imc = peso / (altura * altura);
    
    std::cout << "Seu nome é " << nome << " e tem " << tamanhoNome << " caracteres. Você tem " << idade << " anos e nasceu no ano de " << 2026-idade << ". Você mede " << alturaCM << " cm. Pesa " << peso << "KG e seu IMC é: " << imc << std::endl;
    
    return 0;
}