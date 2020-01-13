#ifndef CURRENCY
#define CURRENCY
class Currency {
protected:
	double value=0;
public:
	virtual void display() = 0;
};
#endif