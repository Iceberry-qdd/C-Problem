#include"Currency.h"
#ifndef HEADER_RMB
#define HEADER_RMB
class RMB: public Currency{
public:
	RMB(double v);
	void display();
};
#endif