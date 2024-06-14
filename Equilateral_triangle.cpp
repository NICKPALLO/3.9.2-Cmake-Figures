#include"Equilateral_triangle.h"
#include"Error.h"

Equilateral_triangle::Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, "�������������� �����������")
{
	try
	{
		if (a != b || a != c || b != c || A != B || A != C || B != C)
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