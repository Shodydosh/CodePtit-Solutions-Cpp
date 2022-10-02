#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v1(n);
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        ans.push_back(v1[0] * v1[1]);
        for (int i = 0; i < n - 2; i++)
        {
            ans.push_back(v1[i] * v1[i + 2]);
        }
        ans.push_back(v1[n - 1] * v1[n - 2]);

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << ' ';
        }

        cout << endl;
    }
}
