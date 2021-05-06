#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{   
    double A, B, C, delta, delta1;

    std::cin>> A >> B >>C;

    if (A !=0)
    {
        delta = (std::pow(B,2)) - (4*A*C);

        if (delta < 0)
        {
            std::cout<< "Impossivel calcular" << std::endl;
        }
        else if (delta == 0)
        {
            delta1 = (-B)/(2*A);
        }
        else
        {
            delta1=(-B +sqrt(delta))/(2*A);
            std::cout<<"R1 = " << std::fixed << std::setprecision(5) << delta1 << std::endl;
            delta1=(-B -sqrt(delta))/(2*A);
            std::cout<<"R2 = " << std::fixed << std::setprecision(5) << delta1 << std::endl;
        }
    }
    else
    {
     std::cout<< "Impossivel calcular" << std::endl;
    }

    return 0;
       
}