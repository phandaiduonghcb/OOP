#pragma once
#include <iostream>
#include <string>
using namespace std;
class BanhXe
{
private:
	string LoaiBanhXe;
	int Giatien;
public:
	void Nhap();
	void Xuat();
};
class Xe
{
private:
	string TenXe;
	string Tien;
	int NamSx;
	BanhXe Bx;

public:
	void Nhap();
	void Xuat();
};
