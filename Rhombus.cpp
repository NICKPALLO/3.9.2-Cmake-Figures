#include"Rhombus.h"
#include"Error.h"

Rhombus::Rhombus(int a, int A, int B) :Quadrilateral(a, a, a, a, A, B, A, B, "Ромб")
{
	try
	{
		if (a != c || a != b || a != d || c != d || c != b || b != d || A != C || B != D)
		{
			throw Error("Стороны не равны или углы попарно не равны");
		}
	}
	catch (Error ex)
	{
		if (permission)
		{
			permission = false;
			std::cout << "Ошибка создания фигуры (" << name << "). Причина: " << ex.what();
		}
		else
		{
			std::cout << " и " << ex.what();
		}
	}
}