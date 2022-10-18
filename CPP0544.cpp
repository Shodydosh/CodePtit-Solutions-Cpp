#include <bits/stdc++.h>

using namespace std;
#define PI 3.141592653589793238

double check(double x1, double y1, double x2, double y2, double x3, double y3)
{
    double a, b, c;
    a = sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
    b = sqrt(abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2));
    c = sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3));
    if (a + b <= c || b + c <= a || c + a <= b)
        return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        if (check(x1, y1, x2, y2, x3, y3) == 0)
        {
            cout << "INVALID" << endl;
            continue;
        }
        double x, y, z;
        x = sqrt(abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2));
        y = sqrt(abs(x3 - x2) * abs(x3 - x2) + abs(y3 - y2) * abs(y3 - y2));
        z = sqrt(abs(x1 - x3) * abs(x1 - x3) + abs(y1 - y3) * abs(y1 - y3));
        double s = sqrt((x + y + z) * (x + y - z) * (y + z - x) * (z + x - y)) * 1.0 / 4;
        double r = x * y * z * 1.0 / (4 * s);
        cout << fixed << setprecision(3) << (double)PI * r * r << endl;
    }
}
