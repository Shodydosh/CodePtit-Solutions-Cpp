#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

vector<long long> s(1000000, 0);
void sieve (long long n) {
	s[0] = 1, s[1] = 1;
	for (long long i=2; i<=n; i++){
        if(s[i] == 0){
            for (long long j=i+i; j<=n; j+=i) {
                s[j] = 1;
            }
        }
	}
}

long long checkNT(long long n){
    if(n <= 1) return 0;
    if(n <= 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(long long i=2; i<=sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

long long calSum(long long n){
	long long m = n, sum = 0;
	while (m != 0) {
		sum += m%10;
		m /= 10;
	}
	return sum;
}

long long BCNN(long long a, long long b){
    return a*b / __gcd(a, b);
}

long long cal(long long x, long long a){
    long long ans = x;
    long long tmp = 0;
    
    for(int i=0; i<=20; i++){
        if(pow(10, i) > x){
            tmp = i;
            break;
        }
    }

    a--;
    while(a--){
        ans = ans*pow(10, tmp)+x;
    }

    // cout << ans << endl;
    return ans;
}

long long gcd(long long x,long long y){ 
    if (y==0) return x; 
    return gcd(y,x%y); 
}

int a[1000002];

int main(){
 	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		for(int i=1;i<=n;i++)
		{
			cin >> a[i];
		}
		for(int i=k+1;i<=n;i++) cout << a[i] << " ";
		for(int i=1;i<=k;i++) cout << a[i] << " ";
		cout << "\n";
	}
 	return 0;
}
