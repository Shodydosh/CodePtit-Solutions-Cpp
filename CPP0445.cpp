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
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int l = s.size();
        if (l < 2)
            cout << "-1" << endl;
        else
        {
            cout << *next(s.begin(), 0) << " " << *next(s.begin(), 1) << endl;
        }
    }
}
