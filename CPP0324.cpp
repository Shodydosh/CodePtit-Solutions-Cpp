#include <bits/stdc++.h>
using namespace std;

long long cal(string a, long long b, long long m)
{
    long long tmp = 0;
    for (int i = 0; i < a.size(); i++)
    {
        tmp = tmp * 10 + a[i] - '0';
        tmp = tmp % m;
    }

    int temp = 1;
    while (b - 1)
    {
        if (b % 2 == 1)
            temp = (temp * tmp) % m;
        tmp = (tmp * tmp) % m;
        b /= 2;
    }

    return (temp * tmp) % m;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string a;
    long long b, m;
    while (t--)
    {
        cin >> a >> b >> m;
        // cout << a << b << m;
        cout << cal(a, b, m) << endl;
    }
}
