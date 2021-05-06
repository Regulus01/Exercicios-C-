#include <iostream>
#include <iomanip>

int main ()
{
    double salary;
    std::cin >> salary; 
    if(salary <= 2000)
    {
      std::cout<<"Isento" << std::endl;
    }
    else if (salary >= 2000.01 and salary <= 3000.00)
    {
      std::cout<< "R$ " << std::fixed << std::setprecision(2) << (salary -2000) *0.08 << std::endl;
    }
    else if(salary >= 3000.01 and salary <= 4500.00)
    {
      std::cout << "R$ " << std::fixed << std::setprecision(2) << (1000*0.08)+(salary-3000.00)*0.18 << std::endl;
    }

    else
    {
     std::cout << "R$ " << std::fixed << std::setprecision(2) <<  1000.0 * 0.08 + 1500.0 * 0.18 + (salary - 4500.0) * 0.28 << std::endl; 
    }
    return 0;
}