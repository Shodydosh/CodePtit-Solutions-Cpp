#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int calculate(string a){
    vector<int> v(300, 0);
    for(int i=0; i<a.size(); i++) v[a[i]]++;
    if(a.length() % 2 == 0){
        for(int i=0; i<a.size(); i++){
            // cout << v[a[i]] << ' ';
            if(v[a[i]] > a.length()/2) return 0;
        }    
    }
    else{
        for(int i=0; i<a.size(); i++){
            // cout << v[a[i]] << ' ';
            if(v[a[i]] > a.length()/2 + 1) return 0;
        }           
    }
    return 1;
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
        cout << calculate(a) << endl;
    }
 	return 0;
}
