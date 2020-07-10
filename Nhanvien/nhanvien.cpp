#include "nhanvien.h"
using namespace std;

nhanvien::nhanvien()
{}
nhanvien::~nhanvien()
{}
void nhanvien::nhap()
{
	cout << " nhap ho va ten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Nhap ngay sinh:";
	date.input();
}
void nhanvien::xuat()
{
	cout << hoten << "\t";
	date.output();
}