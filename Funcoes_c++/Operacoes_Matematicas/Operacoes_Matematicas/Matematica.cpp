#include <iostream>
#include "Matematica.h"
#include <math.h>

void escolha()
{
	int escolha;
	float num1, num2;

	std::cout << "Digite um numero: " << std::endl;
	std::cin >> num1;

	std::cout << "Digite outro numero: " << std::endl;
	std::cin >> num2;

	do
	{
		std::cout << "Escolha uma operacao" << std::endl;
		std::cout << "1 - Soma" << std::endl;
		std::cout << "2 - Subtração" << std::endl;
		std::cout << "3 - Mutiplicacao" << std::endl;
		std::cout << "4 - Divisao" << std::endl;
		std::cout << "5 - Potenciacao" << std::endl;
		std::cout << "6 - Raiz Quadrada" << std::endl;
		std::cout << "7 - Sair" << std::endl;
		std::cin >> escolha;

		switch (escolha)
		{
		case 1: std::cout << soma(num1, num2) << std::endl;
			break;
		case 2: std::cout << sub(num1, num2) << std::endl;
			break;
		case 3: std::cout << mult(num1, num2) << std::endl;
			break;
		case 4: std::cout << div(num1, num2) << std::endl;
			break;
		case 5: std::cout << pot(num1, num2) << std::endl;
			break;
		case 6: std::cout << raiz(num1, num2) << std::endl;
			break;
		case 7: std::cout << "Saindo..." << std::endl;
			break;
		default: std::cout << "op invalida" << std::endl;

		}
	} while (escolha != 7);

}


float soma(float num1, float num2)
{
	return (num1 + num2);
}

float sub(float num1, float num2)
{
	return (num1 - num2);
}

float mult(float num1, float num2)
{
	return (num1 * num2);
}

float div(float num1, float num2)
{
	return (num1 / num2);
}

float pot(float num1, float num2)
{
	return pow(num1, num2);
}

float raiz(float num1, float num2)
{	
	std::cout << "Raiz do primeiro: " << sqrt(num1) << 
	std::endl << "Do segundo: " << sqrt(num2) << std::endl;
	return 0;
}