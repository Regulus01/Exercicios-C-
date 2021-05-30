#include <iostream>
#include <locale.h>
#include "FuncoesMenu.hpp"

//aqui é como? como as funcoes do arquivo .h serão implementadas?
// neste arquivo.cpp voce colococa a implementacao de todas as funcoes do arquivo .h
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


int ProcessarEscolha(int TipoEscolha)
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

        return TipoEscolha;
		}
}