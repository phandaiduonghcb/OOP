#include "Basic.h"
void Basic::Nhap()
{
	cout << "So thang su dung: ";cin >> iThang;
	iPhicoban = 500;
	cout << "(1: Co - 0: Khong)\n";
	cout << "Tham gia lop hoc khong: ";cin >> isLophoc;
	cout << "So lop hoc muon tham gia (100/lop): ";cin >> iSolop;
	isXonghoi = 0;
	cout << "Su dung dich vu ho tro PT khong: ";cin >> isHotroPT;
	iTongtien = iPhicoban * iThang + iSolop * 100;
	if (isHotroPT)
		iTongtien += 100;
}
void Basic::Xuat()
{
	cout << "Goi Basic \n";
	cout << "So thang su dung: ";cout << iThang <<  endl;
	cout << "Tham gia lop hoc: ";cout << isLophoc << endl;
	cout << " + So lop hoc: ";cout << iSolop << endl;
	cout << "Dich vu ho tro PT: " << isHotroPT << endl;
	cout << "Tong tien:" << iTongtien<<endl<<endl;
}
int Basic::getTongtien()
{
	return Gym::getTongtien();
}