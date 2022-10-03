#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string name, classCode, dob;
    double gpa;
};

void toUpper(char &a)
{
    if (a <= 'z' && a >= 'a')
        a -= 32;
}
void toLower(char &a)
{
    if (a <= 'Z' && a >= 'A')
        a += 32;
}

string restruct(string a)
{
    string tmp;
    stringstream ss(a);
    string ans = "";
    while (ss >> tmp)
    {
        toUpper(tmp[0]);
        for (int i = 1; i < tmp.length(); i++)
        {
            toLower(tmp[i]);
        }
        ans += tmp + ' ';
    }

    return ans;
}

void input(SinhVien &A)
{
    getline(cin, A.name);
    A.name = restruct(A.name);

    getline(cin, A.classCode);
    getline(cin, A.dob);
    if (A.dob[1] == '/')
        A.dob = '0' + A.dob;
    if (A.dob[4] == '/')
        A.dob.insert(A.dob.begin() + 3, '0');

    cin >> A.gpa;
    getchar();
}

void nhap(SinhVien ds[], int n)
{
    getchar();
    for (int i = 0; i < n; i++)
    {
        input(ds[i]);
    }
}

void in(SinhVien ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        string tmp;
        if (i + 1 < 10)
            tmp = "00";
        else
            tmp = "0";
        cout << "B20DCCN" << tmp << i + 1 << ' ';
        cout << ds[i].name << ds[i].classCode << ' ' << ds[i].dob << ' ';
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main()
{
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
