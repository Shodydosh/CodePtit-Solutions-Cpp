#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int M[405][405];
    int A[405][405] = {}, B[405][405] = {};
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> M[i][j];
            A[i][j] = M[i][j];
            B[i][j] = M[i][j];
        }
    // mảng A lưu chéo chính
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            A[i][j] += A[i - 1][j - 1];
        }
    }

    // Mảng B lưu chéo phụ
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > 0; j--)
        {
            B[i][j] += B[i - 1][j + 1];
        }
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << A[i][j] << ' ';
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << B[i][j] << ' ';
    //     }
    //     cout << endl;
    // }

    int maxVal = INT8_MIN;
    int tmp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // cout << i << ' ' << j << endl;
            for (int k = 0; k < min(i, j); k++)
            {

                // cout << '{' << k << '}';
                // điều kiện để ma trận hình vuông
                tmp = A[i][j] - A[i - min(i, j) + k][j - min(i, j) + k];
                tmp += B[i - min(i, j) + k][j + 1] - B[i][j - min(i, j) + k + 1];

                // cout << A[i][j] << ' ';
                // cout << A[i - min(i, j) + k][j - min(i, j) + k] << ' ';

                // // Lưu ý hai cái + 1 ở B
                // cout << B[i - min(i, j) + k][j + 1] << ' ';
                // cout << B[i][j - min(i, j) + k + 1] << endl;
                // cout << "=> " << tmp << endl;
                maxVal = max(maxVal, tmp);
            }
        }
    }

    // int temp = A[n][n] - B[n][1];
    // cout << temp << endl;
    // maxVal = max(maxVal, temp);

    cout << maxVal << endl;
}
