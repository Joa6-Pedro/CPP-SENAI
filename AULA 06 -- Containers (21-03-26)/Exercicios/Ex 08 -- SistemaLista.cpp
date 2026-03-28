/*
Exercício 08 - Lista 4
____________________________________________________________________________
Requisito: Faça uma lista de compras usando vector. O sistema deve permitir:
    • Adicionar item à lista de compras.
    • Listar compras.
    • Remover item da lista de compras.
    • Alterar item da lista de compras.
    • Impedir inserção de itens duplicados.
____________________________________________________________________________

autor: Eu mesmo
data: 27/03/2026

*/
#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    struct Item {
        std::string quantia;
        std::string nome;
    };

    std::vector<Item> lista;
    bool rodando = true;

    while (rodando) {

        short opc;

        while (true) {
            std::cout << "\nO que deseja fazer?: \n"
                      <<  "  1 - Adicionar item à lista;\n"
                      <<  "  2 - Exibir lista;\n"
                      <<  "  3 - Remover item da lista;\n"
                      <<  "  4 - Alterar item da lista;\n"
                      <<  "  0 - Sair da aplicação.\n";
            std::cin >> opc;
            std::cin.ignore();

            if (opc != 1 && opc != 2 && opc !=3 && opc != 4 && opc!=0) {
                std::cout << "Opção inválida. Tente novamente.\n";
                continue;
            }
            break;
        }

        std::string nomeItem;
        bool encontrou = false;

        switch (opc) {
            case 1: {

                std::string quantidade;

                std::cout << "\nAdicionando Item à lista...";
                std::cout << "\nDigite o nome do item: ";
                std::getline(std::cin,nomeItem);

                for (auto& Item: lista) {
                    if (Item.nome == nomeItem) {
                        encontrou = true;
                        std::cout << "\nEste item já foi registrado.\n";
                        break;
                    }
                }

                if(!encontrou){
                    std::cout << "Digite a quantidade: ";
                    std::getline(std::cin,quantidade);

                    lista.push_back({quantidade, nomeItem});
                    std::cout << "\n" << nomeItem << " adicionado à lista!\n";
                }
                break;}

            case 2:

                if (lista.size() > 0){

                    std::cout << "\n__________________________________________________________________";
                    std::cout << "\nLista de Compras: \n";
                    for(auto& Item: lista){
                        std::cout << "  * " << Item.quantia << " - " << Item.nome << ";\n";
                    }
                    std::cout << "\n__________________________________________________________________\n";

                }else std::cout << "\nAdicione um item à lista antes.\n";
                break;

            case 3:
                if (lista.size() > 0){

                    std::cout << "\nPara remover um item digite o nome exatamente como está na lista: ";
                    std::getline(std::cin,nomeItem);
                    
                    for(int i = 0; i < lista.size(); i++){
    
                        if (nomeItem == lista[i].nome){
                            lista.erase(lista.begin() + i);
                            encontrou = true;
                            break;
                        }
    
                    }

                    std::cout << "\nO item \'"<< nomeItem << "\'"
                              <<(encontrou? " Foi removido!\n": "Não foi encontrado.\n");

                }else std::cout << "\nAdicione um item à lista antes.\n";
                break;

            case 4:
            
                if (lista.size() > 0){

                    std::cout << "\nPara alterar um item digite o nome exatamente como está na lista: ";
                    std::getline(std::cin,nomeItem);

                    short posicao;
                    for(int i = 0; i < lista.size(); i++){

                        if (nomeItem == lista[i].nome){
                            posicao = i;
                            encontrou = true;
                            break;
                        }
                    }

                    if (encontrou){
                        std::string alteracao;
                        
                        while (true) {
                            std::cout << "\nO que deseja alterar no item (quantia/nome)?: ";
                            std::cin >> alteracao;
                            std::cin.ignore();
                            alteracao[0] = toupper(alteracao[0]);

                            if (alteracao != "Quantia" && alteracao != "Nome") {
                                std::cout << "\nCampo inválido.";
                                continue;
                            }
                            break;
                        }
                        
                        std::string valor;
                        
                        if (alteracao == "Quantia"){

                            std::cout << "Digite a nova quantia: ";
                            std::getline(std::cin,valor);
                            lista[posicao].quantia = valor;
                            std::cout << "\nQuantia alterada com sucesso!\n";
                        }else if (alteracao == "Nome"){
                            std::cout << "Digite o novo nome: ";
                            std::getline(std::cin,valor);
                            lista[posicao].nome = valor;
                            std::cout << "\nNome alterado com sucesso!\n";
                        }

                    }else std::cout << "\nItem não encontrado.\n";

                }else std::cout << "\nAdicione um item à lista antes.\n";
                break;
                
            case 0:
                rodando = false;
                break;
        }

    }

    std::cout << "\n\nPrograma Finalizado!\n";
    system("Pause");
    return 0;
}