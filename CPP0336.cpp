#include <bits/stdc++.h>

using namespace std;
string a, b;

int check(int i, int j)
{
    string tmp = "";
    for (int k = i; k <= j; k++)
    {
        tmp += a[k];
    }
    sort(tmp.begin(), tmp.end());

    int p1 = 0, p2 = 0, cnt = 0;
    while (p1 < tmp.size() && p2 < b.size())
    {
        if (tmp[p1] == b[p2])
        {
            p1++;
            p2++;
            cnt++;
        }
        else if (tmp[p1] < b[p2])
        {
            p1++;
        }
        else
            p2++;
    }

    if (cnt == b.size())
        return 1;
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        sort(b.begin(), b.end());

        int r = 1000, l = 0;
        int chk = 0;

        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i; j < a.size(); j++)
            {
                if (check(i, j))
                {
                    if (j - i < r - l)
                    {
                        r = j;
                        l = i;
                        chk = 1;
                    }
                    break;
                }
            }
        }

        if (chk)
        {
            for (int i = l; i <= r; i++)
            {
                cout << a[i];
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
}
