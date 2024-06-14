#include "Rectangl.h"
#include"Error.h"

Rectangl::Rectangl(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90, "Прямоугольник")
{
	try
	{
		if (a != c || b != d || A!=90 || B != 90 || C != 90 || D != 90)
		{
			throw Error("Стороны попарно не равны или углы не равны 90 градусов");
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