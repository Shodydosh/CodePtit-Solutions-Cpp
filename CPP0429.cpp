#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, goal, broken;
    cin >> n >> goal >> broken;
    vector<int> v1(broken + 2);
    for (int i = 1; i <= broken; i++)
        cin >> v1[i];
    v1[0] = 0, v1[broken + 1] = n + 1;
    sort(v1.begin(), v1.end());
    int minVal = INT_MAX;
    for (int i = 0; i < broken + 1; i++)
    {
        int x = lower_bound(v1.begin(), v1.end(), v1[i] + goal) - v1.begin();
        if (x >= broken + 2)
            continue;
        if (v1[x] == v1[i] + goal)
            minVal = min(minVal, x - i);
        else
            minVal = min(minVal, x - i - 1);
    }

    cout << minVal << endl;
}
