#include <iostream>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int Numero01;
    int Numero02;
    int Soma, Sub, Mult; 
    float Div;
    int Resto; 

    std::cout <<"Digite o primeiro n�mero: ";
    std::cin >> Numero01;
    std::cout <<"Digite o primeiro n�mero: ";
    std::cin >> Numero02;
    std::cout << "\nNumero01 = " << Numero01 << std::endl;
    std::cout << "Numero02 = " << Numero02 << std::endl;
    Soma = Numero01 + Numero02;
    std::cout << "\nA soma dos dois n�mero �: " << Soma << std::endl;
    Sub = Numero01 - Numero02;
    std::cout << "\nA subtra��o dos dois n�mero �: " << Sub << std::endl;
    Mult = Numero01 * Numero02;
    std::cout << "\nA multiplica��o dos dois n�mero �: " << Mult << std::endl;
    Div = Numero01 / Numero02;
    std::cout << "\nA divis�o dos dois n�mero �: " << Div << std::endl << std::endl;
    Resto = Numero01 % Numero02;
    std::cout << "\nO resto da divis�o dos dois n�mero �: " << Resto << std::endl << std::endl;

    system("PAUSE");

}