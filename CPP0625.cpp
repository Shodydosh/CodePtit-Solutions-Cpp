#include <bits/stdc++.h>

using namespace std;

class giangVien
{
private:
    string name, major;

public:
    string code, lastName;
    friend istream &operator>>(istream &, giangVien &);
    friend ostream &operator<<(ostream &, giangVien &);
};

istream &operator>>(istream &in, giangVien &gv)
{
    getline(in, gv.name);
    getline(in, gv.major);

    string s = gv.major;
    gv.major = "";
    stringstream ss(s);
    string tmp;
    while (ss >> tmp)
    {
        gv.major += toupper(tmp[0]);
    }

    s = gv.name;
    stringstream ss2(s);
    while (ss2 >> tmp)
        continue;
    gv.lastName = tmp;

    return in;
}
ostream &operator<<(ostream &out, giangVien &gv)
{
    out << gv.code << ' ';
    out << gv.name << ' ';
    out << gv.major << endl;
    return out;
}

bool cmp(giangVien a, giangVien b)
{
    if (a.lastName == b.lastName && a.code < b.code)
    {
        return true;
    }
    return a.lastName < b.lastName;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    giangVien g[n];
    for (int i = 0; i < n; i++)
    {
        if (i < 9)
            g[i].code = "GV0" + to_string(i + 1);
        else
            g[i].code = "GV" + to_string(i + 1);

        cin >> g[i];
    }

    sort(g, g + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << g[i];
    }
}
