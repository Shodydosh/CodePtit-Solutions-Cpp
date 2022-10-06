#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> v1(m);
        vector<int> v2(m);
        for (int i = 0; i < m; i++)
            cin >> v1[i];
        for (int i = 0; i < m; i++)
            cin >> v2[i];

        int maxVal = 0;
        for (int i = 0; i < m; i++)
        {
            int tmp1 = 0, tmp2 = 0;
            for (int j = i; j < m; j++)
            {
                tmp1 += v1[j];
                tmp2 += v2[j];
                if (tmp1 == tmp2)
                    maxVal = max(maxVal, j - i + 1);
            }
        }
        cout << maxVal << endl;
    }
    return 0;
}
