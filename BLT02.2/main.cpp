#include "PhanSo.h"
int main()
{
	PhanSo arrPhanSo[100];
	int SoPhanSo;
	cout << "Nhap so phan so: "; cin >> SoPhanSo;
	Nhap(arrPhanSo, SoPhanSo);
	Xuat(arrPhanSo, SoPhanSo);
	return 0;
}