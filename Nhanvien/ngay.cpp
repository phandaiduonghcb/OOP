#include "ngay.h"
#include <iostream>
using namespace std;
ngay::ngay()
{
}
ngay::~ngay()
{}

ngay::ngay(int a, int b, int c)
{
	day = a;
	month = b;
	year = c;
}
void ngay::input()
{
	cout << "nhap vao ngay_thang_nam sinh: ";
	cin >> day;
	cin >> month;
	cin >> year;
}
void ngay::output()
{
	cout << day << "/" << month << "/" << year;
}