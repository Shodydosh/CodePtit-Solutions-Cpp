#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+1];

        for(int i=0; i<=n; i++){
            a[i] = 0;
        }

        int tmp = 2;
        while(n != 1){
            if(n%tmp == 0){
                n/=tmp;
                a[tmp]++;
            }
            else{
                tmp++;
            }
        }

        for(int i=2; i<=tmp; i++){
            if(a[i] != 0) cout << i << ' ' << a[i] << ' ';
        }

        cout << endl;
    }
}
