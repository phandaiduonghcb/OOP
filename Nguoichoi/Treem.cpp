#include "Treem.h"
Treem::Treem()
{
	Nguoi();
	TenTruong = "xx";
}
int Treem::getchieucao()
{
	return Nguoi::getchieucao();
}
int Treem::getsodv()
{
	return Nguoi::getsodv();
}
string Treem::getTenTruong()
{
	return TenTruong;
}
Treem::Treem(string newhoten, int newtuoi, int newchieucao, string newCMND, int newsodv, string newTenTruong):Nguoi(newhoten, newtuoi, newchieucao, newCMND, newsodv)
{
	TenTruong = newTenTruong;
}
void Treem::Nhap()
{
	Nguoi::Nhap();
	cout << "TenTruong: ";
	cin.ignore();
	getline(cin, TenTruong);
}
void Treem::Xuat()
{
	Nguoi::Xuat();
	cout << "TenTruong: " << TenTruong << endl;
}