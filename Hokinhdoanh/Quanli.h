#pragma once
#include "Ho.h";
#include "Hobinhthuong.h"
#include "Quanli.h"
#include "Hokinhdoanh.h"
class Quanli
{
private:
	Ho** a;
	int n;
public:
	void Nhap();
	void Xuat();
	void Tinhtongtiennuoc();
	void Hokdnhieunuocnhat();
};

