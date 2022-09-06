#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void calculate(string a){
    long long ans = a.length();


    if(a.length() == 1){
        cout << 1 << endl;
        return;
    }

    vector<int> count(252, 0);
    for(int i=0; i<a.length(); i++) count[a[i]]++;
    for(int i=0; i<a.length(); i++) {
        if(count[a[i]] > 1){
            ans += count[a[i]] * (count[a[i]] - 1) / 2;
        }
        count[a[i]] = 0;
    }

    cout << ans << endl;
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
        getline(cin, a);
        calculate(a);
    }
 	return 0;
}
