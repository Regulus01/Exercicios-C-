#include <iostream>
#include <iomanip>
int main()
{
    double A, B, C;

    std::cin>> A >> B >> C;

    if (A < B + C && B < A + C && C < A +B)
    {
        std::cout<< "Perimetro = " << std::fixed << std::setprecision(1) << A + B + C << std::endl;

    }
    else
    {
        std::cout<< "Area = " << std::fixed << std::setprecision(1) << (C *(A + B))/2 << std::endl;
    }
    return 0;
}