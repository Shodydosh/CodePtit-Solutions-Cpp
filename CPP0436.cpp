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
        vector<int> v1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v1.push_back(a[i]);
        }
        sort(v1.begin(), v1.end());

        vector<int> ans;
        vector<int>::iterator p1;

        for (int i = 0; i < n; i++)
        {
            p1 = upper_bound(v1.begin(), v1.end(), a[i]);
            int ind = p1 - v1.begin();
            if (ind != n)
                cout << v1[ind] << ' ';
            else
                cout << "_ ";
        }
        cout << endl;
    }
}
