#include <iostream>
#include <locale.h>
#include <tchar.h>
using namespace std;

int main()
{   
    setlocale(LC_ALL, "Portuguese");;
    int NumVidas = 5;
    int Pontuacao = 1350;

    std::cout << "In�cio de jogo\n" << std::endl;
    std::cout << "N�mero de vidas: "<< NumVidas << std::endl;
    std::cout << "Pontua��o: " << &Pontuacao << "\n";

    NumVidas -= 1;
    Pontuacao -= 350; 

    std::cout << "\nN�mero de vidas: "<< NumVidas << std::endl;
    std::cout << "Pontua��o: " << Pontuacao << "\n";
    cout << "Tamanho da vari�vel NumVidas: " << sizeof(NumVidas) << "Bytes" << endl;
    system("PAUSE");
}