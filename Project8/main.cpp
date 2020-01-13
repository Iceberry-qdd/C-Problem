#include<iostream>
#include"RMB.h"
#include"JPY.h"
#include"HKY.h"
void print(Currency& cu);
using namespace std;

int main()
{
	RMB r(20);
	JPY j(31.62);
	HKY h(41);
	print(r);
	print(j);
	print(h);
	return 0;
}

void print(Currency& cu)
{
	cu.display();
}