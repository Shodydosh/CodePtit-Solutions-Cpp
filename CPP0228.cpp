#include <bits/stdc++.h>
using namespace std;

void output(vector<int> a)
{
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i] << ' ';
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> v1;
        vector<int> v2;
        int n = m * 4;
        int M[405][405];
        int g = 1;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                M[i][j] = g++;

        // in mt
        //  for (int i = 1; i <= n; i++)
        //  {
        //      for (int j = 1; j <= n; j++)
        //      {
        //          if (M[i][j] < 10)
        //          {
        //              cout << 0 << M[i][j] << "  ";
        //          }
        //          else
        //              cout << M[i][j] << "  ";
        //      }
        //      cout << endl;
        //  }
        //  cout << endl;

        int bottom, top, left, right;
        top = left = 1;
        bottom = n;
        right = n - 1;
        int k = 0;
        while (k != m)
        {
            for (int i = top; i <= bottom; i++)
            {
                v1.push_back(M[i][left]);
            }
            left++;
            for (int i = left; i <= right; i++)
            {
                v1.push_back(M[bottom][i]);
            }
            top++;
            left++;
            bottom--;
            for (int i = bottom; i > top; i--)
            {
                v1.push_back(M[i][right]);
            }
            for (int i = right; i >= left; i--)
            {
                v1.push_back(M[top][i]);
            }
            top++;
            bottom--;
            right -= 2;
            k++;
        }

        top = 1;
        left = 2;
        bottom = n;
        right = n;
        k = 0;
        while (k != m)
        {
            for (int i = bottom; i > top; i--)
            {
                v2.push_back(M[i][right]);
            }
            for (int i = right; i >= left; i--)
            {
                v2.push_back(M[top][i]);
            }
            bottom -= 2;
            right -= 2;

            for (int i = top + 1; i <= bottom + 1; i++)
            {
                v2.push_back(M[i][left]);
            }
            for (int i = left + 1; i <= right; i++)
            {
                v2.push_back(M[bottom + 1][i]);
            }
            left += 2;
            top += 2;
            k++;
        }

        output(v2);
        output(v1);
    }
}
