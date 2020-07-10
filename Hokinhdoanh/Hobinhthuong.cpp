#include "Hobinhthuong.h"
void Hobinhthuong::Nhap()
{
	Ho::Nhap();
	int iNuoc = getNuoc();
	if (iNuoc <= 20)
	{
		fTiennuoc = iNuoc * 8000;
	}
	else if (iNuoc <= 40)
	{
		fTiennuoc = 8000 * 20 + (iNuoc - 20) * 12000;
	}
	else
	{
		fTiennuoc = 8000 * 20 + 20 * 12000 + (iNuoc - 40) * 18000;
	}
	fTien = fTiennuoc * 5 / 100 + fTiennuoc;
	loai = 1;
}
void Hobinhthuong::Xuat()
{
	Ho::Xuat();
	cout << " " << fTien << endl;
}