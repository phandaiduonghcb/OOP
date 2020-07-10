#pragma once
#include "nhanvien.h"
class nhanviensx : public nhanvien
{
private:
	int luongcb;
	int sosp;
public:
	nhanviensx();
	~nhanviensx();
	void nhap();
	void xuat();
	//int luong(int, int);
	//int Tong_luong_sx();
};

