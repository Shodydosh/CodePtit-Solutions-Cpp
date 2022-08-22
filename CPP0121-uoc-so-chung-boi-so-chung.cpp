#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

long long gcd_recursive(long long a, long long b)
{
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b;
        cin >> a >> b;
        int tmp = gcd_recursive(a, b);
        cout << a*b/tmp << ' ' << tmp << endl;
    }
    return 0;
}
