#include"Shape.h"
#ifndef CIRCLE
#define CIRCLE
class Circle :public Shape {
	double r;
public:
	Circle(double R);
	double area();
};
#endif