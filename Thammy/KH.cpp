#include "KH.h"
void KH::Nhap()
{
	cout << "Ten: ";
	cin.ignore();
	getline(cin, ten);
	check = new bool[7];
	a = new Duongda * [7];
	for (int i = 0; i < 7; i++)
		check[i] = false;
	a[0] = new Taytrang(); a[0]->set(); check[0] = true;
	a[1] = new Ruamat(); a[1]->set(); check[1] = true;
	a[2] = new Matna(); a[2]->set(); check[2] = true;
	a[3] = new Toner(); a[3]->set();
	a[4] = new Essence(); a[4]->set();
	a[5] = new Kemduong(); a[5]->set();
	a[6] = new Chongnang(); a[6]->set();
	cout << "Ba buoc dau la Taytrang, Ruamat, Matna la bat buoc.\n";
	cout << "Chon cac quy trinh sau, nhan -1 de ket thuc chon:\n";
	cout << "3.Toner      4.Essence/Serum\n";
	cout << "5.Kemduong   6.Chongnang\n";
	while (true)
	{
		int x; cin >> x;
		if (x == -1)
			break;
		check[x] = true;
	}
	Tongtien = 0;
	Tongtg = 0;
	for (int i = 0; i < 7; ++i)
	{
		if (check[i])
		{
			Tongtien += a[i]->gettien();
			Tongtg += a[i]->gettg();
		}
	}
}
void KH::Xuat()
{
	cout << "Ten: " << ten << endl;
	for (int i = 0; i < 7; ++i)
	{
		if (check[i])
		{
			a[i]->Xuat();
		}
	}
	cout << "Tong tien: " << Tongtien << endl;
	cout << "Tong thoi gian: " << Tongtg << endl;
}
float KH::getTongtien()
{
	return Tongtien;
}