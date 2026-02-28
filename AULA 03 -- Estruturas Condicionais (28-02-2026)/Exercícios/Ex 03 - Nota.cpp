#include <iostream>

int main(){
    
    int n = 2;
    std::cout << "Digite " << n << " notas separadas por espaço: ";
    
    float media;
    
    for (int i = 0; i < n; i++) {
        float nota;
        std::cin >> nota;
        

        media += nota;
    }
    
    media /= n;
    
    if (media > 7) {
        std::cout << "Média: " << media <<  ". Aluno aprovado!" << std::endl;
    }else if (media <= 7 && media >= 5) {
        std::cout << "Média: " << media <<  ". Aluno ficou de recuperação." << std::endl;
    }else {
        std::cout << "Média: " << media <<  ". Aluno reprovado." << std::endl;
    }
    
    return 0;
}