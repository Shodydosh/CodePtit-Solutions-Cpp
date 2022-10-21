#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
public:
    string name, maSV, dob;
    double gpa;
    friend istream &operator>>(istream &in, SinhVien &sv);
    friend ostream &operator<<(ostream &out, SinhVien &sv);
};

istream &operator>>(istream &in, SinhVien &sv)
{
    getline(in, sv.name);
    in >> sv.maSV;
    in >> sv.dob >> sv.gpa;
    string s = sv.dob;
    if (s[1] == '/')
    {
        s = '0' + s;
    }
    if (s[4] == '/')
    {
        s.insert(3, "0");
    }
    sv.dob = s;
    return in;
}

ostream &operator<<(ostream &out, SinhVien &sv)
{
    cout << "B20DCCN001 ";
    cout << sv.name << ' ';
    cout << sv.maSV << ' ';
    cout << sv.dob << ' ';
    cout << fixed << setprecision(2) << sv.gpa;
    return out;
}

int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
