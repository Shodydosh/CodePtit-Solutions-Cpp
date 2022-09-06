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
        string a;
        cin >> a;
        if(a.size() == 1) cout << a << 1 << endl;
        else{
            char tmp;
            tmp = a[0];
            long long count = 1;
            for(int i=1; i<a.size(); i++){            
                if(a[i] == tmp) count++;
                else{
                    cout << tmp << count;
                    tmp = a[i];
                    count = 1;
                }
                if(i == a.size()-1) cout << tmp << count;
            }
            cout << endl;
        }
    }
 	return 0;
}
