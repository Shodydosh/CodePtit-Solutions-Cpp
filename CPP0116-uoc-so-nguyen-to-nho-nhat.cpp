#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int greatestPrimeDivisor(int n){
    if(n == 1) return 1;
    if(n % 2 == 0) return 2;
    if(n % 3 == 0) return 3;
    if(n % 5 == 0) return 5;
    if(n % 7 == 0) return 7;
    for(int i=11; i<=sqrt(n); i++){
        if(n%i == 0) return i;
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 1; i<=n; i++){
            cout << greatestPrimeDivisor(i) << ' ';
        }
        cout << endl;
    }

}
