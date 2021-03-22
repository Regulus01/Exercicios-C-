#include <iostream>
#include <iomanip> // Maior precisao do numero

int main()
{
    int Numero;
    float Numero_2;
    double Numero_3;
    char Caracter = '3';
    char Caracter_2 = 'k'; // Quando e um unico caracter utiliza aspas simples
    Numero = 45;
    Numero_2 = 55.56f;
    Numero_3 = 45345.904555;

    std::cout << "\nValor Numero: " << Numero << std::endl;
    std::cout << "Endereco Carregado na Memoria: " << &Numero << std::endl;
    std::cout << "Tamanho da variavel Numero: " << sizeof(Numero) << " Bytes\n"; 
  
    std::cout << "\n\nValor do Numero_2: " << Numero_2;
    std::cout << "\nEndereco Carregado na Memoria: " << &Numero_2 << std::endl;
    std::cout << "Tamanho da variavel Numero_2: " << sizeof(Numero_2) << " Bytes\n";

    std::cout << "\n\nValor do Numero_3: " << std::setprecision(12) << Numero_3;
    std::cout << "\nEndereco Carregado na Memoria: " << &Numero_3 << std::endl;
    std::cout << "Tamanho da variavel Numero_3: " << sizeof(Numero_3)<< " Bytes\n";

    std::cout << "\n\nValor do Caracter: " << Caracter;
    std::cout << "\nEndereco Carregado na Memoria: " << (void *)&Caracter << std::endl;
    std::cout << "Tamanho da variavel Caracter: " << sizeof(Caracter)<< " Bytes\n";

    std::cout << "\n\nValor do Caracter_2: " << Caracter_2;
    std::cout << "\nEndereco Carregado na Memoria: " << (void *)&Caracter_2 << std::endl;
    std::cout << "Tamanho da variavel Caracter: " << sizeof(Caracter_2)<< " Bytes\n";


    std::cout << "\n"<<
    system("PAUSE");
    
}