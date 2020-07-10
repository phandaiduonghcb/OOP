#pragma once
#include <iostream>
using namespace std;
class vector;
class matrix
{
public:
	matrix();
	~matrix()
	{
	}
	matrix(matrix& b);
	int getsohang();
	int getsocot();
	void setsohang(int n);
	void setsocot(int n);
	int getij(int i, int j);
	void setij(int i, int j, int gt);
	void Nhap();
	void Xuat();
	void Nhan(vector A);
	friend class vector;
	friend void Cong1(vector A, matrix B);
	friend void Nhan1(vector A, matrix B);
private:
	int mt[100][100];
	int hang;
	int cot;
};