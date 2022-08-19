#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int check(long long n){
    vector<int> nums;
    int odd=0, even=0;
    while(n>0){
        (n % 2 == 1) ? odd++ : even++; 
        nums.push_back(n % 10);
        n/=10;
    }

    if(odd != even) return 0;
    return 1;
}

void Console(int n){
    int start = pow(10, n-1);
    int end = pow(10, n);
    int count = 1;

    for(int i=start; i<end; i++){
        if(check(i)){
            cout << i << ' ';
            if(count == 10){
                cout << endl;
                count = 1;
            }
            else {
                count++;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    if(n%2 == 0) Console(n);
    return 0;
}
