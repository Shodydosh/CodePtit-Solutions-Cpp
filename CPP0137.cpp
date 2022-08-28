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
		if (s[i] == 0) {
			for (long long j=i*i; j<=n; j=i+j) {
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

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t --){
        long long l, r;
        cin >> l >> r;
        int cnt = 0;
        sieve(sqrt(r));
        for(int i=sqrt(l); i<=sqrt(r); i++){
            if(s[i] == 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
	return 0;
}
