#include "Nvsx.h"
Nvsx::Nvsx(): Nv()
{
	Sosp = 0;
}
Nvsx::Nvsx(const Nvsx& a): Nv(a)
{
	Sosp = a.Sosp;
}
void Nvsx::Nhap()
{
	Nv::Nhap();
	cout << "So san pham: ";
	cin >> Sosp;
}
void Nvsx::Xuat()
{
	Nv::Xuat();
	cout << "So san pham: " << Sosp << endl;
	TinhLuong();
}
void Nvsx::TinhLuong()
{
	Luong = Luongcb + Sosp * 2000;
	cout << "Luong nhan duoc: "<<Luong<<endl;
}
int Nvsx::getLuong()
{
	return Luong;
}
string Nvsx::getHoten()
{
	return Hoten;
}