#include "SoPhuc.h"
#include "SoAo.h"
int main()
{
	SoAo a,b;
	a.Nhap();
	b.Nhap();
	SoAo temp = a.Tong(b);
	temp.Xuat();
}