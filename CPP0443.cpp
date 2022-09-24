#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> mark(n + 1, 0);
        for (int i = 0; i < n - 1; i++)
        {
            int tmp;
            cin >> tmp;
            // cout << tmp << ' ';
            mark[tmp] = 1;
        }

        for (int j = 1; j <= n; j++)
        {
            if (mark[j] == 0)
            {
                cout << j << endl;
            }
        }
    }
}
