#include<iostream>
#include"Shape.h"
#include"Circle.h"
#include"Rectangle.h"
#include"Square.h"
#include"Triangle.h"
void print(Shape& sh);
using namespace std;

int main()
{
	Circle c(1);
	Rectangle r(2.3, 8.7);
	Square s(10);
	Triangle t(10, 10, 10);
	cout << "S(Circle)=";
	print(c);
	cout << "S(Rectangle)=";
	print(r);
	cout << "S(Squre)=";
	print(s);
	cout << "S(Triangle)=";
	print(t);
	return 0;
}

void print(Shape& sh)
{
	cout << sh.area() << endl;
}