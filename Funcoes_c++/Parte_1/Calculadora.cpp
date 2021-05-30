#include <iostream>
//prototipos de funcoes
float soma(float num1, float num2);
float subtrcao(float num1, float num2);
float mutiplicacao(float num1, float num2);
float divisao(float num1, float num2);

int main()
{
    float num1, num2;

    std::cout <<"Digite um numero: " << std::endl;
    std::cin >> num1;
    std::cout << "Digite outro numero: " << std::endl;
    std::cin >> num2;
    std::cout << "Soma: " << soma(num1, num2) << std::endl;
    std::cout << "Subtracao: " << subtrcao(num1, num2) << std::endl;
    std::cout << "Multiplicacao: " << mutiplicacao(num1, num2) << std::endl;
    std::cout << "Divisao: " << divisao(num1, num2) << std::endl;
    system("PAUSE");
    return 0;
   
}


    float soma(float num1, float num2)
    {
        return num1 + num2;
    }
    float subtrcao(float num1, float num2)
    {
        return num1 - num2;
    }
    float mutiplicacao(float num1, float num2)
    {
        return num1 * num2;
    }
    float divisao(float num1, float num2)
    {
        return num1 / num2;
    }
