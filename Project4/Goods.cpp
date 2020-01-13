#include<iostream>
#include"Goods.h"
using namespace std;

/*Goods::Goods
{

}*/

Goods::Goods(int w)
{
	weight = w;
	totalWeight += weight;
}

int Goods::get()
{
	int w;
	cin >> w;
	return w;
}

int Goods::GetTotal()
{
	return totalWeight;
}

Goods::~Goods()
{

}

int Goods::totalWeight = 0;