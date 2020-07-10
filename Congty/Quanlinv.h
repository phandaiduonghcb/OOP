#pragma once
#include "Nv.h"
#include "Nvql.h"
#include "Nvsx.h"
#include "Nvvp.h"
class Quanlinv
{
private:
	Nv** a;
	int n;
	int loai;
public:
	Quanlinv();
	void Nhap();
	void Xuat();
	void TongLuong();
	void TimKiem();
};

