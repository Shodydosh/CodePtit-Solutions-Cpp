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

    // void rutgon()
    // {
    //     long long int t = __gcd(tu, mau);
    //     tu = tu / t;
    //     mau = mau / t;
    // }

    friend istream &operator>>(istream &in, PhanSo &p)
    {
        in >> p.tu >> p.mau;
        return in;
    }
    friend PhanSo operator+(PhanSo p, PhanSo q)
    {
        PhanSo a(1, 1);
        a.tu = p.tu * q.mau + q.tu * p.mau;
        a.mau = p.mau * q.mau;
        long long x = __gcd(a.tu, a.mau);
        a.tu /= x;
        a.mau /= x;
        return a;
    }
    friend ostream &operator<<(ostream &out, PhanSo p)
    {
        out << p.tu << '/' << p.mau;
        return out;
    }
};

int main()
{
    PhanSo p(1, 1), q(1, 1);
    cin >> p >> q;
    cout << p + q;
    return 0;
}
