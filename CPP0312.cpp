#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int check(string s, long long n){
    if(s.length() < 24) return 0;
    long long count[252];
    long long q = 0;
    memset(count, 0, sizeof(count));
    for(int i=0; i<s.length(); i++){
        if(!count[s[i]]) count[s[i]]++;
    }

    for(int i='a'; i<='z'; i++){
        if(!count[i]) q++;
    }

    // cout << q << ' ' << n << endl;
    if(q > n) return 0;
    else return 1;

}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    while(t--){
    cin.ignore();
        string s;
        getline(cin, s);
        long long n; cin >> n;
        cout << check(s, n) << endl;
    }
}
