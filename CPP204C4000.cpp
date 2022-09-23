#include <bits/stdc++.h>
using namespace std;
struct SinhVien
{
    string msv = "N20DCCN001", hoten, lop, ngaysinh;
    float diem;
};
void nhapThongTinSV(SinhVien &a)
{
    getline(cin, a.hoten);
    cin >> a.lop;
    cin >> a.ngaysinh;
    cin >> a.diem;
    if (a.ngaysinh[1] == '/')
    {
        a.ngaysinh = '0' + a.ngaysinh;
    }
    if (a.ngaysinh[4] == '/')
    {
        a.ngaysinh.insert(3, "0");
    }
}
void inThongTinSV(SinhVien a) { cout << a.msv << "\t" << a.hoten << "\t" << a.lop << "\t" << a.ngaysinh << "\t" << fixed << setprecision(2) << a.diem; }
int main()
{
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
