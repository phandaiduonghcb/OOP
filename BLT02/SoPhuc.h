#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
	private:
		int iThuc;
		int iAo;
	public:
		void Nhap();
		void Xuat();
		SoPhuc Cong(SoPhuc Sp2);
};

