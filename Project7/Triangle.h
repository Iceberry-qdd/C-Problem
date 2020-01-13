#include"Shape.h"
#ifndef TRIANGLE
#define TRIANGLE
class Triangle :public Shape{
	double a;
	double b;
	double c;
public:
	Triangle(double A, double B, double C);
	double area();
};
#endif