#include <iostream>

int main()
{	
	// escopo � o tipo da v�riavel, se ela � global ou local
	// o i � uma vari�vel global fica na mem�ria at� o fim do programa.
	int i;

	for (i = 0; i < 5; i++)
	{	
		int j = i + 2;
		//o j � uma variavel local, ou seja some quando o bloco do for � terminado
		std::cout << i << " " << j << std::endl;
	}
	std::cout << "\nValor final de i: " << i;

	system("PAUSE");
	return 0;
}