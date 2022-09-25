#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string mnv = "00001", name, gender, address, dob, phoneNum, date;
};
void nhap(NhanVien &a)
{
    getline(cin, a.name);
    cin >> a.gender;
    cin >> a.dob;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.phoneNum;
    cin >> a.date;

    if (a.dob[1] == '/')
    {
        a.dob = '0' + a.dob;
    }
    if (a.dob[4] == '/')
    {
        a.dob.insert(3, "0");
    }
    if (a.date[1] == '/')
    {
        a.date = '0' + a.date;
    }
    if (a.date[4] == '/')
    {
        a.date.insert(3, "0");
    }
}
void in(NhanVien a)
{
    cout << a.mnv << ' ';
    cout << a.name << ' ';
    cout << a.gender << ' ';
    cout << a.dob << ' ';
    cout << a.address << ' ';
    cout << a.phoneNum << ' ';
    cout << a.date << ' ';
}

int main()
{
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
