#include"Currency.h"
#ifndef HEADER_HKY
#define HEADER_HKY
class HKY : public Currency {
public:
	HKY(double v);
	void display();
};
#endif