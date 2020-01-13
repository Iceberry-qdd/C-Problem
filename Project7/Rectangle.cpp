//#include"Shape.h"
#include"Rectangle.h"

Rectangle::Rectangle(double w, double h)
{
	weight = w;
	height = h;
}

double Rectangle::area()
{
	return weight * height;
}
Rectangle::Rectangle()
{

}