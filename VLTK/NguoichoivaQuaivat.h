#pragma once
#include <iostream>
using namespace std;
class NguoichoivaQuaivat
{
protected:
	float fSatthuong;
	int iCapdo;
	string He;
public:
	virtual void Nhap();
	virtual void Xuat();
	void Solo(NguoichoivaQuaivat* a);
	float getSatthuong();
};

