#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int check(int n){
    if(n <= 1) return 0;

    if(n == 2 || n == 3) return 1;

    if(n%2==0 || n%3==0) return 0;

    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }

    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, i=2, tmp;
    cin >> n;
    if(check(n)){
        cout << n << ' ' << 1;
        return 0;
    } 
    while(n != 1 && i <= n){
        tmp = 0;
        while(n % i == 0){
            tmp++;
            n/=i;
        }
        if(tmp){
            cout << i << ' ' << tmp << endl;
        }
        i++;
    }
    return 0;
}
