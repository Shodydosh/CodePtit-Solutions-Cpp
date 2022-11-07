#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> ans;

void Try(int i)
{
    if (ans.size() == k)
    {
        for (auto x : ans)
            cout << x;
        cout << ' ';
        return;
    }

    for (int j = i; j <= n; j++)
    {
        ans.push_back(j);
        Try(j + 1);
        ans.pop_back();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
}
