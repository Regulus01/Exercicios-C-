#include <iostream>
#include <string> //biblioteca para usar espaços
 
int main()
{
	int Numero01, Numero02;
	std::cout << std::string(30, ' ') << "Digite o primeiro numero: ";
	std::cin >> Numero01;
	std::cout << std::string(30, ' ') << "Numero01 = " << Numero01 << std::endl;
	std::cout << std::string(30, ' ') << "Digite o segundo numero: ";
	std::cin >> Numero02;
	std::cout << std::string(30, ' ') << "Numero02 = " << Numero02 << std::endl << std::string(30, ' ');
	system("PAUSE");
}