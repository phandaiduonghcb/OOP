#pragma once
#include "Childclass.h"
#include "Duongda.h"
class KH
{
private:
	string ten;
	bool* check;
	Duongda** a;
	float Tongtg;
	float Tongtien;
public:
	void Nhap();
	void Xuat();
	float getTongtien();
};

