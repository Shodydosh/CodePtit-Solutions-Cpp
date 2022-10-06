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

    int m;
    cin >> m;
    vector<int> v1(m * m);
    for (int i = 0; i < m * m; i++)
        cin >> v1[i];

    sort(v1.begin(), v1.end());

    int z = 0;
    int index = 0;
    int side = m;
    int count = 0;
    int mat[m][m] = {};
    while (count < m/2)
    {
        for (int i = z; i < side - 1 - z; i++)
        {
            mat[z][i] = v1[index++];
        }
        for (int i = z; i < side - 1 - z; i++)
        {
            mat[i][side - 1 - z] = v1[index++];
        }
        for (int i = side - 1 - z; i > z; i--)
        {
            mat[side - 1 - z][i] = v1[index++];
        }
        for (int i = side - 1 - z; i > z; i--)
        {
            mat[i][z] = v1[index++];
        }
        z++;
        count++;
    }

    if(m % 2 == 1) mat[m/2][m/2] = v1[m*m-1];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}
