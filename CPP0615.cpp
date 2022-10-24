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
    int day, month, year;
    string stt;
    string name, gender, dob, address, phone, date;

public:
    int getDay()
    {
        return this->day;
    }
    int getMonth()
    {
        return this->month;
    }
    int getYear()
    {
        return this->year;
    }
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

    // get the date
    string s = nv.dob;
    nv.month = s[0] - '0';
    nv.month = nv.month * 10 + s[1] - '0';
    nv.day = s[3] - '0';
    nv.day = nv.day * 10 + s[4] - '0';
    nv.year = s[6] - '0';
    nv.year = nv.year * 10 + s[7] - '0';
    nv.year = nv.year * 10 + s[8] - '0';
    nv.year = nv.year * 10 + s[9] - '0';

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

bool cmp(NhanVien a, NhanVien b)
{
    if (a.getYear() != b.getYear())
        return a.getYear() < b.getYear();
    if (a.getMonth() != b.getMonth())
        return a.getMonth() < b.getMonth();
    return a.getDay() < b.getDay();
}

void sapxep(NhanVien *sv, int N)
{
    sort(sv, sv + N, cmp);
}

int main()
{
    NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        cin >> ds[i];
    sapxep(ds, N);
    for (i = 0; i < N; i++)
        cout << ds[i];
    return 0;
}
