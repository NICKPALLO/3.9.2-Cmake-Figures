#pragma once
#include <iostream>

class Figure
{
protected:
	int sizeNum;
	bool permission;
	std::string name;
public:
	Figure();
	bool get_permission();
	int get_sizeNum();
	std::string get_name();
	virtual void print_info() {}
};