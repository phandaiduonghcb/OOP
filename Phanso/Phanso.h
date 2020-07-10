#pragma once
#include <iostream>;
#include <algorithm>;
#include <cmath>;
class PhanSo
{
public:
	PhanSo();
	void Nhap();
	void Xuat();
	void RutGon();
	PhanSo Cong(PhanSo PhanSo2);
	PhanSo Tru(PhanSo PhanSo2);
	PhanSo Nhan(PhanSo PhanSo2);
	PhanSo Chia(PhanSo PhanSo2);

private:
	int iMauSo;
	int iTuSo;

};
using namespace std;