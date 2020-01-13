#include<iostream>
#include<string>
#include"String.h"
void Cout(String a,String b);
using namespace std;

int main()
{
	//int n;
	String a("Hello");
	String b("World");
	Cout(a, b);
	/*cout << "a=";
	a.display();
	cout << "b=";
	b.display();
	cout << "Length a:";
	a.getlength();
	cout << "Length b:";
	b.getlength();
	cout << "Is equal:" << ((a == b) ? "Yes" : "No\n");
	cout << endl;*/
	cout << "After concat:"<<endl;
	a += b;
	Cout(a, b);
	/*(a += b).display();
	cout << "b=";
	b.display();
	*/
	cout << "After copy:"<<endl;
	a = b;
	Cout(a, b);
	/*(a = b).display();
	cout << "Is equal:"<< ((a == b) ? "Yes" : "No\n");
	
	while (1)
	{
		cout<<"1-Concat\n2-Copy\n3-Is equal\n4-Display the first string\n5-display the second string\n6-Calculate the first string's length\n7-Calculate the secong string's length\n";
		cin >> n;
		switch (n) {
		case'1':(a += b).display(); break;
		case'2':a = b; break;
		case'3':cout << ((a == b) ? "a equals b." : "a does not equal b.\n"); break;
		case'4':a.display(); break;
		case'5':b.display(); break;
		case'6':a.getlength(); break;
		case'7':b.getlength(); break;
		}
	}*/
	return 0;
}

void Cout(String a, String b)
{
	cout << "a=";
	a.display();
	cout << "b=";
	b.display();
	cout << "Length a:";
	a.getlength();
	cout << "Length b:";
	b.getlength();
	cout << "Is equal:" << ((a == b) ? "Yes" : "No\n");
	cout << endl;
}