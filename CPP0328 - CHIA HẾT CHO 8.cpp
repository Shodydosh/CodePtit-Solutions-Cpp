#include <bits/stdc++.h>
using namespace std;
string s;

int checkDividers(int k)
{
    // cout << '<' << k << '>' << endl;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int tmp = 0;
        for (int j = i; j < s.length(); j++)
        {
            tmp = tmp * 10 + s[j] - '0';
            tmp = tmp % k;
            if (!tmp)
            {
                // for (int k = i; k <= j; k++)
                // {
                //     cout << s[k] << ' ';
                // }
                // cout << endl;
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        cout << checkDividers(8) - checkDividers(24) << endl;
    }
}
