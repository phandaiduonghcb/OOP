#include "Tamgiac.h"
void Tamgiac::Nhap()
{
	n = 3;
	a = new Point[3];
	for (int i = 0;i < n;i++)
	{
		cout << "Dinh " << i << ":" << endl;
		a[i].Nhap();
	}
}
void Tamgiac::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		cout << "Dinh " << i << ": ";
		a[i].Xuat();

	}
}