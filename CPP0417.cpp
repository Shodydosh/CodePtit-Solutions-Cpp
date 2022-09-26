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
        int n;
        cin >> n;
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            v2[i] = v1[i];
        }

        sort(v1.begin(), v1.end());

        int left = -1, right = -1;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] != v2[i])
            {
                left = i;
                break;
            }
        }

        for (int i = n - 1; i > 0; i--)
        {
            if (v1[i] != v2[i])
            {
                right = i;
                break;
            }
        }

        cout << left + 1 << ' ' << right + 1 << endl;
    }
}
