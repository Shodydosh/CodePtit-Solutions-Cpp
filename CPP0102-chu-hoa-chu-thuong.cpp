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
        char a, ans;
        cin >> a;
        if('a' <= a && a <= 'z'){
            ans = a-32;
        } else if ('A' <= a && a <= 'Z'){
            ans = a+32;
        }
        cout << ans << endl;
    }

    return 0;
}
