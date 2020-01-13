#include<iostream>
//#include<cmath>
#include"Complex.h"
#include"Real.h"
using namespace std;

Real::Real(double real)
{
	r = real;
	c = 0;
}

void Real::DispRoot()
{
	cout << r;
	/*
	if (b * b - 4 * a * c > 0)
		cout << "x1=" << (-b + sqrt(b * b - 4 * a * c)) / (4 * a) << ",x2=" << (-b - sqrt(b * b - 4 * a * c)) / (4 * a) << endl;
	else if (b * b - 4 * a * c == 0)
		cout << "x1=x2=" << (-b) / (4 * a) << endl;
	else if(b*b-4*a*c<0)
			cout<<"x1="<<(-b)/4*a<<"+"<<sqrt(4*a*c-b*b)<<"i"<<",x2="<<(-b)/4*a<<"-"<<sqrt(4*a*c-b*b)<<"i"<<endl;
	*/
}