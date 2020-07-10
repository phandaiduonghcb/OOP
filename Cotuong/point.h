#pragma once
#include <iostream>
using namespace std;
class point
{
private:
	int x; int y;
public:
	friend istream& operator>>(istream& is, point& a)
	{
		is >> a.x >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, point a)
	{
		os << "(" << a.x << "," << a.y << ")" << endl;
		return os;
	}
	void setpoint(int newx, int newy)
	{
		x = newx;
		y = newy;
	}
};

