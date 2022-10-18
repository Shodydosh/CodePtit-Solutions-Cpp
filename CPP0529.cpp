#include <bits/stdc++.h>

using namespace std;

struct sinhVien
{
    int stt;
    string maSV, name, maLop, email, cty;
};

bool cmp(sinhVien a, sinhVien b)
{
    return a.maSV < b.maSV;
}

int main()
{
    int n;
    cin >> n;
    sinhVien sv[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, sv[i].maSV);
        getline(cin, sv[i].name);
        getline(cin, sv[i].maLop);
        cin >> sv[i].email;
        cin >> sv[i].cty;
        sv[i].stt = i + 1;
    }
    int m;
    cin >> m;

    string company[m];
    for (int i = 0; i < m; i++)
    {
        cin >> company[i];
    }

    sort(sv, sv + n, cmp);

    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            string a = company[j];
            if (sv[i].cty == a)
            {
                cout << sv[i].stt << ' ';
                cout << sv[i].maSV << ' ';
                cout << sv[i].name << ' ';
                cout << sv[i].maLop << ' ';
                cout << sv[i].email << ' ';
                cout << sv[i].cty << endl;
            }
        }
    }
}
