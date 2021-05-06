#include <iostream>

int main()
{
    int a, b, c;

    std::cin >> a >> b >> c;
    int absoluto_maior = (a+b + abs(a-b))/2;
    int absoluto_menor = (a+b - abs(a-b))/2;

    if(c < absoluto_maior and c > absoluto_menor)
    {   std::cout << absoluto_menor << std::endl;
        std::cout << c << std::endl;
        std::cout << absoluto_maior << std::endl;
        std::cout << "" << std::endl;
    } 
    else if(c > absoluto_maior)
    {
            
        std::cout << absoluto_menor << std::endl;
        std::cout << absoluto_maior << std::endl;
        std::cout << c << std::endl;
        std::cout << "" << std::endl;
    } 
    else if(c < absoluto_menor)
    {   
        std::cout << c << std::endl; 
        std::cout << absoluto_menor << std::endl;
        std::cout << absoluto_maior << std::endl;
        std::cout << "" << std::endl;
    }

    std::cout<< a << std::endl << b << std::endl << c << std::endl;

    return 0;

}