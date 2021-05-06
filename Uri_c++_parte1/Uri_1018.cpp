#include <iostream>

int main()
{
    int value, value2;
    int cem, cinc, vint, dez, cinco, dois, um;

    std::cin >> value;
    value2 = value;
    cem =  value/100;
    value = value -(cem*100);

    cinc =  value/50;
    value = value -(cinc*50);
    
    vint =  value/20;
    value = value -(vint*20);

    dez =  value/10;
    value = value -(dez*10); 

    cinco = value/5;
    value = value - (cinco*5);

    dois =  value/2;
    value = value -(dois*2);

    um = value/1;

    std::cout <<value2 << std::endl;
    std::cout<< cem << " nota(s) de R$ 100,00" << std::endl;
    std::cout<< cinc << " nota(s) de R$ 50,00" << std::endl;
    std::cout<< vint << " nota(s) de R$ 20,00" << std::endl;
    std::cout<< dez << " nota(s) de R$ 10,00" << std::endl;
    std::cout<< cinc << " nota(s) de R$ 5,00" << std::endl;
    std::cout<< dois << " nota(s) de R$ 2,00" << std::endl;
    std::cout<< um << " nota(s) de R$ 1,00" << std::endl;
    
}