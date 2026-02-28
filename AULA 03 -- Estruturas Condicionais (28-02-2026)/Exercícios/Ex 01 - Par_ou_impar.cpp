#include <iostream>

int main(){
    
    int num;
    std::cout << "Digite um valor: ";
    std::cin >> num;
    
    std::cout << "O número " << num << (num % 2 == 0? " é par." : " é ímpar.") << std::endl;
    
    return 0;
}