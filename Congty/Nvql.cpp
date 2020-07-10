#include "Nvql.h"
Nvql::Nvql():Nv()
{
	Hscv = 0;
	Thuong = 0;
}
Nvql::Nvql(const Nvql& a):Nv(a)
{
	Hscv = a.Hscv;
	Thuong = a.Thuong;
}
void Nvql::Nhap()
{
	Nv::Nhap();
	cout << "He so chuc vu: ";cin >> Hscv;
	cout << "Thuong: ";cin >> Thuong;
}
void Nvql::Xuat()
{
	Nv::Xuat();
	cout << "He so chuc vu:" << Hscv << endl;
	cout << "Thuong: " << Thuong << endl;;
	TinhLuong();
}
void Nvql::TinhLuong()
{
	Luong = Luongcb * Hscv + Thuong;
	cout << "Luong nhan duoc: " << Luong << endl;
}
int Nvql::getLuong()
{
	return Luong;
}
string Nvql::getHoten()
{
	return Hoten;
}