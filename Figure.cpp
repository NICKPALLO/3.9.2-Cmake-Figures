#include "Figure.h"

Figure::Figure()
{
	sizeNum = 0;
	permission = true;
	name = "Фигура";
}
int Figure::get_sizeNum() 
{
	return sizeNum;
}
std::string Figure::get_name()
{
	return name;
}
bool Figure::get_permission()
{
	return permission;
}