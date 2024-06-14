#include "Isosceles_triangle.h"
#include "Error.h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, b, A, B, B, "�������������� �����������")
{
	try
	{
		if (a!=c || A!=C)
		{
			throw Error("����������� �� ��������������");
		}
	}
	catch (Error ex)
	{
		if (permission)
		{
			permission = false;
			std::cout << "������ �������� ������ (" << name << "). �������: " << ex.what();
		}
		else
		{
			std::cout << " � " << ex.what();
		}
	}
}

