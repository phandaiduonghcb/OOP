#include "NguoichoivaQuaivat.h"
bool isSinh(string a, string b)
{
	if (a == "Kim" && b == "Thuy")
		return 1;
	if (a == "Thuy" && b == "Moc")
		return 1;
	if (a == "Moc" && b == "Hoa")
		return 1;
	if (a == "Hoa" && b == "Tho")
		return 1;
	if (a == "Tho" && b == "Kim")
		return 1;
	return 0;
}
bool isKhac(string a, string b)
{
	if (a == "Kim" && b == "Moc")
		return 1;
	if (a == "Thuy" && b == "Hoa")
		return 1;
	if (a == "Moc" && b == "Tho")
		return 1;
	if (a == "Hoa" && b == "Kim")
		return 1;
	if (a == "Tho" && b == "Thuy")
		return 1;
	return 0;
}
void NguoichoivaQuaivat::Nhap()
{
	cout << "Cap: ";
	cin >> iCapdo;
}
void NguoichoivaQuaivat::Xuat()
{
	cout << He << " " << "Cap:" << iCapdo << " " << "Satthuong:" << fSatthuong << endl;
}
void NguoichoivaQuaivat::Solo(NguoichoivaQuaivat* a)
{
	if (isSinh(He, a->He))
	{
		fSatthuong += fSatthuong * 10 / 100;
	}
	else if (isSinh(a->He, He))
	{
		a->fSatthuong += a->fSatthuong * 10 / 100;
	}
	else if (isKhac(He, a->He))
	{
		fSatthuong += fSatthuong * 20 / 100;
		a->fSatthuong -= a->fSatthuong * 20 / 100;
	}
	else if (isKhac(a->He, He))
	{
		a->fSatthuong += a->fSatthuong * 20 / 100;
		fSatthuong -= fSatthuong * 20 / 100;
	}
	cout << "Tinh trang khi solo: \n";
	Xuat();
	a->Xuat();
}
float NguoichoivaQuaivat::getSatthuong()
{
	return fSatthuong;
}