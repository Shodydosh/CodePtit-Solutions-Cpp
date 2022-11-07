#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> ans;
int check[500] = {};

void Try(int i)
{
    if (ans.size() == n)
    {
        for (auto x : ans)
            cout << x;
        cout << ' ';
        return;
    }

    for (int j = 1; j <= n; j++)
    {
        if (check[j] == 0)
        {
            check[j] = 1;
            ans.push_back(j);
            Try(j + 1);
            ans.pop_back();
            check[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Try(1);
        cout << endl;
    }
}
