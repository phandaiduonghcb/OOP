#pragma once
#include <string>
#include <iostream>
#include "Date.h"
using namespace std;
class Nv
{
protected:
	string Hoten;
	Date Ns;
	int Luongcb;
	int Luong;
public:
	Nv();
	Nv(const Nv& a);
	virtual void Xuat();
	virtual void Nhap();
	virtual void TinhLuong() = 0;
	virtual int getLuong() = 0;
	virtual string getHoten() = 0;
};

