#include"Square.h"
#include"Error.h"

Square::Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90, "Квадрат") 
{
	try
	{
		if (a != c || a!=b || a!=d || c!=d || c!= b || b != d || A != 90 || B != 90 || C != 90 || D != 90)
		{
			throw Error("Стороны не равны или углы не равны 90 градусов");
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