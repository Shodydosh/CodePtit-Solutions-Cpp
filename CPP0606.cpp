#include <bits/stdc++.h>

using namespace std;

class NhanVien
{
private:
    string name, gender, dob, address, phone, date;

public:
    void nhap()
    {
        getline(cin, this->name);
        getline(cin, this->gender);
        getline(cin, this->dob);
        getline(cin, this->address);
        getline(cin, this->phone);
        getline(cin, this->date);
    }

    void xuat()
    {
        cout << "00001 ";
        cout << this->name << ' ';
        cout << this->gender << ' ';
        cout << this->dob << ' ';
        cout << this->address << ' ';
        cout << this->phone << ' ';
        cout << this->date << ' ';
    }
};

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}
