#include <iostream>
using namespace std;
void NhapMang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " :";
        cin >> a[i];
    }
}
void xuatmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

int main()
{
    int n;
    int a[n];
    cin >> n;
    NhapMang(n, a);
    xuatmang(n, a);
    return 0;
}