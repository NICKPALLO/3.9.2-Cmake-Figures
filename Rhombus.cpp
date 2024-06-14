#include"Rhombus.h"
#include"Error.h"

Rhombus::Rhombus(int a, int A, int B) :Quadrilateral(a, a, a, a, A, B, A, B, "����")
{
	try
	{
		if (a != c || a != b || a != d || c != d || c != b || b != d || A != C || B != D)
		{
			throw Error("������� �� ����� ��� ���� ������� �� �����");
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