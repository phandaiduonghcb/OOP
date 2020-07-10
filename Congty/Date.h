#pragma once
#include <iostream>
using namespace std;
class Date
{
private:
	int d;
	int m;
	int y;
public:
	Date()
	{
		d = 1;
		m = 1;
		y = 1000;
	}
	void Nhap();
	void Xuat();
};

