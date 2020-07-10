#include <iostream>
#include <algorithm>
using namespace std;
class PhanSo
{
public:
	PhanSo();
	~PhanSo();
	void Nhap();
	void Xuat();
	void TinhPs(float &x);

private:
	int iMauSo;
	int iTuSo;

};

PhanSo::PhanSo()
{
	iMauSo = 1;
	iTuSo = 0;
}

PhanSo::~PhanSo()
{
}
void PhanSo:: Nhap()
{
	cin >> iTuSo >> iMauSo;
	while (iMauSo==0)
	{
		cin >> iMauSo;
	}
}
void PhanSo::Xuat()
{
	cout << iTuSo;
	cout << "/" << iMauSo << endl;
}
void PhanSo::TinhPs(float &x)
{
	x = float(iTuSo) / iMauSo;
}
int main()
{
	float B[100];
	int n;
	cin >> n;
	PhanSo a[100];
	for (int i=0;i<n;i++)
	{
		a[i].Nhap();
	}
	for (int i = 0; i < n; i++)
	{
		a[i].TinhPs(B[i]);
	}
	float minn = B[0];
	float maxx = B[0];
	for (int i = 1; i < n; i++)
	{
		if (minn > B[i])
			minn = B[i];
	}
	for (int i = 1; i < n; i++)
	{
		if (maxx< B[i])
			maxx = B[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (minn == B[i])
		{
			a[i].Xuat();
				break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (maxx == B[i])
		{
			a[i].Xuat();
			break;
		}
	}
	return 0;
}