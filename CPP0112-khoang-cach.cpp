#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

double Cal(double x1, double y1, double x2, double y2){
    return sqrt(pow(abs(x1-x2), 2) + pow(abs(y1-y2), 2));
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << setprecision(4) << fixed << Cal(x1, y1, x2, y2) << endl;
    }
}
