#include <iostream>
#include <iomanip>
using namespace std;

int main() {

string name;
float B;
float C;
std::cin >> name >> B >> C;

double SALARY = (B + (C*15/100));

std::cout << "TOTAL = R$ " << fixed << setprecision(2) << SALARY << std::endl;  

return 0;
}