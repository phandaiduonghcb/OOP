#include "SoAo.h"
void SoAo::Nhap()
{
	iThuc = 0;
	int x;
	cin >> x;
	iAo = x;
}
void SoAo::Xuat()
{
	SoPhuc::Xuat();
}
SoAo SoAo::Tong(SoAo a)
{
	SoAo temp;
	temp.iAo = iAo + a.iAo;
	temp.iThuc = 0;
	return temp;
}