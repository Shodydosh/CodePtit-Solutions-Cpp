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
    sortCom(com, n);
    for (int i = 0; i < n; i++)
    {
        cout << com[i];
    }
    return 0;
}
