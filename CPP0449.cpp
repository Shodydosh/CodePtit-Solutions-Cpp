#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int v1[n];

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        sort(v1, v1 + n);

        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (binary_search(v1, v1 + n, v1[i] + k))
            {
                check = 1;
                break;
            }
        }
        if (check)
            cout << 1 << endl;
        else
            cout << -1 << endl;
    }
}
