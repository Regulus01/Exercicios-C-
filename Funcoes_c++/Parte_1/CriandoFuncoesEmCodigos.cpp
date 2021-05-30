#include <iostream>
#include <locale.h>

void ExibirMenu();
int RetornarEscolha();
void ProcessarEscolha(int TipoEscolha);

int main()
{
	ExibirMenu();
	system("PAUSE");
	return 0;
}

int RetornarEscolha()
{		int escolha = 0;
		std::cout << "\n\nEscolha sua opção: ";
		std::cin >> escolha;
		return escolha;
}

void ExibirMenu()
{
	setlocale(LC_ALL, "portuguese");
	int escolha;
	do // as instruções abaixo serão executadas pelo menos uma vez!
	{
		std::cout << "\n****Tickets Cinema****" << std::endl;
		std::cout << "\n1 - Para Meia Entrada\n";
		std::cout << "\n2 - Para Inteira\n";
		std::cout << "\n3 - Sair";
		escolha = RetornarEscolha();
		ProcessarEscolha(escolha);

	} while (escolha != 3);
}


void ProcessarEscolha(int TipoEscolha)
{
	
		switch (TipoEscolha)
		{
		case 1: std::cout << "\nTicket Meia Entrada Comprada\n\n";
				break;
		case 2: std::cout << "\nTicket Inteira Comprado\n\n";
				break;	
		case 3: std::cout << "\nSaindo Menu Tickets...\n\n";
				break;
		default: std::cout << "\nOpção Inválida!!!\n\n";
		}
}