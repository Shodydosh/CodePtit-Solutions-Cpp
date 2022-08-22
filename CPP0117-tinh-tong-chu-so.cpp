#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int cal(long long n){
    int ans = 0;
    while(n > 0){
        ans += n%10;
        n /= 10;
    }
    return ans;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        while(n > 9) n = cal(n);
        cout << n << endl;
    }
    return 0;
}
