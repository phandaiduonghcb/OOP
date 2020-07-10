#include "Quaivat.h"
void Quaivat::Nhap()
{
	cout << "La dau linh? (0,1): ";
	cin >> isThulinh;
	cout << "He: ";
	cin >> He;
	NguoichoivaQuaivat::Nhap();
	if (isThulinh)
		fSatthuong = iCapdo * 7;
	else
		fSatthuong = iCapdo * 3;
}
void Quaivat::Xuat()
{
	cout << "Quai:  ";
	if (isThulinh)
		cout << "Daulinh ";
	else
	{
		cout << "Thongthuong ";
	}
	NguoichoivaQuaivat::Xuat();
}
