#include<iostream>
#include"Rectangle.h"
using namespace std;

int main()
{
	int l, r, t, b,a;
	Rectangle R;
	cin >> l >> r >> t >> b;
	R.Set(l, t, r, b);
	while (1)
	{
		cout << "1-Modify  2-Move  3-Size  4-Where  5-Area  6-Display" << endl;
		cin >> a;
		switch (a) {
		case 1:R.Modify(); break;
		case 2:R.Move(); break;
		case 3:R.Size(); break;
		case 4:R.Where(); break;
		case 5:R.Area(); break;
		case 6:R.Display(); break;
		}
	}
	return 0;
}