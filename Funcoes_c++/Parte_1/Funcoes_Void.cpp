#include <iostream> 

//tipo de retorno, nome da função(tipo parametros)
int SomaAUmNumero(int Numero, int NumeroASerSomado)
{   
    int SomaDosNumeros;
    SomaDosNumeros = Numero + NumeroASerSomado;
    return SomaDosNumeros;
}

// as funções "void" não possuem nenhum parâmetro, por isso é necessário especificar o tipo
// no caso o "void".
void Mensagem()
{
    std::cout << "Mensagem de Marte... Chegamos bem..." << std::endl;
    return;
}

int main()
{   
    int Numero, NumeroASerSomado, RetornoDafuncao;
    Mensagem();
    std::cout << "Digite um numero: " << std::endl;
    std::cin >> Numero;
    std::cout << "Digite o numero a ser somado: " << std::endl;
    std:: cin >> NumeroASerSomado;
    std::cout << "A soma deste numero: " <<  Numero << std::endl << 
     "Com o Numero: " << NumeroASerSomado << std::endl << "Sera: " << 
    SomaAUmNumero(Numero, NumeroASerSomado) << std::endl;
    RetornoDafuncao = SomaAUmNumero(200, -500);
    std::cout << SomaAUmNumero(Numero, SomaAUmNumero(150, 1400)) << std::endl;
    std::cout << "Soma de 200 com -500: " << RetornoDafuncao;
    std::cout << std::endl;
    system("PAUSE");
    return 0;
}