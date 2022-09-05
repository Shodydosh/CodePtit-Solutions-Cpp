#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

void calculate(int n, int sum){
    if(sum == 0 || sum > 9*n){
        cout << -1 << ' ' << -1;
        return;
    }
    else{
        vector<int> maxNum(n, 0);
        vector<int> minNum(n, 0);

        int tmp1 = sum / 9;
        int tmp2 = sum % 9;
        if(sum / 9 == n){
            for(int i=0; i<n; i++) cout << 9;
            cout << ' ';
            for(int i=0; i<n; i++) cout << 9;
        }
        else if(sum % 9 != 0){
            for(int i=0; i<tmp1; i++){
                maxNum[i] = 9;
                minNum[n-1-i] = 9; 
            }
            maxNum[tmp1] = tmp2;
            if(sum > 9*(n-1)) minNum[0] = tmp2;
            else{
                if(tmp2 == 0) tmp2 = 9;
                minNum[0] = 1;
                minNum[n-1-tmp1] = tmp2-1;
            }
            for(int i=0; i<n; i++) cout << minNum[i];
            cout << ' ';
            for(int i=0; i<n; i++) cout << maxNum[i];
        }
        else{
            for(int i=0; i<tmp1; i++){
                maxNum[i] = 9;
            }
            for(int i=0; i<tmp1-1; i++){
                minNum[n-1-i] = 9; 
            }
            maxNum[tmp1] = tmp2;
            tmp1--;
            if(sum > 9*(n-1)) minNum[0] = tmp2;
            else{
                if(tmp2 == 0) tmp2 = 9;
                minNum[0] = 1;
                minNum[n-1-tmp1] = tmp2-1;
            }
            for(int i=0; i<n; i++) cout << minNum[i];
            cout << ' ';
            for(int i=0; i<n; i++) cout << maxNum[i];
        } 

        
    }
}

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, sum;
    cin >> n >> sum;
    calculate(n, sum);
}
