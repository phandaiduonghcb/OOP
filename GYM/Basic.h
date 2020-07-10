#pragma once
#include "Gym.h"
class Basic: public Gym
{
protected:
	int iSolop;
public:
	void Nhap();
	void Xuat();
	int getTongtien();
};

