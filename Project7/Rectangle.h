#include"Shape.h"
#ifndef RECTANGLE
#define RECTANGLE
class Rectangle :public Shape {
protected:
	double weight;
	double height;
public:
	Rectangle(double w, double h);
	double area();
	Rectangle();
};
#endif