#include <iostream>


int main()
{
    std::string type_1, class_1, alimentation;

    std::cin >> type_1 >> class_1 >> alimentation;
    if (type_1 == "vertebrado")
    {
        if (class_1 == "ave")
        {
            if (alimentation == "carnivoro")
            {
                std::cout<< "aguia" << std::endl;
            } 
            else if (alimentation == "onivoro")
            {
                std::cout <<"pomba" << std::endl;
            }
        }
        else if(class_1 == "mamifero")
        {
            if(alimentation == "onivoro")
             {
                 std::cout<< "homem" << std::endl;
             }
            else if (alimentation == "herbivoro")
             {
                 std::cout <<"vaca" << std::endl;
             }
        }   

    }

    else if(type_1 == "invertebrado")
    {
        if(class_1 == "inseto")
        {
            if(alimentation == "hematofago")
            {
                std::cout << "pulga" << std::endl;
            }
            else if(alimentation == "herbivoro")
            {
                std::cout << "lagarta" << std::endl;
            }
        }
        if (class_1 == "anelideo")
        {
            if(alimentation =="hematofago")
            {
                std::cout<< "sanguessuga" << std::endl;
            }
            else if(alimentation == "onivoro")
            {
                std::cout<< "minhoca" << std::endl;
            }
        }
    }

    return 0;
}