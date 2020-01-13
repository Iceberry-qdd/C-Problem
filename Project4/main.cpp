#include<iostream>
#include"Goods.h"
using namespace std;

int main()
{
	Goods g1(5);
	int w;
	cout << "Test:" << endl;
	//w = g1.get();
	//g1(w);
	cout << g1.GetTotal() << endl;
	return 0;
}