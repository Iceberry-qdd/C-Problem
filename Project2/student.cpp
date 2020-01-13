#include<iostream>
#include"student.h"
using namespace std;

void student::getscore()
{
	cin >> english >> computer;
	total = english + computer;
}

void student::display()
{
	cout << total;
}

int student::Total()
{
	return total;
}