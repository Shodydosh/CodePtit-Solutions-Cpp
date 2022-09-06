#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void calculate(string a){
    string tmp = a;
    int temp;
    for(int i=a.size()-2; i>=0; i--){
        int max = -1;
        for(int j=i+1; j<a.size(); j++){

            if(i == 0 && a[j] == '0') continue;
            if(a[j] > max && a[j] < a[i]){
                max = a[j];
                temp = j;
            } 
        } 

        if(max!=-1){
            swap(a[i], a[temp]);
            break;
        } 
    }
    if(tmp == a) cout << -1 << endl;
    else cout << a << endl;
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
        calculate(a);
    }
 	return 0;
}
