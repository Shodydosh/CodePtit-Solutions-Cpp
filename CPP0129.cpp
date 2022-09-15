#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int calculate(long long a, long long b)
{
    int count = 0;
    for (int i = 2; i <= a; i++)
    {
        if (i % b == 0)
        {
            int temp = i;
            while (temp % b == 0)
            {
                count++;
                temp /= b;
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
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        cout << calculate(m, n) << endl;
    }
    return 0;
}
