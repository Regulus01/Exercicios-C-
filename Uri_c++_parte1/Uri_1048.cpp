#include <iostream>
#include <iomanip>

int main()
{
   double salary;

   std::cin >> salary;

   if (salary >= 0 and salary <= 400.00)
   {
       std::cout << "Novo salario: " << std::fixed << std::setprecision(2) << (salary*15)/100 + salary << std::endl;
       std::cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << (salary*15)/100 << std::endl;
       std::cout << "Em percentual: 15 %" << std::endl;
   }
   
   else if (salary >= 400.01 and salary <= 800.00)
   {
       std::cout << "Novo salario: " << std::fixed << std::setprecision(2) << (salary*12)/100 + salary << std::endl;
       std::cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << (salary*12)/100 << std::endl;
       std::cout << "Em percentual: 12 %" << std::endl;
   }
   else if (salary >= 800.01 and salary <= 1200.00)
   {
       std::cout << "Novo salario: " << std::fixed << std::setprecision(2) << (salary*10)/100 + salary << std::endl;
       std::cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << (salary*10)/100 << std::endl;
       std::cout << "Em percentual: 10 %" << std::endl;
   }

   else if (salary >= 1200.01 and salary <= 2000.00)
   {
       std::cout << "Novo salario: " << std::fixed << std::setprecision(2) << (salary*7)/100 + salary << std::endl;
       std::cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << (salary*7)/100 << std::endl;
       std::cout << "Em percentual: 7 %" << std::endl;
   }

    else if (salary > 2000.00)
   {
       std::cout << "Novo salario: " << std::fixed << std::setprecision(2) << (salary*4)/100 + salary << std::endl;
       std::cout << "Reajuste ganho: " << std::fixed << std::setprecision(2) << (salary*4)/100 << std::endl;
       std::cout << "Em percentual: 4 %" << std::endl;
   }

    return 0;



}