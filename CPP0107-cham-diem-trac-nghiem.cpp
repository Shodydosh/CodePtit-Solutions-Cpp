#include <bits/stdc++.h>
 
#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl
 
using namespace std;

double Cal(int n, vector<char> ans){
    vector<char> code101{'A', 'B', 'B', 'A', 'D', 'C', 'C', 'A', 'B', 'D', 'C', 'C', 'A', 'B', 'D'};
    vector<char> code102{'A', 'C', 'C', 'A', 'B', 'C', 'D', 'D', 'B', 'B', 'C', 'D', 'D', 'B', 'B'};

    double mark = 0;
    if(n == 101){
        for(int i=0; i<15; i++){
            if(ans[i] == code101[i]) mark += 1;
        }
    } else {
        for(int i=0; i<15; i++){
            if(ans[i] == code102[i]) mark += 1;
        }
    }

    return mark * 2/3;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        char tmp;
        vector<char> ans;
        for(int i=0; i<15; i++){
            cin >> tmp;
            ans.push_back(tmp);
        }

        cout << setprecision(2) << fixed << Cal(n, ans) << endl;
    }
    return 0;
}
