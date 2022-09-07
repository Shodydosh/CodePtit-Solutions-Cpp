#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

long long calculate(string a)
{
    long long ans = 0, tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            ans += (a[i] - '0') * pow(10, tmp);
            tmp++;
        }
        else
            tmp = 0;
    }
    return ans;
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
        cout << calculate(a) << endl;
    }
    return 0;
}
