#include"Currency.h"
#ifndef HEADER_JPY
#define HEADER_JPY
class JPY:public Currency{
public:
	JPY(double v);
	void display();
};
#endif