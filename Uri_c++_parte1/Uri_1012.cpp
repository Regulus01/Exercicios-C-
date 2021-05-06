#include <iostream>
#include <iomanip>
int main()
{
    float A, B, C;
    float Triangle;
    float circle;
    float trapeze;
    float square;
    float rectangle;

    std::cin >> A >> B >> C;
    Triangle = (A * C)/2;
    circle = (C*C)*3.14159;
    trapeze = ((A+B)*C)/2;
    square = B*B;
    rectangle = A*B;

    std::cout <<"TRIANGULO: " << std::fixed << std::setprecision(3) 
    << Triangle << std::endl << "CIRCULO: " << circle <<
    std::endl << "TRAPEZIO: " << trapeze <<
    std::endl << "QUADRADO: " << square << std::endl << "RETANGULO: " << rectangle << std::endl;

    }