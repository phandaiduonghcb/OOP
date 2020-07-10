#include "Xe.h"
void Xe::Nhap()
{
	cout << "Nhap ten xe: ";
	getline(cin, TenXe);
	cout << "Nhap gia tien xe: ";
	cin >> Tien;
	cout << "Nhap nam san xuat: ";
	cin >> NamSx;
	Bx.Nhap();
}
void Xe::Xuat()
{
	cout << "---------------" << endl;
	cout << "Ten xe: " << TenXe<<endl;
	cout << "Gia tien xe: " << Tien << endl;
	cout << "Nam san xuat: " << NamSx<<endl;
	Bx.Xuat();
}
void BanhXe::Nhap()
{
	cout << "Nhap loai banh xe: ";
	cin>>LoaiBanhXe;
	cout << "Nhap gia tien banh xe: ";
	cin >> Giatien;
}
void BanhXe::Xuat()
{
	cout << "Loai banh xe: " << LoaiBanhXe << endl;
	cout << "Gia tien banh xe: " << Giatien<<endl;
}