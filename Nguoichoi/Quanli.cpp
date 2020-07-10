#include "Quanli.h"
void Quanli::Nhap()
{
	string hoten;
	int tuoi;
	string CMND;
	float chieucao;
	int sodv;
	string TenTruong;
	cout << "Nhap so nguoi choi: " << endl;
	cin >> n;
	arr = new Nguoi * [n];
	flag = new int[n];
	cout << "0 la nguoi lon, 1 la tre em:" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "***Nguoi so " << i << "***" << endl;
		cout << "Hoten: ";
		cin.ignore();
		getline(cin, hoten);
		cout << "Tuoi: ";
		cin >> tuoi;
		cout << "Chieucao (cm): ";
		cin >> chieucao;
		cout << "CMND: ";
		cin >> CMND;
		cout << "Sodichvu: ";
		cin >> sodv;
		if (tuoi < 10 && chieucao < 130)
		{
			cout << "TenTruong: ";
			cin >> TenTruong;
			flag[i] = 1;
			arr[i] = new Treem(hoten, tuoi, chieucao, CMND, sodv, TenTruong);
		}
		else
		{
			flag[i] = 0;
			arr[i] = new Nguoi(hoten, tuoi, chieucao, CMND, sodv);
		}
	}
}
void Quanli::Xuat()
{
	for (int i = 0;i < n;i++)
	{
		switch (flag[i])
		{
		case 0:
		{
			((Nguoi*)arr[i])->Xuat();
			cout << endl;
			break;
		}
		case 1: {
			((Treem*)arr[i])->Xuat();
			break;
		}
		default:
			break;
		}
	}
}
void Quanli::Xuatlunnhat()
{
	int vitri;
	int min = 0;
	for (int i = 0;i < n;i++)
	{
		if (flag[i] == 1)
		{
			if (min == 0)
			{
				min = ((Treem*)arr[i])->getchieucao();
				vitri = i;
			}
			else if (((Treem*)arr[i])->getchieucao() < min)
			{
				min = ((Treem*)arr[i])->getchieucao();
				vitri = i;
			}
		}
	}
	if (min == 0)
		cout << "Khong co tre em" << endl;
	else
	{
		cout << "Tre em lun nhat la: " << min <<" cm"<< endl;
		((Treem*)arr[vitri])->Xuat();
	}
}
void Quanli::Xuatnhieutien()
{
	int sum = -1;
	int vitri = -1;
	for (int i = 0;i < n;i++)
	{
		switch (flag[i])
		{
		case 0:
		{
			if (sum < ((Nguoi*)arr[i])->getsodv() * 100) {
				sum = ((Nguoi*)arr[i])->getsodv() * 100;
				vitri = i;
			}
			break;
		}
		case 1: {
			int temp;
			if (((Treem*)arr[i])->getTenTruong() == "A")
				temp = ((Treem*)arr[i])->getsodv() * 70 / 100;
			else
				temp = ((Treem*)arr[i])->getsodv() * 50 / 100;
			if (sum < temp) {
				sum = temp;
				vitri = i;
			}
			break;
		}
		default:
			break;
		}
	}
	cout << "Nguoi choi chi tieu nhieu nhat: " << sum <<"k dong"<< endl;
	if (flag[vitri] == 0)
		((Nguoi*)arr[vitri])->Xuat();
	else
	{
		((Treem*)arr[vitri])->Xuat();
	}

}