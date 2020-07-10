#pragma once
#include "Nguoichoi.h"
#include "NguoichoivaQuaivat.h"
#include "Quaivat.h"
class Quanli
{
private:
	NguoichoivaQuaivat** a;
	int n;
public:
	void Nhap();
	void Xuat();
	void Satthuongcaonhat();
	void ASoloB();
};