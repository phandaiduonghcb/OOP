#include "Nv.h"
Nv::Nv()
{
	Hoten = 'x';
	Luongcb = 0;
	Luong = 0;
}
Nv::Nv(const Nv& a)
{
	Hoten = a.Hoten;
	Ns = a.Ns;
	Luongcb = a.Luongcb;
	Luong = a.Luong;
}
void Nv::Nhap()
{
	cout << "Ho ten: ";cin.ignore();getline(cin, Hoten);
	cout << "Ngay sinh:" << endl; Ns.Nhap();
	cout << "Luong co ban: ";cin >> Luongcb;
}
void Nv::Xuat()
{
	cout << "Ho ten: " << Hoten <<  endl;
	cout << "Ngay sinh: "; Ns.Xuat(); cout << endl;
	cout << "Luong co ban: " << Luongcb << endl;
}