#include <iostream>

int main()

{

    int st, et, rt;

    std::cin >> st>> et;
    rt = et - st;
    if (rt < 0)
    {
    rt = (24 + (et-st));
    }
    if (st == et)
    {
        std::cout << "O JOGO DUROU 24 HORA(S)" << std::endl;
    }
    else
    {
        std::cout << "O JOGO DUROU " << rt << " HORA(S)" << std::endl;
    }

    return 0;

}