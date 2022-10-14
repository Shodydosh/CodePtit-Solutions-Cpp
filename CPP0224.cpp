#include <bits/stdc++.h>

using namespace std;

pair<int, int> path[8] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, {1, -1}, {1, 1}, {-1, 1}, {-1, -1}};
int a[505][505];
int m, n;

void DFS(int x, int y)
{
    a[x][y] = 0;
    int newX, newY;
    for (int i = 0; i < 8; i++)
    {
        newX = x + path[i].first;
        newY = y + path[i].second;
        if (newX >= 0 && newX < m && newY >= 0 && newY < n && a[newX][newY] == 1)
        {
            DFS(newX, newY);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == 1)
                {
                    ans++;
                    DFS(i, j);
                }
            }
        }
        cout << ans << endl;
    }
}
