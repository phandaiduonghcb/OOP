#include "Quanlinv.h"
Quanlinv::Quanlinv()
{
	a = NULL;
	n = 0;
	loai = -1;
}
void Quanlinv::Nhap()
{
	cout << "Nhap so nhan vien: ";
	cin >> n;
	a = new Nv * [n];
	cout << "1: Nv san xuat,2: Nv van phong,3: Nv quan li" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhan vien thu " << i << endl;
		int k;cin >> k;
		switch (k)
		{
		case 1:
		{
			a[i] = new Nvsx();
			a[i]->Nhap();
			break;
		}
		case 2:
		{
			a[i] = new Nvvp();
			a[i]->Nhap();
			break;
		}
		case 3:
		{
			a[i] = new Nvql();
			a[i]->Nhap();
			break;
		}
		default:
			break;
		}
	}
}
void Quanlinv::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		cout << "----------" << endl;
		a[i]->Xuat();
	}
}
void Quanlinv::TongLuong()
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += a[i]->getLuong();
	}
	cout << "***********" << endl;
	cout << "Tong luong cong ty: " << sum << endl;
}
void Quanlinv::TimKiem()
{
	string x;
	cout << "***********" << endl;
	cout << "Nhap ten nhan vien cam tim: ";
	cin.ignore();
	getline(cin, x);
	bool temp = true;
	cout << "Thong tin Nhan vien " << x <<":"<< endl;
	for (int i = 0;i < n;i++)
	{
		if (a[i]->getHoten() == x)
		{
			cout << "--------" << endl;
			a[i]->Xuat();
			temp = false;
		}
	}
	if (temp)
		cout << "Khong co nhan vien nay." << endl;
}