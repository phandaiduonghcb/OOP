#include "Nguoi.h"
Nguoi::Nguoi()
{
	hoten = "x";
	tuoi = 0;
	CMND = "xxx";
	chieucao = 0;
	sodv = 0;
}
Nguoi::Nguoi(string newhoten, int newtuoi, int newchieucao, string newCMND, int newsodv)
{
	hoten = newhoten;
	tuoi = newtuoi;
	chieucao = newchieucao;
	CMND = newCMND;
	sodv = newsodv;
}
int Nguoi::getchieucao()
{
	return chieucao;
}
int Nguoi::getsodv()
{
	return sodv;
}
void Nguoi::Nhap()
{
	cout << "Hoten: ";
	cin.ignore();
	getline(cin, hoten);
	cout << "Tuoi: ";
	cin >> tuoi;
	cout << "Chieucao: ";
	cin >> chieucao;
	cout << "CMND: ";
	cin >> CMND;
	cout << "Sodichvu: ";
	cin >> sodv;
}
void Nguoi::Xuat()
{
	cout << "-----------" << endl;
	cout << "Hoten: ";
	cout << hoten << endl;
	cout << "Tuoi: ";
	cout << tuoi << endl;
	cout << "Chieucao: ";
	cout << chieucao << endl;
	cout << "CMND: ";
	cout << CMND << endl;
	cout << "Sodichvu: ";
	cout << sodv << endl;
}