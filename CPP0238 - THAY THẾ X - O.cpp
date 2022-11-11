#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

char a[25][25];
int m, n;

using namespace std;

void visitAround(int i, int j, int visited[][25])
{
    visited[i][j] = 1;

    // IF VISIT ON BORDER
    if (i == 0 && a[i + 1][j] == 'O')
        visitAround(i + 1, j, visited);
    else if (i == m - 1 && a[i - 1][j] == 'O')
        visitAround(i - 1, j, visited);
    else if (j == 0 && a[i][j + 1] == 'O')
        visitAround(i, j + 1, visited);
    else if (j == n - 1 && a[i][j - 1] == 'O')
        visitAround(i, j - 1, visited);

    // IF VISIT INSIDE
    else
    {
        if (a[i + 1][j] == 'O' && !visited[i + 1][j])
            visitAround(i + 1, j, visited);
        if (a[i - 1][j] == 'O' && !visited[i - 1][j])
            visitAround(i - 1, j, visited);
        if (a[i][j + 1] == 'O' && !visited[i][j + 1])
            visitAround(i, j + 1, visited);
        if (a[i][j - 1] == 'O' && !visited[i][j - 1])
            visitAround(i, j - 1, visited);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t;
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        int visited[25][25] = {};

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < m; i++)
        {
            if (a[i][0] == 'X')
                visited[i][0] = 1;
            if (!visited[i][0] && a[i][0] == 'O')
            {
                visitAround(i, 0, visited);
            }
            if (a[i][n - 1] == 'X')
                visited[i][n - 1] = 1;

            if (!visited[i][n - 1] && a[i][n - 1] == 'O')
            {
                visitAround(i, n - 1, visited);
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (a[0][j] == 'X')
                visited[0][j] = 1;
            if (!visited[0][j] && a[0][j] == 'O')
            {
                visitAround(0, j, visited);
            }
            if (a[m - 1][j] == 'X')
                visited[m - 1][j] = 1;

            if (!visited[m - 1][j] && a[m - 1][j] == 'O')
            {
                visitAround(m - 1, j, visited);
            }
        }
        
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // BORDER STAYS THE SAME
                if (i == 0 || j == 0 || i == m - 1 || j == n - 1)
                {
                    cout << a[i][j] << ' ';
                    continue;
                }

                if (a[i][j] == 'O' && visited[i][j] == 0)
                    cout << 'X' << ' ';
                else
                    cout << a[i][j] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}
