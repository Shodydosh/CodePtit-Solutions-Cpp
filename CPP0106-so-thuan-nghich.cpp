#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

void check(long long n){
    vector<int> a, b;
    while(n>0){
        a.push_back(n%10);
        b.push_back(n%10);
        n/=10;
    }
    reverse(a.begin(), a.end());

    if( a == b ) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        check(n);
    }
    return 0;
}
