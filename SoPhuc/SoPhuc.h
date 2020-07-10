#pragma once
#include <math.h>
#include <iostream>
class SoPhuc
{
private:
	float iAo;
	float iThuc;
public:
	SoPhuc();
	SoPhuc(float iAoMoi);
	SoPhuc(float iAoMoi, float iThucMoi);
	SoPhuc(SoPhuc& sp2);
	float getAo()
	{
		return iAo;
	}
	float getThuc()
	{
		return iThuc;
	}
	void setAo(float iAoMoi);
	void setThuc(float iThucMoi);
	void Nhap();
	void Xuat();
	bool Kiemtra();
	friend SoPhuc TinhToan(SoPhuc a,SoPhuc b);
	SoPhuc operator+(SoPhuc b);
	SoPhuc operator-(SoPhuc b);
	SoPhuc operator*(SoPhuc b);
	SoPhuc operator/(SoPhuc b);
	friend SoPhuc operator+(SoPhuc a, float b);
	friend SoPhuc operator*(SoPhuc a, float b);
	friend SoPhuc operator+(float a, SoPhuc b);
	friend SoPhuc operator*(float a, SoPhuc b);

};
using namespace std;
