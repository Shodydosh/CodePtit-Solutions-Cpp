#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second > p2.second;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        // for (int i = 0; i < n; i++)
        //     cout << a[i] << ' ';
        int val, fre;

        vector<pair<int, int>> v1;
        pair<int, int> tmp;

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                val = a[i];
                fre = 1;
            }
            else
            {
                if (a[i] == val)
                {
                    fre++;
                }
                else
                {
                    tmp.first = val;
                    tmp.second = fre;
                    // cout << tmp.first << ' ' << tmp.second << endl;
                    v1.push_back(tmp);
                    fre = 1;
                    val = a[i];
                }
            }
        }

        tmp.first = val;
        tmp.second = fre;
        v1.push_back(tmp);

        sort(v1.begin(), v1.end(), cmp);

        vector<int> ans;

        for (int i = 0; i < v1.size(); i++)
        {
            for (int j = 0; j < v1[i].second; j++)
                cout << v1[i].first << ' ';
        }
        cout << endl;
    }
}
