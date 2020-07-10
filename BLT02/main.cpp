#include "SoPhuc.h"
int main()
{
	SoPhuc SoPhuc1;
	SoPhuc SoPhuc2;
	SoPhuc KetQua;
	SoPhuc1.Nhap();
	SoPhuc2.Nhap();
	SoPhuc1.Xuat();
	SoPhuc2.Xuat();
	KetQua = SoPhuc1.Cong(SoPhuc2);
	KetQua.Xuat();
	return 0;

}