#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

long long FactorialCal(int n){
    if(n == 1 || n == 2) return n;
    else return FactorialCal(n-1)*n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    long long ans = 0; 
    for(int i=1; i<=n; i++){
        ans += FactorialCal(i);
    }

    cout << ans;
}
