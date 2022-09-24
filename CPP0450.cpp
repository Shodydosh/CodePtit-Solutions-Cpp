#include <bits/stdc++.h>
using namespace std;

int vitridau(int a[], int n)
{
    int res = -1;
    for (int j = 1; j < n; j++)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            if (a[j] == a[i])
                return a[j];
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
        {
            cin >> x;
        }
        cout << vitridau(a, n) << endl;
    }
}
