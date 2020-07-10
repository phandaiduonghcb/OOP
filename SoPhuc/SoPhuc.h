#pragma once
#include <math.h>
#include <iostream>
using namespace std;
class SoPhuc
{
protected:
	int iAo;
	int iThuc;
public:
	SoPhuc();
	SoPhuc(int iAoMoi);
	SoPhuc(int iAoMoi, int iThucMoi);
	SoPhuc(const SoPhuc& sp2);
	int getAo()
	{
		return iAo;
	}
	int getThuc()
	{
		return iThuc;
	}
	void setAo(int iAoMoi);
	void setThuc(int iThucMoi);
	void Nhap();
	void Xuat();
	SoPhuc operator+(SoPhuc b);
	SoPhuc operator-(SoPhuc b);
	friend SoPhuc operator+(SoPhuc a, int b);
	friend SoPhuc operator-(SoPhuc a, int b);
	friend SoPhuc operator+(int a, SoPhuc b);
	friend SoPhuc operator-(int a, SoPhuc b);
	SoPhuc& operator=(SoPhuc& a);
	friend istream& operator>>(istream& is, SoPhuc& b)
	{
		is >> b.iThuc;
		is >> b.iAo;
		return is;
	}
	friend ostream& operator<<(ostream& os, SoPhuc b)
	{
		os<< b.iThuc << "+" << "(" << b.iAo << ")" << ".i" << endl;
		return os;
	}
	SoPhuc& operator++();
	SoPhuc operator++(int);
};
