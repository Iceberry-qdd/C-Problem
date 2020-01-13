#include <iostream>
#include<cmath>
#include"Complex.h"
#include"Root.h"
#include"Real.h"
using namespace std;

Root::Root(int A, int B, int C)
{
	a = A;
	b = B;
	c = C;
	
}

void Root::Display()
{
	Complex c1(-b / (2.0 * a), sqrt(-b * b + 4 * a * c) / (2.0 * a)), c2(-b / (2.0 * a), -sqrt(-b * b + 4 * a * c) / (2.0 * a));
	Real r1((-b + sqrt(b * b - 4 * a * c)) / (2.0 * a)), r2((-b - sqrt(+b * b - 4 * a * c)) / (2.0 * a));
	if (b * b - 4 * a * c < 0)
	{
		cout << "x1=";
		c1.DispRoot();
		cout << ",";
		cout << "x2=";
		c2.DispRoot();
	}
	else if (b * b - 4 * a * c > 0)
	{
		cout << "x1=";
		r1.DispRoot();
		cout << ",";
		cout << "x2=";
		r2.DispRoot();
	}
	else
	{
		cout << "x1=x2=";
		r2.DispRoot();
	}
}