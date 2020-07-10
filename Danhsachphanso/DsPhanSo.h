#pragma once
#include <iostream>
class DsPhanSo
{
public:
	DsPhanSo()
	{
		iMauSo = 1;
		iTuSo = 0;
	}
	void Nhap();
	void Xuat();
private:
	int iMauSo;
	int iTuSo;

};
using namespace std;
