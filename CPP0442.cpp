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
        int n, k;
        cin >> n >> k;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());

        vector<int>::iterator p1;

        p1 = lower_bound(v1.begin(), v1.end(), k);
        int index = p1 - v1.begin();
        cout << ((v1[index] == k) ? 1 : -1) << endl;
    }
}
