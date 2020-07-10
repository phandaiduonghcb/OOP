#include "Nonmember.h"
void Nonmember::Nhap()
{
	cout << "So thang su dung: ";cin >> iThang;
	iPhicoban = 200;
	isLophoc = 0;
	isXonghoi = 0;
	cout << "Su dung dich vu ho tro PT khong: ";cin >> isHotroPT;
	iTongtien = iPhicoban * iThang;
	if (isHotroPT)
		iTongtien += 200;
}
void Nonmember::Xuat()
{
	cout << "Goi Non-member \n";
	cout << "So thang su dung: ";cout << iThang << endl;
	cout << "Dich vu ho tro PT: " << isHotroPT << endl;
	cout << "Tong tien:" << iTongtien<<endl<<endl;
}
int Nonmember::getTongtien()
{
	return Gym::getTongtien();
}