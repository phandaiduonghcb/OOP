#pragma once
#include <iostream>
#include <string>
using namespace std;
class Nguoi
{
protected:
	string hoten;
	int tuoi;
	string CMND;
	float chieucao;
	int sodv;
public:
	Nguoi();
	Nguoi(string newhoten, int newtuoi, int newchieucao, string newCMND, int newsodv);
	int getchieucao();
	int getsodv();
	void Nhap();
	void Xuat();
};

