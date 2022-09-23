#include <bits/stdc++.h>

#define ll long long
#define endl '\n'
#define chk cout << "<< * checked  * >>" << endl;
#define db cout << '<' << "i" << '=' << i << '>' << endl

using namespace std;

// struct SinhVien
// {
//     string name;
//     string maSV;
//     string dob;
//     double gpa;
// };

// void nhapThongTinSV(SinhVien ds[], int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         cin.ignore();
//         getline(cin, ds[i].name);
//         cin >> ds[i].maSV;
//         cin >> ds[i].dob;
//         cin >> ds[i].gpa;

//         string tmp = ds[i].dob;
//         if (tmp[1] == '/')
//             tmp = '0' + tmp;
//         if (tmp[4] == '/')
//             tmp.insert(3, "0");
//         ds[i].dob = tmp;
//     }
// }

// void inThongTinSV(SinhVien ds[], int N)
// {
//     for (int i = 0; i < N; i++)
//     {
//         cout << "B20DCCN";

//         int tmp = i + 1;
//         if (tmp < 10)
//             cout << "00" << tmp;
//         else if (tmp < 100)
//             cout << "0" << tmp;
//         else
//             cout << tmp;
//         cout << ' ';

//         cout << ds[i].name << ' ';
//         cout << ds[i].maSV << ' ';
//         cout << ds[i].dob << ' ';
//         cout << setprecision(2) << ds[i].gpa << endl;
//     }
// }

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;

        set<int> se;
        int maxVal = INT_MIN, minVal = INT_MAX;

        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp < minVal)
                minVal = tmp;
            if (tmp > maxVal)
                maxVal = tmp;
            se.insert(tmp);
        }

        int tmp = (maxVal + 1 - minVal - se.size());

        cout << tmp << endl;
    }
}
