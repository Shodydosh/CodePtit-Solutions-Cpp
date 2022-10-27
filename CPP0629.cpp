#include <bits/stdc++.h>

using namespace std;

class Company
{
private:
    string a, b;
    int c;

public:
    Company()
    {
        a = b = "";
        c = 0;
    }
    int check(int x, int y)
    {
        if (this->c >= x && this->c <= y)
            return 1;
        return 0;
    }
    string getCompanyCode()
    {
        return this->a;
    }
    int getNum()
    {
        return this->c;
    }
    friend istream &operator>>(istream &, Company &);
    friend ostream &operator<<(ostream &, Company);
};

istream &operator>>(istream &in, Company &com)
{
    cin.ignore();
    getline(in, com.a);
    getline(in, com.b);
    cin >> com.c;
    return in;
}

ostream &operator<<(ostream &out, Company com)
{
    cout << com.a << ' ' << com.b << ' ' << com.c << endl;
    return out;
}

bool cmp(Company x, Company y)
{
    if (x.getNum() != y.getNum())
        return x.getNum() > y.getNum();
    return x.getCompanyCode() < y.getCompanyCode();
}

void sortCom(Company *com, int n)
{
    sort(com, com + n, cmp);
}

int main()
{
    int n;
    cin >> n;
    // cin.ignore();)
    Company com[n];

    for (int i = 0; i < n; i++)
    {
        cin >> com[i];
    }

    int m;
    cin >> m;
    int x, y;

    sortCom(com, n);
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << x << " DEN " << y << " SINH VIEN:" << endl;
        for (int j = 0; j < n; j++)
        {
            if (com[j].check(x, y))
                cout << com[j];
        }
    }
    return 0;
}
