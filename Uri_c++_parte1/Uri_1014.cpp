#include <iostream>
#include <iomanip>

int main()
{
    int x;
    float y;
    
    std::cin >> x >> y;
    y = x/y; 
    std::cout << std::fixed << std::setprecision(3) << y << " km/l" << std::endl;
    return 0;
}