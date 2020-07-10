#pragma once
#include <iostream>
using namespace std;
class matrix;
class vector
{
private:
	int vt[100];
	int n;
public:
	vector();
	vector(vector &b);
	~vector()
	{}
	int getvti(int i);
	int getsophantu();
	void setsophantu(int n);
	void setvti(int i, int gt);
	void Nhap();
	void Xuat();
	void Tong(matrix &A);
	friend class matrix;
	friend void Cong1(vector A, matrix B);
	friend void Nhan1(vector A, matrix B);
};

