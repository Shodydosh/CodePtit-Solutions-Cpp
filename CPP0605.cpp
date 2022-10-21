#include <bits/stdc++.h>

using namespace std;

class PhanSo
{
public:
    long long tu, mau;

    PhanSo(long long int t = 1, long long int m = 1)
    {
        tu = t, mau = m;
    }

    void rutgon()
    {
        long long int t = __gcd(tu, mau);
        tu = tu / t;
        mau = mau / t;
    }

    friend istream &operator>>(istream &in, PhanSo &p);
    friend ostream &operator<<(ostream &out, PhanSo &p);
};

istream &operator>>(istream &in, PhanSo &p)
{
    in >> p.tu >> p.mau;
    return in;
}

ostream &operator<<(ostream &out, PhanSo &p)
{
    out << p.tu << '/' << p.mau;
    return out;
}

int main()
{
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
