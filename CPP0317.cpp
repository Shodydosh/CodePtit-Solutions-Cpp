#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] == '1' ||s[i] == '3' ||s[i] == '5' ||s[i] == '7' ||s[i] == '9') return 0;
    }

    for(int i=0; i<=s.size()/2; i++){
        if(s[i] != s[s.size()-1-i]) return 0;
    }

    return 1;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t; cin >> t;

    cin.ignore();
    while(t--){
        string s;
        cin >> s;
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
