#pragma once
#include "Nv.h"
class Nvsx: public Nv
{
protected:
	int Sosp;
public:
	Nvsx();
	Nvsx(const Nvsx& a);
	void Nhap();
	void Xuat();
	void TinhLuong();
	int getLuong();
	string getHoten();
};

