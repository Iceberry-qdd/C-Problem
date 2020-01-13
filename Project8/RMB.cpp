#include<iostream>
//#include"Currency.h"
#include"RMB.h"
using namespace std;

RMB::RMB(double v)
{
	value = v;
}

void RMB::display()
{
	cout << value << "RMB" << endl;
}