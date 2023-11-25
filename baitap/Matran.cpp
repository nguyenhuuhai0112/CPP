#include <iostream>
#include <iomanip>
using namespace std;

void TaoMaTran(int a[][10], int *n, int *m)
{
    cin >> *n;
    cin >> *m;
    if ((*n < 1 || *n > 10) && (*m < 1 || *m > 10))
    {
        cout << "N";
        return;
    }
    for (int i = 0; i < *n; i++)
        for (int j = 0; j < *m; j++)
        {
            cin >> a[i][j];
        }
}

void HienThiMaTran(int a[][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(7) << a[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int a[10][10], n = 0, m = 0;
    TaoMaTran(a, &n, &m);
    HienThiMaTran(a, n, m);
}
