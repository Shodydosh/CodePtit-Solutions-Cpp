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
    for(int i=0; i<a.length(); i++){
        toLowercase(a[i]);
        if(a[i] != 'a' && a[i] != 'e' && a[i] != 'u' && a[i] != 'o' && a[i] != 'i' && a[i] != 'y'){
            ans += '.';
            ans += a[i];
        }       
    }
    cout << ans;
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
