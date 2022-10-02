#include <bits/stdc++.h>

using namespace std;

struct NhanVien
{
    int index, d, m, y;
    string name, gender, dob, address, number, date;
};

int z = 1;
// 22/08/2021
// 0123456789

void nhap(NhanVien &A)
{
    A.index = z++;
    if (z == 2)
        cin.ignore();
    getline(cin, A.name);
    getline(cin, A.gender);
    getline(cin, A.dob);
    getline(cin, A.address);
    getline(cin, A.number);
    getline(cin, A.date);
    string s = A.dob;
    A.m = (s[0] - '0') * 10 + s[1] - '0';
    A.d = (s[3] - '0') * 10 + s[4] - '0';
    A.y = (s[6] - '0') * 1000 + (s[7] - '0') * 100 + (s[8] - '0') * 10 + s[9] - '0';
}

bool cmp(NhanVien a, NhanVien b)
{
    if (a.y != b.y)
        return a.y < b.y;
    if (a.m != b.m)
        return a.m < b.m;
    else
        return a.d < b.d;
}

void sapxep(NhanVien a[], int n)
{
    sort(a, a + n, cmp);
}

void inds(NhanVien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string s;
        if (a[i].index < 10)
            s = "0000";
        else
            s = "000";

        cout << s << a[i].index << ' ';
        cout << a[i].name << ' ';
        cout << a[i].gender << ' ';
        cout << a[i].dob << ' ';
        cout << a[i].address << ' ';
        cout << a[i].number << ' ';
        cout << a[i].date << endl;
    }
}

int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
