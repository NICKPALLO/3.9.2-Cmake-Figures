#include "Rectangl.h"
#include"Error.h"

Rectangl::Rectangl(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, "�������������")
{
	try
	{
		if (a != c || b != d || A!=90 || B != 90 || C != 90 || D != 90)
		{
			throw Error("������� ������� �� ����� ��� ���� �� ����� 90 ��������");
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