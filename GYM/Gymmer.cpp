#include "Gymmer.h"
void Gymmer::Nhap()
{
	cout << "Ho ten: ";
	cin.ignore();
	getline(cin, strHoten);
	cout << "CMND: ";
	cin.ignore();
	getline(cin, strCMND);
	int x;
	cout << "Chon goi dich vu (1:Premium, 2:Basic, 3:Non-member):" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		GoiDichvu = new Premium();
		GoiDichvu->Nhap();
		break;
	case 2:
		GoiDichvu = new Basic();
		GoiDichvu->Nhap();
		break;
	case 3:
		GoiDichvu = new Nonmember();
		GoiDichvu->Nhap();
		break;
	default:
		break;
	}
}
void Gymmer::Xuat()
{
	cout << "Ho ten: " << strHoten<<endl;
	cout << "CMND: " << strCMND<<endl;
	GoiDichvu->Xuat();
}
int Gymmer::getTongtien()
{
	return GoiDichvu->getTongtien();
}