#include<iostream>
#include"Data.h"
#define N 5
using namespace std;

int main()
{
	int x;
	int a[N];
	cout << "Please enter some elements:";
	for (int i = 0; i < N; i++)
		cin >> a[i];
	Data<int> d(*a, N);
	cout << "The Sum is:" << d.Sum() <<"\nPlease enter the number you want to find:";
	cin >> x;
	cout << "The index is:" << d.Find(x);
	return 0;
}