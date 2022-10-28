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
    set<string> set2;

    ifstream file;
    file.open("DATA1.in");
    string a;
    while (file >> a)
    {
        handleLower(a);
        set1.insert(a);
    }
    file.close();

    file.open("DATA2.in");
    while (file >> a)
    {
        handleLower(a);
        set2.insert(a);
    }

    set<string> setBoth;
    set<string> setOr;

    for (auto x : set1)
    {
        setBoth.insert(x);
    }

    int tmp;
    for (auto x : set1)
    {
        setBoth.insert(x);
    }
    for (auto x : set2)
    {
        tmp = setBoth.size();
        setBoth.insert(x);
        if (setBoth.size() == tmp)
            setOr.insert(x);
    }

    for (auto x : setBoth)
        cout << x << ' ';
    cout << endl;
    for (auto x : setOr)
        cout << x << ' ';
}
