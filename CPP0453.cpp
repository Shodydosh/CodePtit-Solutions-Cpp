#include <bits/stdc++.h>

using namespace std;

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> v1(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        sort(v1.begin(), v1.end());

        cout << v1[k - 1] << endl;
    }
}
