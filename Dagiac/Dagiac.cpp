#include "Dagiac.h"
void Dagiac::Nhap()
{
	cout << " Nhap so dinh: ";
	cin >> n;
	a = new Point[n];
	for (int i = 0;i < n;i++)
	{
		cout << "Dinh " << i << ":" << endl;
		a[i].Nhap();
	}
}
void Dagiac::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		cout << "Dinh " << i << ": ";
		a[i].Xuat();
	}
}