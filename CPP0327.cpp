#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void calculate(string s){
    long long sum = 0;
    for(int i=s.length()-1; i>=0; i--){
        if(s[i] == '1'){
            int tmp = ((s.length()-1)-i) % 4;

            if(tmp == 0) sum += 1; 
            else if(tmp == 1) sum += 2; 
            else if(tmp == 2) sum += 4; 
            else if(tmp == 3) sum += 3; 
        }
    }
    if(sum % 5 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
}

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
        calculate(s);
    }
}
