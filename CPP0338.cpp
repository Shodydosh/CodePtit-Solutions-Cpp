#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

long long calculate(string a, long long k)
{
    long long count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        set<char> se;
        for (int j = i; j < a.length(); j++)
        {
            se.insert(a[j]);
            if (se.size() == k)
            {
                count++;
            }
            else if (se.size() > k)
            {
                break;
            }
            else
            {
                continue;
            }
        }
    }
    return count;
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
        long long n;
        cin >> a >> n;
        // cout << a << n << endl;
        cout << calculate(a, n) << endl;
    }
    return 0;
}
