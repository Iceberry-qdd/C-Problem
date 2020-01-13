//#include"Rectangle.h"
#include"Square.h"

Square::Square(double w)
{
	height = w;
	weight = w;
}

double Square::area()
{
	return weight * height;
}