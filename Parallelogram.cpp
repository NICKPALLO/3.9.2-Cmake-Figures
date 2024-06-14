#include"Parallelogram.h"
#include "Error.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) :Quadrilateral(a, b, a, b, A, B, A, B, "Параллелограмм") 
{
	try
	{
		if (a != c || b != d || A != C || B != D)
		{
			throw Error("Стороны или углы попарно не равны");
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