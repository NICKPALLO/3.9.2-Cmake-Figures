#include"Triangle.h"
#include "Error.h"

void Triangle::print_info() //override
{
	std::cout << name << " (������� " << a << ", " << b << ", " << c << "; ���� " << A << ", " << B << ", " << C<<") ������";
	std::cout << std::endl;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C, std::string name)
{
	sizeNum = 3;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	this->name = name;
	try
	{

		if (A + B + C != 180 || sizeNum != 3)
		{
			throw Error("����� ����� �� ����� 180");
		}
	}
	catch (Error ex)
	{
		permission = false;
		std::cout << "������ �������� ������ (" << name << "). �������: " << ex.what();
	}
}
