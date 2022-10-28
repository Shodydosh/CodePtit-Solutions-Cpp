#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    map<int, int> mp;
    vector<int> v1;
    int n;
    while (cin >> n)
    {
        if (mp[n] == 0)
            v1.push_back(n);
        mp[n]++;
    }

    for (auto x : v1)
    {
        if (mp[x] != 0)
            cout << x << ' ' << mp[x] << endl;
    }
}
