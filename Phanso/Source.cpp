#include "Phanso.h"
int main()
{
    PhanSo Tong, Hieu, Tich, Thuong, PhanSo1, PhanSo2;
    PhanSo1.Nhap();
    PhanSo2.Nhap();
    Tong = PhanSo1.Cong(PhanSo2);
    Hieu = PhanSo1.Tru(PhanSo2);
    Tich = PhanSo1.Nhan(PhanSo2);
    Thuong = PhanSo1.Chia(PhanSo2);
    cout << "Tong: "; Tong.Xuat();
    cout << "Hieu: "; Hieu.Xuat();
    cout << "Tich: "; Tich.Xuat();
    cout << "Thuong: "; Thuong.Xuat();  
}