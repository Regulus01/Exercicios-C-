#include <iostream> 

bool isPar(int num);

int main()
{
    int numero;
    std::cout << "Digite um numero inteiro: ";
    std::cin >> numero;
    if (isPar(numero))
    {
        std:: cout << "\nNumero: " << numero << " Par\n";
    }
    else
    {
        std:: cout << "\nNumero: " << numero << " Impar\n";
    }
    system("PAUSE");
    return 0;
}

bool isPar(int num)
{
    if (num % 2 == 0)
    return true;
    return false;
}