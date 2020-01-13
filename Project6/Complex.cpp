#include<iostream>
//#include<cmath>
#include"Complex.h"
using namespace std;

Complex::Complex(double real,double complex)
{
	r = real;
	c = complex;
}

void Complex::DispRoot()
{
	cout << r << "+" << c << "i";
		//cout << "x1=" << (-b) / 4 * a << "+" << sqrt(4 * a * c - b * b) << "i" << ",x2=" << (-b) / 4 * a << "-" << sqrt(4 * a * c - b * b) << "i" << endl;
}

Complex::Complex()
{

}