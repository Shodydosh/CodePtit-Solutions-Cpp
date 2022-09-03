#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

long long gcd(long long x,long long y){ 
    if (y==0) return x; 
    return gcd(y,x%y); 
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    while(t --){
        long long a, x, y;
        cin >> a >> x >> y;
        long long tmp = gcd(x, y);
        for(int i=0; i<tmp; i++){
            cout << a;
        }
        cout << endl;
    }
	return 0;
}
