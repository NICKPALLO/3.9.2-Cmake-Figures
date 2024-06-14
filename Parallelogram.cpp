#include"Parallelogram.h"
#include "Error.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrilateral(a, b, a, b, A, B, A, B, "��������������") 
{
	try
	{
		if (a != c || b != d || A != C || B != D)
		{
			throw Error("������� ��� ���� ������� �� �����");
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