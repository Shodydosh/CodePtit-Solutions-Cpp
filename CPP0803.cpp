#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
    int M[10000] = {0};
    ifstream file;
    file.open("DATA.in");
    int a;
    int maxVal = 0;
    while (file >> a)
    {
        M[a]++;
        maxVal = max(maxVal, a);
    }
    file.close();
    for (int i = 0; i <= maxVal; i++)
    {
        if (M[i])
            cout << i << ' ' << M[i] << endl;
    }
}
