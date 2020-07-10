#pragma once
#include "Gym.h"
#include "Basic.h"
#include "Nonmember.h"
#include "Premium.h"
class Gymmer
{
private:
	string strHoten;
	string strCMND;
	Gym* GoiDichvu;
public:
	void Nhap();
	void Xuat();
	int getTongtien();
};

