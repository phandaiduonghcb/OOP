#include <iostream>
#include <string>
using namespace std;
class HocSinh
{
private:
	string Hoten;
	float Toan;
	float Van;
	float DiemTB;
public:
	void Nhap();
	void Xuat();
};
void HocSinh::Nhap()
{
	getline(cin, Hoten);
	cin >> Toan;
	while (Toan < 0 || Toan>10)
	{
		cin >> Toan;
	}
	cin>> Van;
	while (Van < 0 || Van>10)
		cin >> Van;
}
void HocSinh::Xuat()
{
	cout << "Thong tin hoc sinh:" << endl;
	cout << "Ho ten: " << Hoten << endl;
	cout << "Diem toan: " << Toan << endl;
	cout << "Diem van: " << Van << endl;
	cout << "Diem trung binh: " << (Toan + Van) / 2;
}
int main()
{
	HocSinh b;
	b.Nhap();
	b.Xuat();
	return 0;
}
