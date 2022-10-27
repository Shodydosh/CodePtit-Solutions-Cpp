#include <bits/stdc++.h>
using namespace std;

int checkPalindrome(string s)
{
    if (s.length() == 1)
        return 0;
    for (int i = 0; i <= s.size() / 2; i++)
    {
        if (s[i] != s[s.size() - 1 - i])
            return 0;
    }
    return 1;
}

bool cmp(string a, string b)
{
    // cout << "swapped" << endl;
    if (a.length() != b.length())
        return a.length() > b.length();
    return a > b;
}
int main()
{
    string s;
    int n = 0;
    string ss[1100];
    while (cin >> s)
    {
        if (checkPalindrome(s))
        {
            ss[n] = s;
            n++;
        }
    }
    sort(ss, ss + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << ss[i] << ' ';
        int count = 1;
        int mark;
        int check = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (ss[j] == ss[i])
            {
                if (j == n - 1)
                {
                    mark = j - 1 - i;
                    check = 1;
                }
                count++;
            }
            else
            {
                mark = j - 1 - i;
                break;
            }

            if (check)
                break;
        }
        cout << count << endl;
        i += mark;
        if (check)
            break;
    }
}
