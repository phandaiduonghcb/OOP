#include "DsPhanSo.h"
int main()
{
	DsPhanSo ds[100];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		ds[i].Nhap();
	}
	for (int i = 0; i < n; i++)
	{
		ds[i].Xuat();
	}
}