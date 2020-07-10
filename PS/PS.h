#pragma once
using namespace std;
#include <math.h>
#include <iostream>
class PS
{
private:
	int iMau;
	int iTu;
public:
	friend istream& operator>>(istream& is, PS &a);
	friend ostream& operator<<(ostream& os, PS a);
	friend PS operator+(PS a, PS b);
	friend PS operator-(PS a, PS b);
	void Rutgon();
};

