#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    string s; 
    getline(cin, s);

    string temp = "";
    string ans = "";
    stringstream ss(s);
    string word;
    while(ss >> word){
        if(word[0] >= 'A' && word[0] <= 'Z') word[0] += 32;
        temp += word[0];
    }

    for(int i=0; i<word.size(); i++){
        if(word[i] >= 'A' && word[i] <= 'Z') word[i] += 32;
        ans += word[i];
    }

    for(int i=0; i<temp.length()-1; i++){
        ans += temp[i];
    }


    ans += "@ptit.edu.vn";
    cout << ans;
}
