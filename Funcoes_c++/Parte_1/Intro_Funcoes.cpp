#include <iostream> 

//tipo de retorno, nome da função(tipo parametros)
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{   
    int SomaDosNumeros;
    SomaDosNumeros = Numero + NumeroASerSomado;
    return SomaDosNumeros;
}

int main()
{   
    int Numero, NumeroASerSomado;

    std::cout << "Digite um numero: " << std::endl;
    std::cin >> Numero;
    std::cout << "Digite o numero a ser somado: " << std::endl;
    std:: cin >> NumeroASerSomado;
    std::cout << "A soma deste numero: " <<  Numero << std::endl << 
     "Com o Numero: " << NumeroASerSomado << std::endl << "Sera: " << 
    SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;
    system("PAUSE");
    return 0;
}