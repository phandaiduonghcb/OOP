#pragma once
#include "nhanvien.h"
class nhanvienvp : public nhanvien
{
private:
	int songaylam;
public:
	nhanvienvp();
	~nhanvienvp();
	void nhap();
	void xuat();
};

