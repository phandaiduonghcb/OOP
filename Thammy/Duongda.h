#pragma once
#include <iostream>
#include <string>
using namespace std;
class Duongda
{
protected:
	bool batbuoc;
	string ten;
	string mota;
	float tg;
	float tien;
public:
	void Xuat();
	float gettien();
	float gettg();
	virtual void set() = 0;
};

