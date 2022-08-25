#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int check(int n){
    if(n <= 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 && n % 3 == 0) return 0;
    else for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n; cin >> n;
        for(int i=2 ; i<=sqrt(n); i++){
            if(check(i)) cout << i*i << ' ';
        }
        cout << endl;
    }
    return 0;
}
