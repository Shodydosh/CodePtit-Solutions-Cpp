#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void getMinus(string a, string b){
    if(a == b){
        cout << 0 << endl; return;
    }

    while(a.length() < b.length()) a = '0' + a;
    while(a.length() > b.length()) b = '0' + b;

    if(a < b) swap(a, b);

    // cout << a << ' ' << b << endl;
    string ans = "";

    long long mark = 0;
    for(int i=a.length()-1; i>=0; i--){
        int tmp = a[i] - b[i] + mark;
        mark = 0;
        if(tmp < 0){
            tmp+=10; mark=-1;
        }
        tmp += '0';
        ans += tmp;
    }

    for(int i=ans.length()-1; i>=0; i--) cout << ans[i];
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
        cin >> a >> b;
        getMinus(a, b);
    }
 	return 0;
}
