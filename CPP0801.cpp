#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    ifstream in_file{"PTIT.in"};
    ofstream out_file{"PTIT.out"};
    while (in_file >> line)
    {
        out_file << line << endl;
    }
    in_file.close();
    out_file.close();
    return 0;
}
