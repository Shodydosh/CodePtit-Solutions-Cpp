#include <bits/stdc++.h>

using namespace std;

// Nguyen Van A
// Nam
// 10/22/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 31/12/2013
int cnt = 0;

class NhanVien
{
private:
    string stt;
    string name, gender, dob, address, phone, date;

public:
    friend istream &operator>>(istream &, NhanVien &);
    friend ostream &operator<<(ostream &, NhanVien &);
};

istream &operator>>(istream &in, NhanVien &nv)
{
    cnt++;
    nv.stt = to_string(cnt);
    while (nv.stt.length() < 5)
        nv.stt = '0' + nv.stt;
    in.ignore();
    getline(in, nv.name);
    in >> nv.gender;
    in >> nv.dob;
    in.ignore();
    getline(cin, nv.address);
    in >> nv.phone;
    in >> nv.date;
    return in;
}

ostream &operator<<(ostream &out, NhanVien &nv)
{
    out << nv.stt << ' ';
    out << nv.name << ' ';
    out << nv.gender << ' ';
    out << nv.dob << ' ';
    out << nv.address << ' ';
    out << nv.phone << ' ';
    out << nv.date << endl;
    return out;
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}
