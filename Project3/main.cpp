#include<iostream>
#include"Student.h"
using namespace std;
#define N 50

int main()
{
	int i;
	Student St[N];
	for (i = 0; i < N; i++)
		St[i].set();
	Avg(St);
}
void Avg(Student S)
{
	cout << S.sum / S.num;
}