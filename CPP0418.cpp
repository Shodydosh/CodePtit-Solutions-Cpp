#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        vector<int> v1(m);
        vector<int> v2(n);
        vector<int> ans1;
        vector<int> ans2;
        set<int> m1;

        for (int i = 0; i < m; i++)
        {
            int tmp = m1.size();
            cin >> v1[i];
            m1.insert(v1[i]);
            if (tmp != m1.size())
                ans1.push_back(v1[i]);
            else
                ans2.push_back(v1[i]);
        }
        for (int i = 0; i < n; i++)
        {
            int tmp = m1.size();
            cin >> v2[i];
            m1.insert(v2[i]);
            if (tmp != m1.size())
                ans1.push_back(v2[i]);
            else
                ans2.push_back(v2[i]);
        }

        sort(ans1.begin(), ans1.end());
        for (int i = 0; i < ans1.size(); i++)
            cout << ans1[i] << ' ';
        cout << endl;
        sort(ans2.begin(), ans2.end());
        for (int i = 0; i < ans2.size(); i++)
            if (i == 0 || ans2[i] != ans2[i - 1])
                cout << ans2[i] << ' ';
        cout << endl;
    }
}
