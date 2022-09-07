#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

long long calculate(string a, long long b){
    long long tmp = 0;
    for(int i=0; i<a.length(); i++){
        tmp = (tmp*10 + a[i] - '0') % b;
    }
    return tmp;
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
        long long b;
        cin >> a >> b;
        cout << calculate(a, b) << endl;
    }
 	return 0;
}
