#include <bits/stdc++.h>

using namespace std;

struct Num
{
    int trueVal, val, index;
};

bool cmp(Num a, Num b)
{
    if (a.val == b.val)
        return a.index < b.index;
    return (a.val < b.val);
}

main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v1(n);
        Num number[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            number[i].index = i;
            number[i].trueVal = v1[i];
            number[i].val = abs(v1[i] - k);
        }

        sort(number, number + n, cmp);

        for (int i = 0; i < n; i++)
        {
            cout << number[i].trueVal << ' ';
        }

        cout << endl;
    }
}
