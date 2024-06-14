#include"Right_triangle.h"
#include "Error.h"


Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "������������� �����������")
{
	try
	{
		if (C != 90)
		{
			throw Error("���� �� ����� 90");
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