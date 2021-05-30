#include <iostream> 

float soma(float num1, float num2);


int main()
{   
    std::cout << soma(100, 500) << std::endl;
    system("PAUSE");
    return 0;
}

float soma( float num1, float num2)
{
    return num1 + num2;
}