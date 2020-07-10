#pragma once
#include "Duongda.h"
class Taytrang : public Duongda
{
public:
	void set()
	{
		batbuoc = true;
		ten = "Taytrang";
		tg = 5;
		mota = "Su dung o liu tinh khiet de tay di cac lop trang diem.";
		tien = 30000;
	}
};
class Ruamat : public Duongda
{
public:
	void set()
	{
		batbuoc = true;
		ten = "Ruamat";
		tg = 10;
		mota = "Su dung cac loai sua rua mat de lam sach da mat.";
		tien = 50000;
	}
};
class Matna : public Duongda
{
public:
	void set()
	{
		batbuoc = true;
		ten = "Matna";
		tg = 30;
		mota = "Su dung loat mat na phu hop loai da ket hop nghe nhac thu gian.";
		tien = 100000;
	}
};
class Toner : public Duongda
{
public:
	void set()
	{
		batbuoc = false;
		ten = "Toner";
		tg = 10;
		mota = "Su dung toner de lam am va se nho chan long.";
		tien = 50000;
	}
};
class Essence : public Duongda
{
public:
	void set()
	{
		batbuoc = false;
		ten = "Essence/Serum";
		tg = 10;
		mota = "Su dung cac san pham serum de tang cuong duong am, chong lao hoa.";
		tien = 50000;
	}
};
class Kemduong : public Duongda
{
public:
	void set()
	{
		batbuoc = false;
		ten = "Kemduong";
		tg = 10;
		mota = "Su dung cac loai kem duong de cung cap duong chat va khi am cho da.";
		tien = 50000;
	}
};
class Chongnang : public Duongda
{
public:
	void set()
	{
		batbuoc = false;
		ten = "Chongnnang";
		tg = 30;
		mota = "Su dung kem chong nang de bao ve lan da truoc anh nang mat troi.";
		tien = 50000;
	}
};

