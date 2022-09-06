#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void check(string a){
    if(a[0] == '0'){
        cout << "INVALID" << endl;
        return;
    } 

    vector<int> v(252, 0);
    for(int i=0; i<a.size(); i++){
        // cout << a[i] << ' ';
        if(a[i] > '9' || a[i] < '0'){
            cout << "INVALID" << endl; return;
        }
        v[a[i]]++;
    }

    for(int i='0'; i<='9'; i++){
        if(v[i] == 0){
            cout << "NO" << endl;
            return;
        }
    } 

    cout << "YES" << endl;
}

int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	long long t;
	cin >> t;
    cin.ignore();
	while(t--){
        string a;
        cin >> a;
        check(a);
    }
 	return 0;
}
