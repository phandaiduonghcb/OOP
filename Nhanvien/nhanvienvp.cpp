#include "nhanvienvp.h"
using namespace std;

nhanvienvp::nhanvienvp()
{}

nhanvienvp::~nhanvienvp()
{}
void nhanvienvp::nhap()
{
	nhanvien::nhap();
	cout << "So ngay lam viec:";
	cin >> songaylam;
}
void nhanvienvp::xuat()
{
	nhanvien::xuat();
	cout << "\t luong: "<<this->songaylam*100000;
	
}
