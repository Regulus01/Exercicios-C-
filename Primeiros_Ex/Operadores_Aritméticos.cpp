#include <iostream>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int Numero01;
    int Numero02;
    int Soma, Sub, Mult; 
    float Div;
    int Resto; 

    std::cout <<"Digite o primeiro número: ";
    std::cin >> Numero01;
    std::cout <<"Digite o primeiro número: ";
    std::cin >> Numero02;
    std::cout << "\nNumero01 = " << Numero01 << std::endl;
    std::cout << "Numero02 = " << Numero02 << std::endl;
    Soma = Numero01 + Numero02;
    std::cout << "\nA soma dos dois número é: " << Soma << std::endl;
    Sub = Numero01 - Numero02;
    std::cout << "\nA subtração dos dois número é: " << Sub << std::endl;
    Mult = Numero01 * Numero02;
    std::cout << "\nA multiplicação dos dois número é: " << Mult << std::endl;
    Div = Numero01 / Numero02;
    std::cout << "\nA divisão dos dois número é: " << Div << std::endl << std::endl;
    Resto = Numero01 % Numero02;
    std::cout << "\nO resto da divisão dos dois número é: " << Resto << std::endl << std::endl;

    system("PAUSE");

}