#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctype.h>
using namespace std;
void taomang(int[], int *);
void duyetmang(int[], int);
// void xoaphantu(int[], int *);
int main()
{
    int arr[100], n = 0;
    taomang(arr, &n);
    duyetmang(arr, n);
    // xoaphantu(arr, &n);
    return 0;
}
void taomang(int a[], int *n)
{
    cin >> *n;
    if (*n < 1 || *n > 100)
    {
        cout << "N";
        exit(0);
    }
    for (int i = 0; i < *n; i++)
    {
        cin >> a[i];
    }
}
void duyetmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << setw(7);
        cout << endl;
    }
}
// void xoaphantu(int a[], int *n)
// {
//     int k;
//     cin >> k;
//     if (k < 1 || k > *n)
//     {
//         cout << "N";
//     }
//     for (int i = k - 1; i < n - 1; ++i)
//     {
//         a[i] = a[i + 1];
//         *n = *n - 1;
//         duyetmang(a, *n);
//     }
// }
