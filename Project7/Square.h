#include"Rectangle.h"
#ifndef SQUARE
#define SQUARE
class Square :public Rectangle {
public:
	Square(double b);
	double area();
};
#endif