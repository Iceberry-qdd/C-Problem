#include<iostream>
#include"HKY.h"
using namespace std;

HKY::HKY(double v)
{
	value = v;
}

void HKY::display()
{
	cout << value << "HKY" << endl;
}