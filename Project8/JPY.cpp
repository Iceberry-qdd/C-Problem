#include<iostream>
#include"JPY.h"
using namespace std;

JPY::JPY(double v)
{
	value = v;
}

void JPY::display()
{
	cout << value << "JPY" << endl;
}