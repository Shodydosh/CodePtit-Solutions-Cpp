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
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());

        for (int i = 0; i < n / 2; i++)
        {
            cout << v1[n - 1 - i] << ' ' << v1[i] << ' ';
        }

        if (n % 2 == 1)
            cout << v1[n / 2] << endl;
        else
            cout << endl;
    }
}
