#include <bits/stdc++.h>
using namespace std;

struct Str
{
    string s;
    int len;
};

bool cmp(Str a, Str b)
{
    if (a.len != b.len)
        return a.len < b.len;
    return a.s < b.s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Str S[n];
    for (int i = 0; i < n; i++)
    {
        cin >> S[i].s;
        S[i].len = S[i].s.length();
    }

    int coun = 0;
    sort(S, S + n, cmp);

    // for (int i = 0; i < n; i++)
    // {
    //     cout << S[i].s << ' ';
    // }
    // cout << endl;

    for (int i = n - 1; i > 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (S[i].s == S[j].s)
                coun += 2;
            else if (S[i].s.find(S[j].s) != -1)
                coun++;
        }
    }

    cout << coun << endl;
}
