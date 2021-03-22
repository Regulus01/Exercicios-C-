#include <iostream>

int main()
{  
    setlocale(LC_ALL, "Portuguese");
    int Numero01;
    int Numero02;
    int Soma;
    bool Comparacao;
    std::cout << Comparacao << std::endl;
    //std::cout << "Numero01 = " << Numero01 << std::endl;
    //std::cout << "Numero02 = " << Numero02 << std::endl;
    std::cout <<"Digite 2 números: ";
    std::cin >> Numero01 >> Numero02;
    //std::cout <<"Digite o primeiro número: ";
    std::cout << "Numero01 = " << Numero01 << std::endl;
    std::cout << "Numero02 = " << Numero02 << std::endl;
    Soma = Numero01 + Numero02;
    std::cout << "\nA soma dos números = " << Soma << std::endl;
    //True retorna 1 False retorna 0 
    
    Comparacao = (Numero01 == Numero02);
    std::cout << "Numero01 igual de numero02?: " << Comparacao << std::endl;
    Comparacao = (Numero01 != Numero02);
    std::cout << "Numero01 diferente de numero02?: " << Comparacao << std::endl;
    Comparacao = (Numero01 > Numero02);
    std::cout << "Numero01 maior que numero02?: " << Comparacao << std::endl;
    Comparacao = (Numero01 < Numero02);
    std::cout << "Numero01 menor que numero02?: " << Comparacao << std::endl;
    Comparacao = (Numero01 >= Numero02);
    std::cout << "Numero01 maior ou igual que numero02?: " << Comparacao << std::endl;
    Comparacao = (Numero01 <= Numero02);
    std::cout << "Numero01 menor ou igual que numero02?: " << Comparacao << std::endl;
    system("PAUSE");

}