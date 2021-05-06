#include <iostream>

int main()
{
    int DDD;
    std::cin >> DDD;

    if(DDD == 61)
    {
        std::cout << "Brasilia" << std::endl;
    }
    else if(DDD == 71)
    {
        std::cout << "Salvador" << std::endl;
    }
    else if(DDD == 11)
    {
        std::cout << "Sao Paulo" << std::endl;
    }
    else if(DDD == 21)
    {
        std::cout << "Rio de Janeiro" << std::endl;
    }
    else if(DDD == 32)
    {
        std::cout << "Juiz de Fora" << std::endl;
    }
    else if(DDD == 19)
    {
        std::cout << "Campinas" << std::endl;
    }
    else if(DDD == 27)
    {
        std::cout << "Vitoria" << std::endl;
    }
    else if(DDD == 31)
    {
        std::cout << "Belo Horizonte" << std::endl;
    }

    else
    {
        std::cout <<"DDD nao cadastrado" << std::endl;
    }

    return 0;
}