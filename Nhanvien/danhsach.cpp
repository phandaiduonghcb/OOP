#include "danhsach.h"
using namespace std;

void danhsach::nhapsx()
{
	cout << "so luong nhan vien sx: ";
	cin >> m;
	a = new nhanviensx[m];
	for (int i = 0; i < m; i++)
	{
		a[i].nhap();
	}

}
void danhsach::nhapvp()
{
	cout << "so luong nhan vien vp: ";
	cin >> n;
	b = new nhanvienvp[n];
	for (int i = 0; i < n; i++)
	{
		b[i].nhap();
	}
}
void danhsach::xuatsx()
{
	for (int i = 0; i < m; i++)
	{
		a[i].xuat();
		cout << endl;
	}
}
void danhsach::xuatvp()
{
	for (int i = 0; i < n; i++)
	{
		b[i].xuat();
		cout << endl;
	}
}