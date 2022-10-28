#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    set<int> set1;
    set<int> set2;
    int m[1005];
    ifstream file;
    int x;
    int coun = 0;
    file.open("DATA.in");
    while (file >> x)
    {
        m[coun++] = x;
    }

    for (int i = 2; i < 2 + m[0]; i++)
        set1.insert(m[i]);
    for (int i = 2 + m[0]; i < coun; i++)
    {
        set2.insert(m[i]);
    }

    for (auto x : set1)
    {
        if (set2.count(x) != 0)
            cout << x << ' ';
    }
}
