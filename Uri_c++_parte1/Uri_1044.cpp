#include <iostream>


int main()
{
    int A, B;

    std::cin >> A >> B;

    if (B % A == 0 || A % B == 0)
    {
        std::cout << "Sao Multiplos" << std::endl; 
    }
    else
    {
        std::cout << "Nao sao Mutiplos" << std::endl;
    }

    return 0;
}