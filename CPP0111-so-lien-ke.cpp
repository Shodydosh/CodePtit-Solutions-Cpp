#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

int check(long long n){
    vector<int> nums;
    while(n>0){
        nums.push_back(n%10); n/=10;
    }
    
    for(int i=1; i<nums.size()-1; i+=2){
        if(abs(nums[i]-nums[i-1])!=1 || abs(nums[i]-nums[i+1])!=1) return 0;
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
        long long n;
        cin >> n;
        if(check(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
