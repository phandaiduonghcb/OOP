#include "DsPhanSo.h"
void DsPhanSo::Nhap()
{
    cin >> iTuSo >> iMauSo;
    while (iMauSo == 0)
    {
        cout << "Nhap lai mau so: ";
        cin >> iMauSo;
    }
}
void DsPhanSo::Xuat()
{
    cout << iTuSo << "/" << iMauSo << endl;
}