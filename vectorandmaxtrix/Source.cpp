#include "vector.h"
#include "matrix.h"
void Cong1(vector A, matrix B)
{
	vector x;
	cout << "-Tong la:" << endl;
	for (int i = 0; i < A.n; i++)
	{
		int gt = A.vt[i] + B.mt[0][i];
		x.setvti(i, gt);
		x.setsophantu(A.n);
	}
	x.Xuat();
}
void Nhan1(vector A, matrix B)
{
	matrix tich;
	tich.setsocot(B.cot);
	tich.setsohang(1);
	for (int i = 0; i < 1; i++)
		for (int j = 0; j < B.cot; j++)
		{
			tich.mt[i][j] = 0;
			for (int k = 0; k < A.getsophantu(); k++)
			{
				tich.mt[i][j] = tich.mt[i][j] + A.vt[k] * B.mt[k][j];
			}
		}
	cout << "-Tich la: " << endl;
	tich.Xuat();
}
int main()
{
	vector A;
	matrix B;
	A.Nhap();
	B.Nhap();
	cout << "---" << endl;
	if (A.getsophantu() != B.getsocot() || B.getsohang() != 1)
		cout << "-Khong the cong vi khong cung kich thuoc." << endl;
	else
	{
		A.Tong(B);
		//Cong1(A, B);
	}
	if (A.getsophantu() != B.getsohang())
		cout << "-Khong the nhan." << endl;
	else
	{
		//B.Nhan(A);
		Nhan1(A, B);
	}
	return 0;
}