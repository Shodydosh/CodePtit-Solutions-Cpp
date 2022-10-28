#include <bits/stdc++.h>
#include <fstream>
using namespace std;

void handleLower(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
    }
}

int main()
{
    set<string> set1;
    ifstream file;
    file.open("VANBAN.in");
    string a;
    int check;
    while (file >> a)
    {
        handleLower(a);
        set1.insert(a);
    }
    file.close();
    for (auto x : set1)
        cout << x << endl;
}
