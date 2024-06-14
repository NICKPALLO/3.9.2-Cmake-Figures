#pragma once
#include"Figure.h"

class Triangle : public Figure
{
protected:
	int a, b, c, A, B, C;
	Triangle(int a, int b, int c, int A, int B, int C, std::string name);
public:
	Triangle(int a, int b, int c, int A, int B, int C) :Triangle(a, b, c, A, B, C, "Треугольник") {}
	void print_info() override;
};