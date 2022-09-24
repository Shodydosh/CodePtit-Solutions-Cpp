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

        int count = -1;
        for (int i = 0; i < n; i++)
        {
            if (v1[i] == k)
            {
                if (count == -1)
                    count = 1;
                else
                    count++;
            }
        }

        cout << count << endl;
    }
}
