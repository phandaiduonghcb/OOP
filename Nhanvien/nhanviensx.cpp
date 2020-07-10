#include "nhanviensx.h"
using namespace std;

nhanviensx::nhanviensx()
{}
nhanviensx::~nhanviensx()
{}
void nhanviensx::nhap()
{
	nhanvien::nhap();
	cout << "Luong can ban: ";
	cin >> luongcb;
	cout << "so san pham: ";
	cin >> sosp;
}
void nhanviensx::xuat()
{
	nhanvien::xuat();
	cout << "\t luong la: " << this->luongcb + this->sosp * 5000;
}