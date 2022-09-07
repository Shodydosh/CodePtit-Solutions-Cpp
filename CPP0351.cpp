#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void toUppercase(char &c)
{
    if (c <= 'z' && c >= 'a')
        c -= 32;
}

void toLowercase(char &c)
{
    if (c <= 'Z' && c >= 'A')
        c += 32;
}

void restruct(string a, long long n)
{
    string ans = "";
    stringstream ss(a);
    string tmp;
    vector<string> v;
    // cout << a << ' ' << n << endl;

    while (ss >> tmp)
    {
        toUppercase(tmp[0]);
        for (int i = 1; i < tmp.size(); i++)
        {
            toLowercase(tmp[i]);
        }
        v.push_back(tmp);
    }

    if (n == 1)
    {
        cout << v[v.size() - 1] << ' ';
        for (int i = 0; i < v.size() - 1; i++)
            cout << v[i] << ' ';
        cout << endl;
    }
    else
    {
        for (int i = 1; i < v.size(); i++)
            cout << v[i] << ' ';
        cout << v[0] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        long long n;
        string a;
        cin >> n;
        cin.ignore();
        getline(cin, a);
        // cout << n << a;
        restruct(a, n);
    }
    return 0;
}
