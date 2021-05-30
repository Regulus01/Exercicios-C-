#include <iostream>

int ContadorChamadas()
{	
	//variavel estatica: significa que apos a saida da funcao
	// o valor desta variável não será perdido.
	//static indica que esse valor seja mantido mesmo apos a funcao
	//ser encerrada
	static int NumChamadasDaFuncao = { 0 };
	NumChamadasDaFuncao++;
	return NumChamadasDaFuncao;
}

int main()
{	
	for (int i = 0; i < 5; i++)
	{
		std::cout << ContadorChamadas() << std::endl;
	}
	system("PAUSE");
	return 0;

}