#include "SoPhuc.h"
void SoPhuc::Nhap()
{
	cout << "Nhap so phuc: "<< endl;
	cout << "Thuc: "; cin >> iThuc;
	cout << "Ao: "; cin >> iAo;
}
void SoPhuc::Xuat()
{
	cout << iThuc << " + (" << iAo << ").e" << endl;
}
SoPhuc SoPhuc::Cong(SoPhuc Sp2)
{
	SoPhuc KetQua;
	KetQua.iThuc = iThuc + Sp2.iThuc;
	KetQua.iAo = iAo + Sp2.iAo;
	return KetQua;
}