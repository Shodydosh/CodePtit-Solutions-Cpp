#include <bits/stdc++.h>
using namespace std;
struct ThiSinh
{
    string hoten, ngaysinh;
    float diem1, diem2, diem3;
};
void nhap(ThiSinh &a)
{
    getline(cin, a.hoten);
    cin >> a.ngaysinh;
    cin >> a.diem1;
    cin >> a.diem2;
    cin >> a.diem3;
    if (a.ngaysinh[1] == '/')
    {
        a.ngaysinh = '0' + a.ngaysinh;
    }
    if (a.ngaysinh[4] == '/')
    {
        a.ngaysinh.insert(3, "0");
    }
}
void in(ThiSinh a)
{
    cout << " " << a.hoten << " " << a.ngaysinh << " " << fixed << setprecision(1) << a.diem1 + a.diem2 + a.diem3;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
