#include "SoPhuc.h"
SoPhuc::SoPhuc()
{
	iAo = 1;
	iThuc = 1;
}
SoPhuc::SoPhuc(float iAoMoi)
{
	iAo = iAoMoi;
	iThuc = 1;
}
SoPhuc::SoPhuc(float iThucMoi, float iAoMoi)
{
	iAo = iAoMoi;
	iThuc = iThucMoi;
}
SoPhuc::SoPhuc(SoPhuc& sp2)
{
	iThuc = sp2.iThuc;
	iAo = sp2.iAo;
	
}
void SoPhuc::setAo(float iAoMoi)
{
	iAo = iAoMoi;
}
void SoPhuc::setThuc(float iThucMoi)
{
	iThuc = iThucMoi;
}
void SoPhuc::Nhap()
{
	cin >> iThuc;
	cin >> iAo;
}
void SoPhuc::Xuat()
{
	if (iThuc == 0)
	{
		if (iAo == 0)
			cout << "";
		else
		{
			cout << iAo << "i";
		}
	}
	else
	{
		if (iAo == 0)
			cout << iThuc;
		else
		{
			if (iAo > 0)
				cout << iThuc << " + " << iAo << "i";
			else if (iAo < 0)
			{
				cout << iThuc << " - " << abs(iAo) << "i";
			}
		}
	}
}
bool SoPhuc::Kiemtra()
{
	if (sqrt(iThuc * iThuc + iAo * iAo) == 0)
		return true;
	else
	{
		return false;
	}
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
SoPhuc SoPhuc::operator*(SoPhuc b)
{
	SoPhuc kq;
	kq.iThuc = iThuc * b.iThuc - iAo * b.iAo;
	kq.iAo = iThuc * b.iAo + iAo * b.iThuc;
	return kq;
}
SoPhuc SoPhuc::operator/(SoPhuc b)
{
	SoPhuc kq;
	kq.iThuc = (iThuc * b.iThuc + iAo * b.iAo) / (b.iThuc * b.iThuc + b.iAo * b.iAo);
	kq.iAo = (b.iThuc * iAo - iThuc * b.iAo) / (b.iThuc * b.iThuc + b.iAo * b.iAo);
	return kq;
}
SoPhuc operator+(SoPhuc a, float b)
{
	SoPhuc kq;
	kq.iThuc = b + a.iThuc;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc operator+(float b, SoPhuc a)
{
	SoPhuc kq;
	kq.iThuc = b + a.iThuc;
	kq.iAo = a.iAo;
	return kq;
}
SoPhuc operator*(SoPhuc a, float b)
{
	SoPhuc kq;
	kq.iThuc = b * a.iThuc;
	kq.iAo = b * a.iAo;
	return kq;
}
SoPhuc operator*(float b, SoPhuc a)
{
	SoPhuc kq;
	kq.iThuc = b*a.iThuc;
	kq.iAo = b*a.iAo;
	return kq;
}
SoPhuc TinhToan(SoPhuc a, SoPhuc b)
{

	SoPhuc kq1, kq2, kq21, kq3, kq31, kq4, kq5, kq;
	kq1 = (a + b);
	kq2 = 2 * a;
	kq21 = b - kq2;
	kq3 = 4 * b;
	kq31 = a - kq3;
	kq4 = kq1 * kq21;
	kq = kq4 / kq31;
	return kq;
}
