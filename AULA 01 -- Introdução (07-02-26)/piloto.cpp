#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    std::cout << "Olá Mundo!" << std::endl;
    system("Pause");


    return 0;
};