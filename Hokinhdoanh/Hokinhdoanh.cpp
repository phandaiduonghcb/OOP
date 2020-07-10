#include "Hokinhdoanh.h"
void Hokinhdoanh::Nhap()
{
	Ho::Nhap();
	cout << "Linh vuc kinh doanh:\n";
	cout << "  + Nha hang (Nhap 1)\n";
	cout << "  + Khach san (Nhap 2)\n";
	cout << "  + Cong ty tu nhan (Nhap 3)\n";
	cout << "  +Cong ty nha nuoc (Nhap 4)\n";
	cin >> iLinhvuckd;
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
	if (iLinhvuckd == 4)
	{
		fTien -= fTiennuoc * 5 / 100;
	}
	loai = 2;
}
void Hokinhdoanh::Xuat()
{
	Ho::Xuat();
	cout << " ";
	switch (iLinhvuckd)
	{
	case 1:
		cout << "Nhahang";
		break;
	case 2:
		cout << "Khachsan";
		break;
	case 3:
		cout << "Congtytunhan";
		break;
	case 4:
		cout << "Congtynhanuoc";
		break;
	default:
		break;
	}
	cout <<" "<< fTien << endl;
}