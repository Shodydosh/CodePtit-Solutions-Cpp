#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    double n;
    cin >> n;
    double ans = 0;
    for(int i=1; i<=n; i++){
        double tmp = 1/double(i);
        ans += tmp;
    }


    cout << setprecision(4) << fixed << ans;
}
