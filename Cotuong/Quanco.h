#pragma once
#include "point.h"
class Quanco
{
protected:
	point vitri;
	string cachdichuyen;
public:
	virtual void set(int x,int y) = 0;
	void xuat();
	virtual void vitritiep()=0;
};
class Tuong : public Quanco
{
public:

};

