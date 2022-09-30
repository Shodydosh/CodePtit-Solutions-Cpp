#include <bits/stdc++.h>

using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> v1(m);
        for (int i = 0; i < m; i++)
        {
            cin >> v1[i];
        }

        sort(v1.begin(), v1.end());

        if (m % 2 != 0)
        {

            for (int i = 0; i < m / 2; i++)
            {
                cout << v1[i] << ' ' << v1[i + 1 + m / 2] << ' ';
            }
            cout << v1[m / 2] << endl;
        }
        else
        {

            for (int i = 0; i < m / 2; i++)
            {
                cout << v1[i] << ' ' << v1[i + m / 2] << ' ';
            }
            cout << endl;
        }
    }
}
