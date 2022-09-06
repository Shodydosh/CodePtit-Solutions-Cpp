#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void calculate(string a){
    int count = 0;
    int odd = 0, even = 0;
    for(int i=0; i<a.size(); i++){
        if(a[i] == ' '){
            count++;
            int tmp = a[i-1] - '0';
            tmp%2==1 ? odd++ : even++;
        }        

        if(i == a.size()-1){
            int tmp = a[i] - '0';
            tmp%2==1 ? odd++ : even++;
        }
    }

    if(count % 2 == 1 && even > odd || odd > even && count % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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
