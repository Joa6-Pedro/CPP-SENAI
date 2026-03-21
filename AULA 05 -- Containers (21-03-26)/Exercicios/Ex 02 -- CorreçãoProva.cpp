/*
Exercício 02 - Lista 4
____________________________________________________________________________
Requisito: Crie um sistema de correção automática de provas com 5 questões
de múltipla escolha. Use:
    • Um array char gabarito[5] para armazenar as respostas corretas 
    ('A', 'B', 'C', 'D').
    • Um array char respostas[5] para armazenar as respostas do aluno 
    (usuário insere respostas).
O programa deve:
    • Ler o gabarito e as respostas.
    • Corrigir a prova (mostrar quantas questões o aluno acertou).
    • Mostrar a porcentagem de acertos.
    • Listar quais questões o aluno errou, exibindo a alternativa correta 
    e a alternativa informada.
____________________________________________________________________________

autor: eu mesmo
data: 21/03/2026

*/

#include <iostream>
#include <array>
#include <string>

int main(){
    
    std::array<char, 5> gabarito = {'E','D','C','B','A'};
    std::array<char, 5> respostas;
    std::array<bool, 5> erradas = {false,false,false,false,false};
    
    int acertos = 0;
    int erros = 0;
    
    for (int i = 0; i < respostas.size(); i++) { 
        
        //Entrada das respostas
        std::cout << "Digite sua resposta para a questão ("<< i+1 <<  "): ";
        std::cin >> respostas[i];
        
        //Transforma em maiúscula
        respostas[i] = std::toupper(respostas[i]);
        
        //Verifica se acertou ou errou
        if (gabarito[i] == respostas[i]) {
            acertos++;
        }else {
            erros++;
            erradas[i] = true;
        }
    }std::cout << "______________________________________________\n";
    
    
    int porcentagem = 100 - (20*erros); //Calcula porcentagem
    
    std::cout << "\nTotal de acertos: " << acertos << "\n"; //Exibe total de acertos
    std::cout << "Taxa de acerto: " << porcentagem << "%\n"; //Exibe taxa de acerto
    std::cout << "______________________________________________\n";
    
    if (erros > 0) {
        std::cout << "\nVocê errou as questões:" << "\n"; //Exibe as questões erradas
        for (int i = 0; i < erradas.size(); i++) {
            if (erradas[i]){
                std::cout << "\n - Questão(" << i+1 << ") \n"
                          << "     - Sua resposta: " << respostas[i] << "\n"
                          << "     - Resposta correta: " << gabarito[i] << "\n";
            }
        }
    }else{
        std::cout << "\nVocê gabaritou! Parabéns!!!!\n";
    }
    
    return 0;
}
