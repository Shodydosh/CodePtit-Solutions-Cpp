#include <bits/stdc++.h>

using namespace std;

bool cmp(long long a, long long b)
{
    return to_string(a) + to_string(b) < to_string(b) + to_string(a);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> v1(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end(), cmp);

        for (int i = n - 1; i >= 0; i--)
        {
            cout << v1[i];
        }

        cout << endl;
    }
}

// 5234
// 52344
