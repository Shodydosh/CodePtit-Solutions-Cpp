#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int checkPrime(int n){
    if(n <= 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(n%2 == 0 || n%3 == 0) return 0;
    
    for(int i=2; i<=sqrt(n); i++) if (n%i==0) return 0;
    return 1;
}

int checkUp(int n){
    int tmp = n%10;
    n/=10;
    while(n > 0){
        if(tmp <= n%10) return 0; 
        tmp = n%10; 
        n /= 10;
    }
    return 1;
}

int checkDown(int n){
    int tmp = n%10;
    n/=10;
    while(n > 0){
        if(tmp >= n%10) return 0; 
        tmp = n%10; 
        n /= 10;
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n, cnt = 0;
        cin >> n;
        for(int i=pow(10, n-1); i<pow(10, n); i++){
            if(checkUp(i)==1 || checkDown(i)==1){
                if(checkPrime(i)) cnt++;
            }
        }
        cout << cnt << endl;
    }

}
