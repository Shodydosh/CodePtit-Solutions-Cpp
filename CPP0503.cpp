#include <bits/stdc++.h>
using namespace std;

struct PhanSo
{
    long long tuSo, mauSo;
};

long long gcd_recursive(long long a, long long b)
{
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}

void nhap(PhanSo &p)
{
    cin >> p.tuSo >> p.mauSo;
}

void rutgon(PhanSo &p)
{
    long long tmp = gcd_recursive(p.tuSo, p.mauSo);
    p.tuSo /= tmp;
    p.mauSo /= tmp;
}

void in(PhanSo p)
{
    cout << p.tuSo << '/' << p.mauSo << endl;
}

int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}
