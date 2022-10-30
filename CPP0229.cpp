#include <bits/stdc++.h>
#include <fstream>
using namespace std;
int m, n;
int M[105][105];

void input(int M[][105])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> M[i][j];
        }
    }
}

void restruct(int M[][105], vector<vector<int>> ans)
{
    for (int k = 0; k <= m + n - 2; k++)
    {
        vector<int> tmp;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i + j == k)
                    tmp.push_back(M[i][j]);
            }
        }
        ans.push_back(tmp);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        if (i % 2)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << ' ';
            }
        }
        else
        {
            for (int j = ans[i].size() - 1; j >= 0; j--)
            {
                cout << ans[i][j] << ' ';
            }
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<vector<int>> ans;
        cin >> m >> n;
        input(M);
        restruct(M, ans);
    }
}
