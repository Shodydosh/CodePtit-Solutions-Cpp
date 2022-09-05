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
        long long n = s.size();
        
        int count[252];
        memset(count, 0, sizeof(count));

        for(int i=0; i<n; i++){
            count[s[i]]++;
        }
        for(int i=0; i<n; i++){
            if(count[s[i]] == 1) cout << s[i];
        }
        cout << endl;
    }
}
