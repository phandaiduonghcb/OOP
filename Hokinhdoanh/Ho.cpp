#include "Ho.h"
void Ho::Nhap()
{
	cout << "Ma KH: ";
	cin.ignore();getline(cin, strMakh);
	cout << "Ten KH: ";
	getline(cin, strTenkh);
	cout << "Chi so cu: ";cin >> fCscu;
	cout << "Chi so moi: ";cin >> fCsmoi;
}
void Ho::Xuat()
{
	cout << strMakh << " " << strTenkh << " " << fCscu << " " << fCsmoi << " ";
}
float Ho::getTien()
{
	return fTien;
}
float Ho::getNuoc()
{
	return fCsmoi - fCscu;
}
int Ho::getLoai()
{
	return loai;
}
float Ho::getTiennuoc()
{
	return fTiennuoc;
}