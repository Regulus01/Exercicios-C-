#include <iostream>

int main()

{

    int st, et, im, fm, dif;

    std::cin >> st >> im >> et  >> fm;

    dif = ((et*60)+fm)- ((st*60)+im);
    if(dif<=0) dif += 24*60;
    std::cout << "O JOGO DUROU " << dif/60 << " HORA(S) E " <<  dif%60 << " MINUTOS(S)" <<std::endl;

    return 0;

}