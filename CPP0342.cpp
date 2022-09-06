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

void restruct(string a){
    long long sum = 0;
    vector<char> vec;
    for(int i=0; i<a.size(); i++){
        if(a[i] >= '0' && a[i] <= '9'){
            sum += a[i] - '0';
        }
        else{
            vec.push_back(a[i]);
        }
    }
    sort(vec.begin(), vec.end());
    for(int i=0; i<vec.size(); i++){
        cout << vec[i];
    }
    cout << sum << endl;
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
        restruct(a);
    }
 	return 0;
}
