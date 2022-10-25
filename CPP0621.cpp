#include <bits/stdc++.h>

using namespace std;

class SinhVien
{
private:
    string masv, name, classCode, email;

public:
    string getMasv()
    {
        return this->masv;
    }
    double gpa;
    SinhVien()
    {
        name = classCode = email = masv = "";
        gpa = 0;
    }
    friend istream &operator>>(istream &, SinhVien &);
    friend ostream &operator<<(ostream &, SinhVien);
};

istream &operator>>(istream &in, SinhVien &sv)
{
    getline(cin, sv.masv);
    getline(cin, sv.name);
    getline(cin, sv.classCode);
    getline(cin, sv.email);
    return in;
}
ostream &operator<<(ostream &out, SinhVien sv)
{
    out << sv.masv << ' ' << sv.name << ' ';
    out << sv.classCode << ' ' << sv.email << endl;
    return out;
}

bool cmp(SinhVien a, SinhVien b)
{
    string x = a.getMasv();
    string y = b.getMasv();
    if (x < y)
        return true;
    return false;
}

int main()
{
    vector<SinhVien> ds;
    SinhVien tmp;
    while (cin >> tmp)
        ds.push_back(tmp);
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < ds.size(); i++)
    {
        cout << ds[i];
    }
    return 0;
}
