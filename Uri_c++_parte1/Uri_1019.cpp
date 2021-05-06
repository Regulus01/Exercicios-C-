#include <iostream>

int main()
{
    int N, Year, Month, Day;

    std::cin >> N;
    Year = N/365;
    Month = (N%365)/30;
    Day = (N%365)%30;

    std::cout << Year << " ano(s)\n" << Month << " mes(es)\n" << Day << " dia(s)"<< std::endl;
    return 0;
}