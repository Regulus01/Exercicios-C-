#include <iostream>
//prototipo
void Coordenadas(int x = 5, int y = 7, int z = 1);

int main()
{	
	Coordenadas();
	system("PAUSE");
	return 0;
}

void Coordenadas(int x, int y, int z)
{
	x *= 10;
	y *= 10;
	z *= 10;

	std::cout << x << "-" << y << "-" << z << std::endl;
}