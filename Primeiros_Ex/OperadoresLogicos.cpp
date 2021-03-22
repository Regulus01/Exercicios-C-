#include <iostream>
#include <locale.h>
int main()
{
    double Numero;
    bool ResultadoLogico;

    setlocale(LC_ALL, "Portuguese");
    std::cout << "Digite um Número: ";
    std::cin >> Numero;
    std::cout << "True = 1 e False = 0 " << std::endl;
    ResultadoLogico = ((Numero > 100) && (Numero != 0));
    std::cout << "O resultado lógico  da expressão((Numero > 100) && (Numero != 0)): " << ResultadoLogico << std::endl;
    ResultadoLogico = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
    std::cout << "O resultado lógico  da expressão ((Numero == 100) || (Numero > 200)) && (Numero < 1000)): " << ResultadoLogico << std::endl;

    system("PAUSE");
}