#include "PhanSo.h"
void Nhap(PhanSo arrPhanSo[100], int SoPhanSo)
{
	for (int i = 0; i < SoPhanSo; i++)
	{
		cout << "Phan so " << i << ": " << endl;
		cout << "Tu: ";
		cin >> arrPhanSo[i].iTu;
		cout << "Mau: ";
		cin >> arrPhanSo[i].iMau;
		while (arrPhanSo[i].iMau == 0)
		{
			cout << "Nhap lai mau so: ";
			cin >> arrPhanSo[i].iMau;
		}
	}
}
void Xuat(PhanSo arrPhanSo[100], int SoPhanSo)
{
	for (int i = 0; i < SoPhanSo; i++)
	{
		cout << "Phan so " << i << ": " << arrPhanSo[i].iTu << "/" << arrPhanSo[i].iMau << endl;
	}
}