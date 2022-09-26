#include <bits/stdc++.h>
using namespace std;

struct NhanVien
{
    string mnv, name, gender, address, dob, phoneNum, date;
};

NhanVien ds[500];

string numToString(int a)
{
    string s = "";
    while (a > 0)
    {
        char tmp = a % 10 + '0';
        s = tmp + s;
        a /= 10;
    }

    while (s.size() < 5)
        s = '0' + s;
    return s;
}

void nhap(NhanVien &a)
{
    cin.ignore();
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
void inds(NhanVien ds[], long long N)
{
    // cout << "check" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << numToString(i + 1) << ' ';
        cout << ds[i].name << ' ';
        cout << ds[i].gender << ' ';
        cout << ds[i].dob << ' ';
        cout << ds[i].address << ' ';
        cout << ds[i].phoneNum << ' ';
        cout << ds[i].date << ' ';
        cout << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
