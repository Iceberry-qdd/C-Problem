#include<iostream>
#include<cmath>
#include"Rectangle.h"
using namespace std;

void Rectangle::Where()
{
	cout << "(" << left << "," << top << ")" << endl;
}
void Rectangle::Area()
{
	cout << "S=" << abs((left - right) * (top - bottom)) << endl;
}
void Rectangle::Set(int l, int r, int t, int b)
{
	left = l;
	right = r;
	top = t;
	bottom = b;
}
void Rectangle::Modify()
{
	int l, r, t, b;
	cin >> l >> r >> t >> b;
	left = l;
	right = r;
	top = t;
	bottom = b;
}
void Rectangle::Move()
{
	int x, y;
	cin >> x >> y;
	left += x;
	right += x;
	top += y;
	bottom += y;
}
void Rectangle::Size()
{
	int x, y;
	cin >> x >> y;
	right += x;
	bottom += y;
}
void Rectangle::Display()
{
	int i,j;
	for (i = 0; i <bottom; i++)//ÁÐ
	{
		for (j =0; j <right; j++)//ÐÐ
			if ((i == top || i == bottom-1 || j == left || j == right-1)&&i>=left&&j>=top)
				cout << "*";
			else
				cout << " ";
		cout << endl;
	}
}