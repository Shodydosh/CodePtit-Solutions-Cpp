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
    while(t--){
        string s;
        cin.ignore();
        getline(cin, s);
        long long count = 0;
        stringstream ss(s);
        string tmp;
        char ch;
        while(ss >> tmp){
            count++;
            // ss >> ch;
        } 
        cout << count << endl;
    }
}
