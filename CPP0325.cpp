#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        long long sum = 0;
        for(int i=0; i<s.size(); i++){
            if(i % 2) sum -= (s[i] - '0');
            else sum += (s[i] - '0');
        }
        if(sum % 11 == 0) cout << 1 << endl;
        else cout << 0 << endl;
    }
}
