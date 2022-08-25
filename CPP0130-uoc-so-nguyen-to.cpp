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

    int t;
    cin >> t;
    while(t--){
        long long n; cin >> n;
        for(int i=2 ; i<=sqrt(n); i++){
            while(n % i == 0){
                cout << i << ' ';
                n /= i;
            }
            if(n == 1) break;
        }
        if(n != 1) cout << n;
        cout << endl;
    }
    
}
