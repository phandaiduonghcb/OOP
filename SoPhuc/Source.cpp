#include "SoPhuc.h"
int main()
{
	SoPhuc a, b, kq;
	a.Nhap();
	b.Nhap();
	if (a.Kiemtra() || b.Kiemtra())
		cout << "ERROR";
	else {
		kq = TinhToan(a, b);
		kq.Xuat();
	}
	
}