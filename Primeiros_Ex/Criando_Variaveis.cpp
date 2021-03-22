#include <iostream>
#include <locale.h>
#include <tchar.h>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "Portuguese");;
    int NumVidas = 5;
    int Pontuacao = 1350;

    std::cout << "Início de jogo\n" << std::endl;
    std::cout << "Número de vidas: "<< NumVidas << std::endl;
    std::cout << "Pontuação: " << &Pontuacao << "\n";

    NumVidas -= 1;
    Pontuacao -= 350; 

    std::cout << "\nNúmero de vidas: "<< NumVidas << std::endl;
    std::cout << "Pontuação: " << Pontuacao << "\n";
    cout << "Tamanho da variável NumVidas: " << sizeof(NumVidas) << "Bytes" << endl;
    system("PAUSE");
}