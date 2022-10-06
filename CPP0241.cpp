#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int merge = 0;
        int left = 0, right = n - 1;
        while (right >= left)
        {
            if (a[left] == a[right])
            {
                left++;
                right--;
            }
            else if (a[left] > a[right])
            {
                merge++;
                a[right - 1] += a[right];
                right--;
            }
            else
            {
                merge++;
                a[left + 1] += a[left];
                left++;
            }
        }
        cout << merge << endl;
    }
}
