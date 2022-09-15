#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int toNum(char a)
{
    if ('A' <= a && a <= 'C')
        return 2;
    if ('D' <= a && a <= 'F')
        return 3;
    if ('G' <= a && a <= 'I')
        return 4;
    if ('J' <= a && a <= 'L')
        return 5;
    if ('M' <= a && a <= 'O')
        return 6;
    if ('P' <= a && a <= 'S')
        return 7;
    if ('T' <= a && a <= 'V')
        return 8;
    if ('W' <= a && a <= 'Z')
        return 9;
    return -1;
}

int check(string a)
{
    int len = a.length();
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 32;
    }
    for (int i = 0; i <= len / 2; i++)
    {
        if (toNum(a[i]) != toNum(a[len - 1 - i]) || toNum(a[i]) == -1 || toNum(a[len - 1 - i]) == -1)
            return 0;
    }
    return 1;
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
        string a;
        cin >> a;
        if (check(a) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
