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

void output(int M[][105])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << M[i][j] << ' ';
        }
        // cout << endl;
    }
    cout << endl;
}

void rotateMat(int M[][105])
{
    for (int i = 1; i <= min(m, n) / 2; i++)
    {
        int tmp = M[i - 1][i - 1];

        for (int j = i - 1; j < m - i; j++)
            M[j][i - 1] = M[j + 1][i - 1];
        for (int j = i - 1; j < n - i; j++)
            M[m - i][j] = M[m - i][j + 1];
        for (int j = m - i; j > i - 1; j--)
            M[j][n - i] = M[j - 1][n - i];
        for (int j = n - i; j > i - 1; j--)
            M[i - 1][j] = M[i - 1][j - 1];

        M[i - 1][i] = tmp;
        // cout << i << "check" << endl;
        // output(M);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        input(M);
        rotateMat(M);
        output(M);
    }
}
