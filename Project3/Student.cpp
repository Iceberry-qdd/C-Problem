#include<iostream>
#include"Student.h"
using namespace std;

void Student::set()
{
	cin >> number >> name >> score;
	++num;
	sum += score;
}

void Student::disp()
{

}

double Student::avg()
{
	return sum/num;
}

