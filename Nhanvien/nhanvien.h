#pragma once
#include "ngay.h"
#include <string>
#include<iostream>
using namespace std;

class nhanvien
{
protected:
	string hoten;
	ngay date;
	int luong;
public:
	nhanvien();
	~nhanvien();
	void nhap();
	void xuat();
};

