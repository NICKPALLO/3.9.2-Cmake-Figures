#include "Quadrilateral.h"
#include "Error.h"

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D, std::string name)
{
	sizeNum = 4;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	this->name = name;
	try
	{

		if (A + B + C +D != 360 || sizeNum != 4)
		{
			throw Error("Сумма углов не равна 360");
		}
	}
	catch (Error ex)
	{
		permission = false;
		std::cout << "Ошибка создания фигуры (" << name << "). Причина: " << ex.what();
	}
}

void Quadrilateral::print_info()
{
	std::cout << name << " (стороны " << a << ", " << b << ", " << c << ", " << d << "; углы " << A << ", " << B << ", " << C << ", " << D << ") создан";
	std::cout << std::endl;
}