#include "Isosceles_triangle.h"
#include "Error.h"

Isosceles_triangle::Isosceles_triangle(int a, int b, int A, int B) : Triangle(a, b, b, A, B, B, "Равнобедренный треугольник")
{
	try
	{
		if (a!=c || A!=C)
		{
			throw Error("треугольник не равнобедренный");
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

