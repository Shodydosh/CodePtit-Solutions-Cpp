#include <bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string maSV, name, lop;
    double m1, m2, m3;
};

bool cmp(SinhVien a, SinhVien b)
{
    string tmp1 = a.name;
    string tmp2 = b.name;

    while (tmp1.length() < tmp2.length())
        tmp1 += '0';
    while (tmp2.length() < tmp1.length())
        tmp2 += '0';
    int maxlen = max(tmp1.length(), tmp2.length());
    for (int i = 0; i < maxlen; i++)
    {
        if (tmp1[i] != tmp2[i])
            return tmp1[i] < tmp2[i];
    }
    return 1;
}

void nhap(SinhVien &a)
{
    cin.ignore();
    getline(cin, a.maSV);
    getline(cin, a.name);
    getline(cin, a.lop);
    cin >> a.m1 >> a.m2 >> a.m3;
}

void sap_xep(SinhVien a[], int n)
{
    sort(a, a + n, cmp);
}

void in_ds(SinhVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ' ';
        cout << a[i].maSV << ' ';
        cout << a[i].name << ' ';
        cout << a[i].lop << ' ';
        cout << fixed << setprecision(1) << a[i].m1 << ' ';
        cout << fixed << setprecision(1) << a[i].m2 << ' ';
        cout << fixed << setprecision(1) << a[i].m3 << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for (int i = 0; i < n; i++)
    {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds, n);
    return 0;
}
