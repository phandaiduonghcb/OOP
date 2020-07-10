#include "Quanli.h"
void Quanli::Nhap()
{
	cout << "Nhap so ho: ";
	cin >> n;
	a = new Ho * [n];
	cout<<"1: Ho binh thuong, 2: Ho kinh doanh\n";
	for (int i = 0;i < n;i++)
	{
		int x;
		cin >> x;
		if (x == 1)
		{
			a[i] = new Hobinhthuong();
			a[i]->Nhap();
		}
		else
		{
			a[i] = new Hokinhdoanh();
			a[i]->Nhap();
		}
	}
}
void Quanli::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		a[i]->Xuat();
	}
}
void Quanli::Tinhtongtiennuoc()
{
	int sum = 0;
	for (int i = 0;i < n;i++)
	{
		sum += a[i]->getTiennuoc();
	}
	cout << "Tong tien nuoc cac ho: " << sum << endl;
}
void Quanli::Hokdnhieunuocnhat()
{
	int* arr;
	arr = new int[n];
	int maxx = -1;
	int j = 0;
	for (int i = 0;i < n;i++)
	{
		if (maxx < a[i]->getNuoc() && a[i]->getLoai() == 2)
		{
			maxx = a[i]->getNuoc();
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (maxx == a[i]->getNuoc() && a[i]->getLoai() == 2)
		{
			arr[j] = i;
			j++;
		}
	}
	cout << "Ho su dung nhieu nuoc nhat: " << endl;
	for (int i = 0;i < j;i++)
	{
		a[arr[i]]->Xuat();
	}
}