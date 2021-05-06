#include <iostream>

int main()
{
    double value;
    int cem, cinc, vint, dez, cinco, dois, um;
    int cinc_m, vc_m, dez_m, cinco_m, umc_m;

    std::cin >> value;

    cem =  value/100;
    value = value - cem*100;

    cinc =  value/50;
    value = value - cinc*50;
    
    vint =  value/20;
    value = value - vint*20;

    dez =  value/10;
    value = value - dez*10; 

    cinco = value/5;
    value = value - cinco*5;

    dois =  value/2;
    value = value - dois*2;

    um = value/1;
    value = value-um*1;

    cinc_m = value/0.50;
    value = value-cinc_m*0.50;

    vc_m = value/0.25;
    value = value-vc_m*0.25;

    dez_m = value/0.10;
    value = value-dez_m*0.10;

    cinco_m = value/0.05;
    value = value-cinco_m*0.05;
 
    umc_m = value/0.01;

    std::cout <<"NOTAS:" << std::endl;
    std::cout<< cem << " nota(s) de R$ 100.00" << std::endl;
    std::cout<< cinc << " nota(s) de R$ 50.00" << std::endl;
    std::cout<< vint << " nota(s) de R$ 20.00" << std::endl;
    std::cout<< dez << " nota(s) de R$ 10.00" << std::endl;
    std::cout<< cinco << " nota(s) de R$ 5.00" << std::endl;
    std::cout<< dois << " nota(s) de R$ 2.00" << std::endl;

    std::cout <<"MOEDAS:" << std::endl;
    std::cout<< um << " moeda(s) de R$ 1.00" << std::endl;
    std::cout<< cinc_m << " moeda(s) de R$ 0.50" << std::endl;
    std::cout<< vc_m << " moeda(s) de R$ 0.25" << std::endl;
    std::cout<< dez_m << " moeda(s) de R$ 0.10" << std::endl;
    std::cout<< cinco_m << " moeda(s) de R$ 0.05" << std::endl;
    std::cout<< umc_m << " moeda(s) de R$ 0.01" << std::endl;
    
    return 0;
}