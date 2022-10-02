#include <bits/stdc++.h>

using namespace std;

struct MatHang
{
    int index;
    string name, group;
    double buyPrice, sellPrice, profit;
};

void inputSingle(MatHang &A)
{
    getline(cin, A.name);
    getline(cin, A.group);
    cin >> A.buyPrice >> A.sellPrice;
}

void input(MatHang mh[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        inputSingle(mh[i]);
        mh[i].index = i + 1;
        mh[i].profit = mh[i].sellPrice - mh[i].buyPrice;
    }
}

bool cmp(MatHang a, MatHang b)
{
    return a.profit > b.profit;
}

void reArrange(MatHang mh[], int n)
{
    sort(mh, mh + n, cmp);
}

void output(MatHang mh[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << mh[i].index << ' ';
        cout << mh[i].name << ' ';
        cout << mh[i].group << ' ';
        cout << fixed << setprecision(2) << mh[i].profit << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    MatHang mh[n];
    input(mh, n);
    reArrange(mh, n);
    output(mh, n);
}
