#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

#define MAX 10001
 
vector<bool> isPrime (MAX, true);
void sieve()
{
     
    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i] == true)
            for (int j = i*i; j<= MAX; j+=i)
                isPrime[j] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    sieve();
    int t;
    cin >> t;
    while(t--){
        long long n; cin >> n;
        for(int i=2 ; i<=n; i++){
            if(isPrime[i]) cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
