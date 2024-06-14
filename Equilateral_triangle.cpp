#include"Equilateral_triangle.h"
#include"Error.h"

Equilateral_triangle::Equilateral_triangle(int a) :Triangle(a, a, a, 60, 60, 60, "Равносторонний треугольник")
{
	try
	{
		if (a != b || a != c || b != c || A != B || A != C || B != C)
		{
			throw Error("треугольник не равносторонний");
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