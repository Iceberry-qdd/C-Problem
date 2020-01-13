#include<cmath>
#include"Triangle.h"

Triangle::Triangle(double A, double B, double C)
{
	a = A;
	b = B;
	c = C;
}

double Triangle::area()
{
	double p;
	p = (a + b + c) / 2;
	return sqrt(p*(p - a) * (p - b) * (p - c));
}