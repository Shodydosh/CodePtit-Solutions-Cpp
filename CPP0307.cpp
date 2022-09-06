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

void getCommonString(string s1, string s2){
    set<string> se1;
    set<string> se2;
    stringstream ss1(s1);
    stringstream ss2(s2);
    string tmp;
    while(ss1 >> tmp) se1.insert(tmp);
    while(ss2 >> tmp) se2.insert(tmp);
    for(string i : se1){
        if(se2.find(i) == se2.end()) cout << i << ' ';
    }
    cout << endl;
}

int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	long long t;
	cin >> t;
    cin.ignore();
	while(t--){
        string a, b;
        getline(cin, a);
        getline(cin, b);
        getCommonString(a, b);
    }
 	return 0;
}
