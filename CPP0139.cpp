#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

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

long long cal(long long n) {
	long long sum = 0;
	for(int i=2; i<=n; i++){
		while (n%i == 0) {
			sum += calSum(i);
			n /= i;
		}
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
        long long n;
        cin >> n;
        if (cal(n) == calSum(n) && checkNT(n) == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
	return 0;
}
