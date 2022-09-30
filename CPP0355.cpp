#include <bits/stdc++.h>

using namespace std;

void toUpper(char &s)
{
    if (s >= 'a' && s <= 'z')
        s -= 32;
}
void toLower(char &s)
{
    if (s >= 'A' && s <= 'Z')
        s += 32;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string S[1000];
    char c[1000];
    int a = 0;
    while (scanf("%s", c) != -1)
    {
        S[a++] = c;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < S[i].length(); j++)
        {
            S[i][j] = tolower(S[i][j]);
            if (S[i][j] == '.' || S[i][j] == '?' || S[i][j] == '!')
                S[i][j] = '\n';
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < S[i].length(); j++)
        {
            if (i == 0 || S[i - 1][S[i - 1].length() - 1] == '\n')
                S[i][0] = toupper(S[i][0]);
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < S[i].length(); j++)
        {
            cout << S[i][j];
        }
        if (S[i + 1][0] < 'A' || S[i + 1][0] > 'Z')
            cout << " ";
    }
}
