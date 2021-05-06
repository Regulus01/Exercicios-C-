#include <iostream>

int main()
{
    double Number;
    int intervalo1, intervalo2;

    std::cin>>Number;

    if (Number >= 0 and Number <= 25)
    {
        std::cout << "Intervalo [0,25]" << std::endl;
    }
    else if(Number > 25 and Number < 75)
    {
        std::cout << "Intervalo (25,50]" << std::endl;
    }
    else if(Number >= 75 and Number <= 100)
    {
        std::cout << "Intervalo (75,100]" << std::endl;
    }
    else
    {
       std::cout << "Fora de intervalo" << std::endl;
    }

    return 0;

}