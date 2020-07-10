#include "Nvvp.h"
Nvvp::Nvvp(): Nv()
{
	Songaylv = 0;
	Trocap = 0;
}
Nvvp::Nvvp(const Nvvp& a): Nv(a)
{
	Songaylv = a.Songaylv;
	Trocap = a.Trocap;
}
void Nvvp::Nhap()
{
	Nv::Nhap();
	cout << "So ngay lam viec: ";cin >> Songaylv;
	cout << "Tro cap: ";cin >> Trocap;
}
void Nvvp::Xuat()
{
	Nv::Xuat();
	cout << "So ngay lam viec: " << Songaylv << endl;
	cout << "Tro cap: " << Trocap<<endl;
	TinhLuong();
}
void Nvvp::TinhLuong()
{
	Luong = Luongcb + Songaylv * 200000 + Trocap;
	cout << "Luong nhan duoc: " << Luong<<endl;
}
int Nvvp::getLuong()
{
	return Luong;
}
string Nvvp::getHoten()
{
	return Hoten;
}