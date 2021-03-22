#include <iostream>
#include <string>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int NumeroInteiro {12};
    float NumeroReal {34.56};
    char Caractere {'C'}; //Cractere fica em aspas simples
    std::string Texto {"Vou aprender C++"}; // String fica entre aspas duplas

    std::printf("Valor Numero Inteiro = %d \nValor Numero Real = %.4f\nCaractere: %c\n", NumeroInteiro, NumeroReal, Caractere);
    std::printf("Texto: %s\n", Texto.c_str());
    std::cout << "Texto da string:  " << Texto << std::endl;
    std::printf("O valor do caractere digitado: %c na tabela ASCII e: %d\n", Caractere, Caractere);
    system("PAUSE");
    return 0;
}