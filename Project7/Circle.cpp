#include"Circle.h"

Circle::Circle(double R)
{
	r = R;
}

double Circle::area()
{
	return 3.14159265 * r * r;
}
