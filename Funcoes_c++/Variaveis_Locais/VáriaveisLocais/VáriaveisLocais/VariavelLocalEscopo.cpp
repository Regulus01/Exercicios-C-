#include <iostream>

int main()
{	
	// escopo é o tipo da váriavel, se ela é global ou local
	// o i é uma variável global fica na memória até o fim do programa.
	int i;

	for (i = 0; i < 5; i++)
	{	
		int j = i + 2;
		//o j é uma variavel local, ou seja some quando o bloco do for é terminado
		std::cout << i << " " << j << std::endl;
	}
	std::cout << "\nValor final de i: " << i;

	system("PAUSE");
	return 0;
}