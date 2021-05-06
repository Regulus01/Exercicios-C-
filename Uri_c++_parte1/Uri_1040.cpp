#include <iostream>
#include <iomanip>
int main()
{
    double n1, n2, n3, n4, media;

    std::cin >> n1 >> n2 >> n3 >> n4;

    media = ((n1*2) + (n2*3) + (n3*4) + (n4*1))/10;

    std::cout << "Media: " << std::fixed << std::setprecision(1) << media << std::endl;
    if(media >= 7)
    {
        std::cout << "Aluno aprovado." << std::endl;
    }
    else if(media >= 5 and media <= 6.9)
    {
        std::cout << "Aluno em exame." << std::endl;
        std::cin>> media;
        std::cout << "Nota do exame: " << std::fixed << std::setprecision(1) << media << std::endl;
        media = ((((n1*2) + (n2*3) + (n3*4) + (n4*1))/10) + media)/2;
        std::cout << "Aluno aprovado." << std::endl;
        std::cout << "Media final: " << media << std::endl;

    }
    else 
    {   
        std::cout<< "Aluno reprovado." << std::endl;
    }
    return 0;
}