#include <iostream>
using namespace std;
class DuongLich
{
private:
	int ngay;
	int thang;
	int nam;
public:
	void Nhap();
	void Xuat(int B[13],int C[13]);
};
void DuongLich::Nhap()
{
	cin >> ngay >> thang >> nam;
}
void DuongLich::Xuat(int B[13],int C[13])
{
	int i = thang;
	DuongLich NgayKe;
	if (nam <= 0)
		cout << "ERROR";
	else if (thang > 12 || thang < 0)
		cout << "ERROR";
	else if (ngay < 0 || ngay>31)
		cout << "ERROR";
	else if (ngay == 31 && (thang == 2 || thang == 4 || thang == 6 || thang == 9 || thang == 11))
		cout << "ERROR";
	else if (ngay >= 29 && thang == 2 && nam % 4 != 0)
		cout << "ERROR";
	else
	{
		if (nam % 4 != 0)
		{
			if (B[i] != ngay)
			{
				NgayKe.ngay = ngay + 1;
				NgayKe.thang = thang;
				NgayKe.nam = nam;
			}
			else
			{
				if (thang != 12)
				{
					NgayKe.ngay = 1;
					NgayKe.thang = thang + 1;
					NgayKe.nam = nam;
				}
				else
				{
					NgayKe.ngay = 1;
					NgayKe.thang = 1;
					NgayKe.nam = nam + 1;
				}
			}
		}
		else
		{
			if (C[i] != ngay)
			{
				NgayKe.ngay = ngay + 1;
				NgayKe.thang = thang;
				NgayKe.nam = nam;
			}
			else
			{
				if (thang != 12)
				{
					NgayKe.ngay = 1;
					NgayKe.thang = thang + 1;
					NgayKe.nam = nam;
				}
				else
				{
					NgayKe.ngay = 1;
					NgayKe.thang = 1;
					NgayKe.nam = nam + 1;
				}
			}
		}
		cout << NgayKe.ngay << "/" << NgayKe.thang << "/" << NgayKe.nam;
	}
}
int main()
{
	int B[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int C[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
	DuongLich Ngay;
	Ngay.Nhap();
	Ngay.Xuat(B,C);

}