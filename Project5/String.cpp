#include<iostream>
#include<string>
#include"String.h"
using namespace std;

String::String(string a)
{
	s = a;
}

 String String::operator+=(String& a)
{
	s += a.s;
	return *this;
}

String String::operator=(String a)
{
	s = a.s;
	return s;
}

bool String::operator==(String a)
{
	if (s == a.s)
		return true;
	else
		return false;
}

void String::display()
{
	cout << s << endl;
}

void String::getlength()
{
	cout << s.size() << endl;
}

String::~String()
{

}
