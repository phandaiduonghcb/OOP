#include "Nguoi.h";
#include "Quanli.h";
#include "Treem.h"
int main()
{
	Quanli a;
	a.Nhap();
	a.Xuat();
	cout << "+++++++++++++++" << endl;
	a.Xuatlunnhat();
	cout << "+++++++++++++++" << endl;
	a.Xuatnhieutien();
	return 0;
}