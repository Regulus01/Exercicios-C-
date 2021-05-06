#include <iostream>
#include <iomanip>

int main()
{
    double number, total{0};
    int counter{0};

    for(int i = 0; i <= 5; i++)
    {   
        std::cin >> number;
        if (number >= 0)
        {   
           counter++; 
           total += number;
        }
    }
    std::cout << counter << " valores positivos" << std::fixed << std::setprecision(1) << std::endl << total/counter << std::endl;

    return 0;
}