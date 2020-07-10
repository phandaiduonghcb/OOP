#pragma once
#include "Nguoi.h"
class Treem : public Nguoi
{
protected:
	string TenTruong;
public:
	Treem();
	int getchieucao();
	int getsodv();
	string getTenTruong();
	Treem(string newhoten, int newtuoi, int newchieucao, string newCMND, int newsodv, string newTenTruong);
	void Nhap();
	void Xuat();
};
