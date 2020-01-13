#include<iostream>
#include"student.h"
using namespace std;
#define N 3

int main()
{
	int i, j;
	student S[N],temp;
	for (i = 0; i < N; i++)
		S[i].getscore();
	for(i=0;i<N-1;i++)
		for(j=0;j<N-i-1;j++)
			if (S[j].Total() < S[j+1].Total())
			{
				temp = S[j];
				S[j] = S[j+ 1];
				S[j + 1] = temp;
			}
	for (i = 0; i < N; i++)
	{
		S[i].display();
		cout << " ";
	}
	return 0;
}