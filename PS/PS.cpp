#include "PS.h"
int min(int a, int b)
{
	if (a < b)
		return  a;
	else
		return b;
}
istream& operator>>(istream &is, PS &a)
{
		is >> a.iTu >> a.iMau;
		return is;
}
ostream& operator<<(ostream& os, PS a)
{
	os << a.iTu << "/" << a.iMau;
	return os;
}
PS operator+(PS a, PS b)
{
	PS result;
	result.iTu = a.iTu * b.iMau + a.iMau * b.iTu;
	result.iMau = a.iMau * b.iMau;
	result.Rutgon();
	return result;
}
PS operator-(PS a, PS b)
{
	PS result;
	result.iTu = a.iTu * b.iMau - a.iMau * b.iTu;
	result.iMau = a.iMau * b.iMau;
	result.Rutgon();
	return result;
}
void PS::Rutgon()
{
	int Ucln;
	for (int i = 1;i <= min(abs(iMau), abs(iTu));++i)
	{
		if (iMau % i == 0 && iTu % i == 0)
		{
			Ucln = i;
		}
	}
	iTu /= Ucln;
	iMau /= Ucln;
}
