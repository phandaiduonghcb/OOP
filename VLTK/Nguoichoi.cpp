#include "Nguoichoi.h"
void Nguoichoi::Nhap()
{
	cout << "Monphai: ";
	cin >> Monphai;
	if (Monphai == "Thieulam" || Monphai == "Thienvuongbang")
		He = "Kim";
	else if (Monphai == "Ngudocgiao" || Monphai == "Duongmon")
		He = "Moc";
	else if (Monphai == "Ngamy" || Monphai == "Thuyyenmon")
		He = "Thuy";
	else if (Monphai == "Caibang" || Monphai == "Thiennhangiao")
		He = "Hoa";
	else if (Monphai == "Conlon" || Monphai == "Vodang")
		He = "Tho";
	NguoichoivaQuaivat::Nhap();
	fSatthuong = iCapdo * 5;

}
void Nguoichoi::Xuat()
{
	cout << "Nhanvat:  " << Monphai << " ";
	NguoichoivaQuaivat::Xuat();
}