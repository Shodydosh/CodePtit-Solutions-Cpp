#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[505][505];
int coun = 0;

void Try(int i, int j, int sum)
{
    if (sum > k)
        return;
    if (sum == k && i == n && j == n)
    {
        coun++;
    }
    if (j + 1 <= n)
    {
        Try(i, j + 1, sum + a[i][j + 1]);
    }
    if (i + 1 <= n)
    {
        Try(i + 1, j, sum + a[i + 1][j]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        coun = 0;

        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }

        Try(1, 1, a[1][1]);

        cout << coun << endl;
    }
}
