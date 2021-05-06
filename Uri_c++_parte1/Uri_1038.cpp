#include <iostream>
#include <iomanip>

int main()
{   
    int code, code1;
    double c1{0};

    std::cin >> code >> code1;

    if (code == 1)
    {c1 = 4.00;}
    if (code == 2)
    {c1 = 4.50;}
    if (code == 3)
    {c1 = 5.00;}
    if (code == 4)
    {c1 = 2.00;}
    if (code == 5)
    {c1 = 1.50;}
        
    std::cout<< "Total: R$ " << std::fixed << std::setprecision(2) << c1 * code1 << std::endl;
    return 0;
}