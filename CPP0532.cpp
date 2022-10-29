#include <bits/stdc++.h>
#include <fstream>
using namespace std;

struct point
{
    int x, y;
};

double cal(point a, point b, point c)
{
    return 0.5 * abs((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        point p[n];
        for (int i = 0; i < n; i++)
        {
            cin >> p[i].x >> p[i].y;
        }
        double sum = 0;
        for (int i = 0; i < n - 2; i++)
        {
            sum += double(cal(p[0], p[i + 1], p[i + 2]));
        }
        cout << fixed << setprecision(3) << sum << endl;
    }
}
