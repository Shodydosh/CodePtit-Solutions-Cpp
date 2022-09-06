#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

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
        string c=a, d=b;

        for(int i=0; i<a.length(); i++) if(a[i] == '5') a[i] = '6';
        for(int i=0; i<b.length(); i++) if(b[i] == '5') b[i] = '6';

        for(int i=0; i<c.length(); i++) if(c[i] == '6') c[i] = '5';
        for(int i=0; i<d.length(); i++) if(d[i] == '6') d[i] = '5';

        long long sSum = stoll(c) + stoll(d), bSum = stoll(a) + stoll(b);

        cout << sSum << ' ' << bSum << endl;
    }
 	return 0;
}
