#include"Right_triangle.h"
#include "Error.h"


Right_triangle::Right_triangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90, "Прямоугольный треугольник")
{
	try
	{
		if (C != 90)
		{
			throw Error("угол не равен 90");
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