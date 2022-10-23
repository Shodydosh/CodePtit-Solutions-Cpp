#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long ans = 0;
        vector<long long>::iterator p1;
        for (long long i = 0; i < n - 1; i++)
        {
            p1 = upper_bound(a.begin(), a.end(), a[i] + k - 1);
            ans += p1 - a.begin() - i - 1;
        }
        cout << ans << endl;
    }
}
