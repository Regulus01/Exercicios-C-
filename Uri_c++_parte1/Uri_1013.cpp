#include <iostream>

int main()
{
    int a;
    int b;
    int s;

    std::cin >> a>> b >> s;
    int MaiorAB = (a+b+abs(a-b))/2;
    MaiorAB = (MaiorAB+s+abs(MaiorAB-s))/2;
    std::cout<<MaiorAB << " eh o maior" << std::endl;
    return 0;

}