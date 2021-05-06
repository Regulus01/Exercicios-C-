#include <iostream>
#include <math.h>

int main()
{
    double a,b,c , temp;

    std::cin >> a >> b >>c;

        if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if (b < c)

    {

        temp = b;

        b = c;

        c = temp;

    }

    if (a < b)

    {

        temp = a;

        a = b;

        b = temp;

    }

    if(a >= b+c)
    {
        std::cout<<"NAO FORMA TRIANGULO"<< std::endl;
    }
    else if (pow(a, 2) == pow(b,2) + pow(c,2))
    {
        std::cout<<"TRIANGULO RETANGULO"<< std::endl;
    }
    else if(pow(a, 2) > pow(b,2) + pow(c,2))
    {
        std::cout<<"TRIANGULO OBTUSANGULO"<< std::endl;
    }
    else if(pow(a, 2) < pow(b,2) + pow(c,2))
    {
        std::cout<<"TRIANGULO ACUTANGULO"<< std::endl;
    }
    if (a == b and b == c)
    {
        std::cout<<"TRIANGULO EQUILATERO"<< std::endl;
    }
    else if (a == b || b == c)
    {
        std::cout<<"TRIANGULO ISOSCELES"<< std::endl;

    }

    return 0;
}