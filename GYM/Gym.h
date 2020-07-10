#pragma once
#include <iostream>
#include <string>
using namespace std;
class Gym
{
protected:
	int iTongtien;
	int iThang;
	int iPhicoban;
	bool isLophoc;
	bool isXonghoi;
	bool isHotroPT;
public:
	virtual void Nhap() = 0;
	virtual void Xuat() = 0;
	int getTongtien();
};

