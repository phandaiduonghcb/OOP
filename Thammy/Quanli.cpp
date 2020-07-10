#include "Quanli.h"
void Quanli::Nhap()
{
	cin >> n;
	arr = new KH[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i].Nhap();
	}
}
void Quanli::Xuat()
{
	for (int i = 0; i < n; ++i)
	{
		arr[i].Xuat();
		cout << ".................." << endl;
	}
}
void Quanli::Xuatnhieutien()
{
	int max = -1;
	int* vitri = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (arr[i].getTongtien() > max)
		{
			max = arr[i].getTongtien();
		}
	}
	int  j = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].getTongtien() == max)
		{
			vitri[j] = i;
			++j;
		}
	}
	cout << "Khach hang chi nhieu tien nhat: " << max<<endl;
	for (int i = 0; i < j; ++i)
	{
		arr[vitri[i]].Xuat();
		cout << "................" << endl;
	}
}