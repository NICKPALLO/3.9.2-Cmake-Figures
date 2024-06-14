#include"Square.h"
#include"Error.h"

Square::Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, "�������") 
{
	try
	{
		if (a != c || a!=b || a!=d || c!=d || c!= b || b != d || A != 90 || B != 90 || C != 90 || D != 90)
		{
			throw Error("������� �� ����� ��� ���� �� ����� 90 ��������");
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