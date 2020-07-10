#pragma once
#include "Nv.h"
class Nvql:public Nv
{
protected:
	float Hscv;
	int Thuong;
public:
	Nvql();
	Nvql(const Nvql& a);
	void Nhap();
	void Xuat();
	void TinhLuong();
	int getLuong();
	string getHoten();
};

