#include <iostream>
#include <iomanip>
int main()
{
   int h, km;
   std::cin >> h >> km;
   float km2 = (h*km)/12.0;
   std::cout << std::fixed << std::setprecision(3) << km2 << std::endl;
   return 0;
}