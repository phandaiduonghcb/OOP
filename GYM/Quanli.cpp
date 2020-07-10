#include "Quanli.h"
void Quanli::Nhap()
{
	cout << "Nhap so luong nguoi tham gia: ";cin >> n;
	a = new Gymmer[n];
	for (int i = 0;i < n;i++)
	{
		cout << "**Nguoi " << i << "**" << endl;
		a[i].Nhap();
	}
}
void Quanli::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		a[i].Xuat();
	}
}
void Quanli::XuatChinhieutien()
{
	int* vitri = new int[n];
	int max = -1;
	int j = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i].getTongtien() > max)
		{
			max = a[i].getTongtien();
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (a[i].getTongtien() == max)
		{
			vitri[j] = i;
			++j;
		}
	}
	cout << " Nhung nguoi chi nhieu tien nhat la (" << max << "): " << endl;
	for (int i = 0;i < j;i++)
	{
		a[vitri[i]].Xuat();
	}
}