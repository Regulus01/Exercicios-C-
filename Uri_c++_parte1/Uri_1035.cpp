#include <iostream>

int main()
{
    int A, B, C, D;

    std::cin >> A >> B >> C >> D;

    if ((B > C) and (D > A) and ((C+D) > (A+B)) and (C and D > 1) and (A % 2 == 0))
    {
        std::cout<<"Valores aceitos" << std::endl;
    }

    else 
    {
        std::cout<<"Valores nao aceitos" << std::endl;
    }
}