#include <iostream>

int main()
{
    double Number;
    int counter{0};

    for(int i=0; i <= 5; i++)
    {
        std::cin >> Number;
        if(Number >= 0)
        {
          counter++;
        }
    }

    std::cout<< counter << " valores positivos" << std::endl;

    return 0;
}