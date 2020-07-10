#pragma once
#include "nhanviensx.h"
#include "nhanvienvp.h"

class danhsach
{
private:
	int m;
	int n;
	nhanviensx* a;
	nhanvienvp* b;
public:
	void nhapsx();
	void xuatsx();
	void nhapvp();
	void xuatvp();
};

