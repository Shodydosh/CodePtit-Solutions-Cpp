#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void toUppercase(char& c){
    if(c <= 'z' && c >= 'a') c -= 32;
}

void toLowercase(char& c){
    if(c <= 'Z' && c >= 'A') c += 32;
}

void restruct(string a){
    string ans = "";
    stringstream ss(a);
    string tmp;
    vector<string> v;
    // chk;
    while(ss >> tmp){
        toUppercase(tmp[0]);
        for(int i=1; i<tmp.size(); i++){
            toLowercase(tmp[i]);
        }
        v.push_back(tmp);
    }

    for(int i=0; i<v.size()-2; i++){
        ans += v[i];
        ans += ' ';
    }


    ans += v[v.size()-2];
    ans += ',';
    ans += ' ';

    for(int i=0; i<v[v.size()-1].length(); i++){
        toUppercase(v[v.size()-1][i]);
    }

    ans += v[v.size()-1];

    cout << ans << endl;
}

int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	// long long t;
	// cin >> t;
    // cin.ignore();
	// while(t--){
        string a;
        getline(cin, a);
        restruct(a);
    // }
 	return 0;
}
