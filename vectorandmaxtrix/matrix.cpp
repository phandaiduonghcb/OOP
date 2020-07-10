#include "matrix.h"
#include "vector.h"
matrix::matrix()
{
	hang = 0;
	cot = 0;
}
matrix::matrix(matrix& b)
{
	hang = b.hang;
	cot = b.cot;
	for (int i = 0; i < hang; i++)
		for (int j = 0; j < cot; j++)
			mt[i][j] = b.mt[i][j];
}
int matrix::getij(int i, int j)
{
	return mt[i][j];
}
int matrix::getsocot()
{
	return cot;
}
int matrix::getsohang()
{
	return hang;
}
void matrix::setsohang(int n)
{
	hang = n;
}
void matrix::setsocot(int n)
{
	cot = n;
}
void matrix::setij(int i, int j, int gt)
{
	mt[i][j] = gt;
}
void matrix::Nhap()
{
	cout << "Nhap so hang: ";
	cin >> hang;
	cout << "Nhap so cot: ";
	cin >> cot;
	for (int i = 0; i < hang; i++)
		for (int j = 0; j < cot; j++)
		{
			cout << "mt[" << i << "][" << j << "]: ";
			cin >> mt[i][j];
		}
}
void matrix::Xuat()
{
	for (int i = 0; i < hang; i++)
		for (int j = 0; j < cot; j++)
		{
			cout << "mt[" << i << "][" << j << "]: ";
			cout << mt[i][j] << endl;
		}
}
void matrix::Nhan(vector A)
{
	matrix tich;
	tich.setsocot(cot);
	tich.setsohang(1);
	for (int i = 0; i < 1; i++)
		for (int j = 0; j < cot; j++)
		{
			tich.mt[i][j] = 0;
			for (int k = 0; k < A.getsophantu(); k++)
			{
				tich.mt[i][j] = tich.mt[i][j] + A.vt[k] * mt[k][j];
			}
		}
	cout << "-Tich la: " << endl;
	tich.Xuat();
}