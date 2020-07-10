#pragma once
#include <iostream>
#include <string>
using namespace std;
class Ho
{
protected:
	string strMakh;
	string strTenkh;
	float fCscu;
	float fCsmoi;
	float fTien;
	float fTiennuoc;
	int loai;
public:
	virtual void Nhap();
	virtual void Xuat();
	float getTien();
	float getNuoc();
	float getTiennuoc();
	int getLoai();
};

