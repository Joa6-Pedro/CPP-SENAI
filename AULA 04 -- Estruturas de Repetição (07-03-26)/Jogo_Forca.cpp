#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

int main() {
 
    srand(time(0));
    
    std::cout << "###########################################\n";
    std::cout << "            JOGO DA FORCA                  \n";
    
    bool acertou = false;
    bool letra;
    bool letraJafoiRegistrada;
    
    const std::string PALAVRAS[] = {
        "vasco da gama", //01
        "arara", //02
        "banana", //03
        "pindamonhagaba", //04
        "rio de janeiro", //05
        "computador", //06
        "programacao", //07
        "teclado", //08
        "internet", //09
        "algoritmo", //10
        "elefante", //11
        "girassol", //12
        "astronauta", //13
        "bicicleta" //14
    };

    std::string palavra = PALAVRAS[rand() % 14];

    std::string palpite, chutarPalavra;
    std::string letrasDescartadas = "";
    std::string placeholder = "";

    char letraPalpite;
    

    unsigned short vidas = 10;
    unsigned short letrasCorretas = 0;
    unsigned short comprimentoPalavra = palavra.length();


    for (short iGeraPlaceholder = 0; iGeraPlaceholder < comprimentoPalavra; iGeraPlaceholder++) {
        
        if (!isspace(palavra[iGeraPlaceholder])) {
            placeholder += '_';
        }else{
            placeholder += ' ';
            continue;
        }
        
    }
    
    std::cout << "\nEscolhendo uma palavra...\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    std::cout << "\nPalavra escolhida!\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "\n###########################################\n";
    
    for (short tentativas = 1; tentativas <= vidas; tentativas++) {
        
        
        if (letrasCorretas > (comprimentoPalavra / 4)) {
            std::cout << "\nQuer chutar a resposta? (você so tem uma chance): ";
            std::cin >> chutarPalavra;
        }
        
        std::this_thread::sleep_for(std::chrono::milliseconds(500));

        
        if(chutarPalavra == "sim" || chutarPalavra == "Sim") {
            std::cin.ignore();
            std::cout << "\nDigite uma resposta (escreva todas as letra minusculas): ";
            getline(std::cin, palpite);
        }else {
            std::cout << "\nDigite uma letra (use minusculas): ";
            std::cin >> palpite;
        }
        
        
        if (chutarPalavra != "sim" && chutarPalavra != "Sim") {
            
            if (placeholder == palavra) {
                acertou = true;
                tentativas = vidas;
                break;
            }
            
        }else {
            if (palpite == palavra) {
                acertou = true;
                tentativas = vidas;
                break;
            }else {
                tentativas = vidas;
                break;
            }
        }
        
        letraPalpite = palpite[0];
     
        for (unsigned short i = 0; i < palpite.length(); i++) {
            
            if (isspace(palpite[i])) {
                continue;
            }else{
                letraPalpite = palpite[i];
            }
            
            letra = false;
            letraJafoiRegistrada = false;
            
            for (unsigned short j2 = 0; j2 < comprimentoPalavra; j2++) {
                
                char letraAtualPalavra = palavra[j2];
                
                if(letraPalpite == letraAtualPalavra && placeholder[j2] == '_') {
                    placeholder[j2] = letraPalpite;
                    letraJafoiRegistrada = true;
                    letrasCorretas++;
                }
                
            }
            
            if (!letraJafoiRegistrada) {
                letrasDescartadas += letraPalpite;
                letraJafoiRegistrada = true;
            }
            
        }
        

        
        std::cout << "\nLetras descartadas: " << letrasDescartadas << "\n";
        
        std::cout << "\nPalavra: " << placeholder << "\n";
        std::cout << "\nTentativas restantes: " << vidas-tentativas << "\n";
        std::cout << "\n###########################################\n";
    }
    
    std::cout << "\nA resposta era: " << palavra << "\n";
    
    std::cout << "\n__________________________________________________\n";
    std::cout << "\nFim de jogo!\n" << (acertou? "Parabéns você venceu!!": "Você não conseguiu acertar. Tente novamente.\n") << std::endl; 

    return 0;
}