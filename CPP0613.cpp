#include <bits/stdc++.h>

using namespace std;
int coun = 0;

class SinhVien
{
private:
    string stt, name, classCode, dob;

public:
    double gpa;
    SinhVien()
    {
        name = classCode = dob = stt = "";
        gpa = 0;
    }
    friend istream &operator>>(istream &, SinhVien &);
    friend ostream &operator<<(ostream &, SinhVien);
};

istream &operator>>(istream &in, SinhVien &sv)
{
    coun++;
    sv.stt = "B20DCCN" + string(3 - to_string(coun).length(), '0') + to_string(coun);
    scanf("\n");
    getline(in, sv.name);
    in >> sv.classCode >> sv.dob >> sv.gpa;

    // restruct NAME
    string tmp = "";
    string s = sv.name;
    sv.name = "";
    stringstream ss(s);
    while (ss >> tmp)
    {
        if (tmp[0] <= 'z' && tmp[0] >= 'a')
        {
            tmp[0] -= 32;
        }

        for (int i = 1; i < tmp.size(); i++)
        {
            if (tmp[i] <= 'Z' && tmp[i] >= 'A')
            {
                tmp[i] += 32;
            }
        }

        sv.name += tmp;
        sv.name += " ";
    }

    sv.name.pop_back();

    // restruct DOB
    if (sv.dob[1] == '/')
        sv.dob.insert(0, "0");
    if (sv.dob[4] == '/')
        sv.dob.insert(3, "0");

    return in;
}
ostream &operator<<(ostream &out, SinhVien sv)
{
    out << sv.stt << ' ' << sv.name << ' ';
    out << sv.classCode << ' ' << sv.dob << ' ';
    out << fixed << setprecision(2) << sv.gpa << endl;
    return out;
}

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

void sapxep(SinhVien *sv, int N)
{
    sort(sv, sv + N, cmp);
}

int main()
{
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for (i = 0; i < N; i++)
    {
        cout << ds[i];
    }
    return 0;
}
