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
			throw Error("����� ����� �� ����� 360");
		}
	}
	catch (Error ex)
	{
		permission = false;
		std::cout << "������ �������� ������ (" << name << "). �������: " << ex.what();
	}
}

void Quadrilateral::print_info()
{
	std::cout << name << " (������� " << a << ", " << b << ", " << c << ", " << d << "; ���� " << A << ", " << B << ", " << C << ", " << D << ") ������";
	std::cout << std::endl;
}