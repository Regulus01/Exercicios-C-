#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    double Radius;
    double Volum;
    std::cin >> Radius;
    Volum = (1.333333333333333)*3.14159*(Radius*Radius*Radius);
    std::cout << "VOLUME = " << fixed << setprecision(3) << Volum << std::endl;
    return 0;

}
