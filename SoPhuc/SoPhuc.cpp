#include "SoPhuc.h"
using namespace std;
SoPhuc::SoPhuc()
{
	iAo = 1;
	iThuc = 1;
}
SoPhuc::SoPhuc(int iAoMoi)
{
	iAo = iAoMoi;
	iThuc = 1;
}
SoPhuc::SoPhuc(int iThucMoi, int iAoMoi)
{
	iAo = iAoMoi;
	iThuc = iThucMoi;
}
SoPhuc::SoPhuc(const SoPhuc& sp2)
{
	iThuc = sp2.iThuc;
	iAo = sp2.iAo;
	
}
void SoPhuc::setAo(int iAoMoi)
{
	iAo = iAoMoi;
}
void SoPhuc::setThuc(int iThucMoi)
{
	iThuc = iThucMoi;
}
void SoPhuc::Nhap()
{
	cout << "Thuc: ";
	cin >> iThuc;
	cout << "Ao: ";
	cin >> iAo;
}
void SoPhuc::Xuat()
{
	if (iThuc != 0)
		cout << iThuc;
	if (iAo < 0)
		cout << iAo << ".i" << endl;
	else if (iAo > 0 && iThuc!=0)
		cout << "+" << iAo << ".i" << endl;
	else if (iAo > 0 && iThuc == 0)
		cout << iAo << ".i" << endl;
	if (iThuc == 0 && iAo == 0)
		cout << "0";
	//cout << iThuc << "+" << "(" << iAo << ")" << ".i"<<endl;
}
SoPhuc SoPhuc::operator+(SoPhuc b)
{
	SoPhuc kq;
	kq.iThuc = iThuc + b.iThuc;
	kq.iAo = iAo + b.iAo;
	return kq;
}
SoPhuc SoPhuc::operator-(SoPhuc b)
{
	SoPhuc kq;
	kq.iThuc = iThuc - b.iThuc;
	kq.iAo = iAo - b.iAo;
	return kq;
}
SoPhuc& SoPhuc::operator=(SoPhuc& a)
{
	iThuc = a.iThuc;
	iAo = a.iAo;
	return *this;
}
SoPhuc operator+(SoPhuc a, int b)
{
	SoPhuc kq;
	kq.iThuc = b + a.iThuc;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc operator+(int b, SoPhuc a)
{
	SoPhuc kq;
	kq.iThuc = b + a.iThuc;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc operator-(SoPhuc a, int b)
{
	SoPhuc kq;
	kq.iThuc =a.iThuc-b;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc operator-(int b, SoPhuc a)
{
	SoPhuc kq;
	kq.iThuc = b - a.iThuc;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc& SoPhuc::operator++()
{
	iThuc++;
	iAo++;
	return *this;
}
SoPhuc SoPhuc::operator++(int)
{
	SoPhuc temp(iThuc,iAo);
	iThuc++;
	iAo++;
	return temp;
}