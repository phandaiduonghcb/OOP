#pragma once
#include "Nv.h"
#pragma once
class Nvvp:public Nv
{
protected:
	int Songaylv;
	int Trocap;
public:
	Nvvp();
	Nvvp(const Nvvp& a);
	void Nhap();
	void Xuat();
	void TinhLuong();
	int getLuong();
	string getHoten();
};

