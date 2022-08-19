#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int CharCheck(char a){
    if(a == 0 || a == 8 || a == 6) return 1;
    return 0;
}

int check(long long n){
    while(n>0){
        int tmp = n%10;
        if(CharCheck(tmp) == 0) return 0;
        n/=10;
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
        long long n;
        cin >> n;
        if(check(n) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
