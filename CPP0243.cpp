#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

long long calculate(string a, long long b)
{
    long long tmp = 0;
    for (int i = 0; i < a.length(); i++)
    {
        tmp = (tmp * 10 + a[i] - '0') % b;
    }
    return tmp;
}

long long calculate(long long a, long long b, long long m)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % m;

    long long t = calculate(a, b / 2, m);
    t = (t * t) % m;

    if (b % 2 == 0)
        return t;
    else
        return (t * (a % m)) % m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        long long m, n;
        cin >> m >> n;
        vector<int> v1(m), v2(n);
        vector<int> mark(m, 0);

        for (int i = 0; i < m; i++)
            cin >> v1[i];
        for (int i = 0; i < n; i++)
            cin >> v2[i];

        vector<long long> ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v1[j] == v2[i] && mark[j] == 0)
                {
                    mark[j] = 1;
                    ans.push_back(v1[j]);
                }
            }
        }

        vector<int> temp;
        for (int i = 0; i < m; i++)
            if (mark[i] == 0)
                temp.push_back(v1[i]);
        sort(temp.begin(), temp.end());

        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << ' ';
        for (int i = 0; i < temp.size(); i++)
            cout << temp[i] << ' ';
        cout << endl;
    }
    return 0;
}
