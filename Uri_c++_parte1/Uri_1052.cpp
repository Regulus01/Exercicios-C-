#include <iostream>

int main()
{
    std::string array[] = {"January", "February", "March", "April", "May", "June", "July",
                            "August", "September", "October", "November", "December"};
    int number; 
    std::cin >> number;

    std::cout<< array[number-1] << std::endl;
    return 0;

}