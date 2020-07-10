#include "vector.h"
#include "matrix.h"
vector::vector()
{
	n = 0;
}
vector::vector(vector& b)
{
	for (int i = 0; i < b.n; i++)
	{
		vt[i] = b.vt[i];
	}
	n = b.n;
}
int vector::getvti(int i)
{
	return vt[i];
}
int vector::getsophantu()
{
	return n;
}
void vector::setsophantu(int i)
{
	n = i;
}
void vector::setvti(int i, int gt)
{
	vt[i] = gt;
}
void vector::Nhap()
{
	cout << "Nhap so phan tu vector:";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "vt[" << i << "]: ";
		cin >> vt[i];
	}
}
void vector::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << "vt[" << i << "]: ";
		cout << vt[i] << endl;
	}
}
void vector::Tong(matrix& A)
{
	vector x;
	cout << "-Tong la:" << endl;
	for (int i = 0; i < n; i++)
	{
		int gt = vt[i] + A.mt[0][i];
		x.setvti(i, gt);
		x.setsophantu(n);
	}
	x.Xuat();
}