#include "Quanli.h"
void Quanli::Nhap()
{
	cout << "(Monphai: Thieulam,Thiengvuongbang,Ngudocgiao,Duongmon,Ngamy,Thuyyenmon,\nCaibang,Thiennhangiao,Conlon,Vodang)\n";
	cout << "(He: Kim,Moc,Thuy,Hoa,Tho)\n\n";
	cout << "Nhap so phan tu: ";
	cin >> n;
	a = new NguoichoivaQuaivat* [n];
	for (int i = 0;i < n;i++)
	{
		int choice;
		cout << "Nhan vat / Quaivat (1/2): ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			a[i] = new Nguoichoi();
			a[i]->Nhap();
			break;
		case 2:
			a[i] = new Quaivat();
			a[i]->Nhap();
			break;
		default:
			break;
		}
	}
}
void Quanli::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		cout << i << ": ";a[i]->Xuat();
	}
	cout << "\n";
}
void Quanli::Satthuongcaonhat()
{
	int max = -1;
	int* vitri = new int[n];
	int j = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i]->getSatthuong() > max)
		{
			max = a[i]->getSatthuong();
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (a[i]->getSatthuong() == max)
		{
			vitri[j] = i;
			++j;
		}
	}
	cout << "Phan tu sat thuong cao nhat:\n";
	for (int i = 0;i < j;i++)
	{
		cout << vitri[i] << ": ";a[vitri[i]]->Xuat();
	}
	cout << "\n";
}
void Quanli::ASoloB()
{
	int index_A;
	int index_B;
	cout << "Index A, B: ";cin >> index_A >> index_B;
	a[index_A]->Solo(a[index_B]);
}