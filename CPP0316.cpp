#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

string numToString(long long n){
    string ans = "";
    while(n>0){
        char tmp = n%10 + '0';
        ans = tmp + ans;
        n /= 10;
    }
    return ans;
}

int luckyCheck(string a){
    long long sum = 0;
    if(a.size() < 2){
        if(a != "9") return 0;
        else return 1;
    }
    else{
        for(int i=0; i<a.size(); i++){
            sum += a[i] - '0';
        }
        if(sum == 9) return 1;
        else return luckyCheck(numToString(sum));
    }
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
        cin >> a;
        cout << luckyCheck(a) << endl;
    }
 	return 0;
}
