#include<iostream>
#include"Complex.h"
#include"Real.h"
#include"Root.h"
using namespace std;

int main()
{
	int a, b, c;
	cout << "Please enter the three coefficients of the quadratic equation:";
	cin >> a >> b >> c;
	cout<<"Your quadratic equation is:"<< a << "x^2+(" << b << ")x+(" << c <<")=0 "<<"\nSovling...\nThe solution of the equation is:";
	Root r(a, b, c);
	r.Display();
	cout << endl;
	return 0;
}