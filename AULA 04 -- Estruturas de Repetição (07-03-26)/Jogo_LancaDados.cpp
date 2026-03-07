#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>


int main(){

    srand(time(0));
    
    int n;
    short dado1, dado2;
    
    int quantos2 = 0;
    int quantos3 = 0;
    int quantos4 = 0;
    int quantos5 = 0;
    int quantos6 = 0;
    int quantos7 = 0;
    int quantos8 = 0;
    int quantos9 = 0;
    int quantos10 = 0;
    int quantos11 = 0;
    int quantos12 = 0;
    
    std::cout << "\nDigite quantas vezes deseja lançar os dados: ";
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        //atribui o valor a cada dado
        dado1 = rand() % 6 + 1;
        dado2 = rand() % 6 + 1;
        
        //calcula o resultado dos dois dados
        short resultado = dado1 + dado2;
        
        //calcula quantas vezes ocorreu cada resultado
        switch (resultado) {
            case 2:
                quantos2++;
                break;
            case 3:
                quantos3++;
                break;
            case 4:
                quantos4++;
                break;
            case 5:
                quantos5++;
                break;
            case 6:
                quantos6++;
                break;
            case 7:
                quantos7++;
                break;
            case 8:
                quantos8++;
                break;
            case 9:
                quantos9++;
                break;
            case 10:
                quantos10++;
                break;
            case 11:
                quantos11++;
                break;
            case 12:
                quantos12++;
                break;
        }
    }
    
    std::cout << "Lançando dados..." << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));
    
    //Exibe na tela
    std::cout << "\nVezes que os resultados dos dados foi 2: " << quantos2 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 3: " << quantos3 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 4: " << quantos4 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 5: " << quantos5 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 6: " << quantos6 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 7: " << quantos7 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 8: " << quantos8 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 9: " << quantos9 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 10: " << quantos10 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 11: " << quantos11 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    std::cout << "Vezes que os resultados dos dados foi 12: " << quantos12 << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    return 0;
}
