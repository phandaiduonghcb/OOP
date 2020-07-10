#include "Phanso.h"
int gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    return a;
}


PhanSo::PhanSo()
{
    iMauSo = 1;
    iTuSo = 0;
}

void PhanSo::RutGon()
{
    int Ucln = gcd(iTuSo, iMauSo);
    iTuSo = iTuSo / Ucln;
    iMauSo = iMauSo / Ucln;
}
void PhanSo::Nhap()
{
    cin >> iTuSo >> iMauSo;
    while (iMauSo == 0)
    {
        cout << "Nhap lai mau so: ";
        cin >> iMauSo;
    }
}
void PhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo << endl;
}
PhanSo PhanSo::Cong(PhanSo PhanSo2)
{
    PhanSo KetQua;
    KetQua.iTuSo = iTuSo * PhanSo2.iMauSo + iMauSo * PhanSo2.iTuSo;
    KetQua.iMauSo = iMauSo * PhanSo2.iMauSo;
    KetQua.RutGon();
    if (KetQua.iMauSo < 0)
    {
        KetQua.iTuSo = -(KetQua.iTuSo);
        KetQua.iMauSo = -KetQua.iMauSo;
    }
    return KetQua;
}
PhanSo PhanSo::Tru(PhanSo PhanSo2)
{
    PhanSo KetQua;
    KetQua.iTuSo = iTuSo * PhanSo2.iMauSo - iMauSo * PhanSo2.iTuSo;
    KetQua.iMauSo = iMauSo * PhanSo2.iMauSo;
    KetQua.RutGon();
    if (KetQua.iMauSo < 0)
    {
        KetQua.iTuSo = -(KetQua.iTuSo);
        KetQua.iMauSo = -KetQua.iMauSo;
    }
    return KetQua;
}
PhanSo PhanSo::Nhan(PhanSo PhanSo2)
{
    PhanSo KetQua;
    KetQua.iTuSo = iTuSo * PhanSo2.iTuSo;
    KetQua.iMauSo = iMauSo * PhanSo2.iMauSo;
    KetQua.RutGon();
    if (KetQua.iMauSo < 0)
    {
        KetQua.iTuSo = -(KetQua.iTuSo);
        KetQua.iMauSo = -KetQua.iMauSo;
    }
    return KetQua;
}
PhanSo PhanSo::Chia(PhanSo PhanSo2)
{
    PhanSo KetQua;
    KetQua.iTuSo = iTuSo * PhanSo2.iMauSo;
    KetQua.iMauSo = iMauSo * PhanSo2.iTuSo;
    KetQua.RutGon();
    if (KetQua.iMauSo < 0)
    {
        KetQua.iTuSo = -(KetQua.iTuSo);
        KetQua.iMauSo = -KetQua.iMauSo;
    }
    return KetQua;
}