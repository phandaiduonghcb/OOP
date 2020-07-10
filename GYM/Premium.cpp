#include "Premium.h"
void Premium::Nhap()
{
	cout << " So thang su dung: ";cin >> iThang;
	iPhicoban = 1000;
	cout << "- Mien phi: " << endl;
	cout << "  + Tham gia lop hoc\n" << "  + Su dung dich vu xong hoi\n" << "  + Ho tro PT" << endl;
	isXonghoi = 1;
	isLophoc = 1;
	isHotroPT = 1;
	iTongtien = iPhicoban * iThang;
}
void Premium::Xuat()
{
	cout << "Goi Premium \n";
	cout << "So thang su dung: " << iThang<<endl;
	cout << "- Mien phi: "<<endl;
	cout << "  + Tham gia lop hoc\n" << "  + Su dung dich vu xong hoi\n" << "  + Ho tro PT" << endl;
	cout << "Tong tien: " << iTongtien << endl<<endl;
}
int Premium::getTongtien()
{
	return Gym::getTongtien();
}