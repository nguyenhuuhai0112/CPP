#include <iostream>
using namespace std;
void nhapmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
        cin >> a[i];
}

void xuatmang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        cout << " " << a[i];
    }
}
void xoaphantu(int &n, int a[])
{
    int k;
    cout << "\nvt can xoa ";
    cin >> k;
    for (int i = k; i < n; i++)
    {
        a[i] = a[i + 1]; // la cai dang truoc se dap vao cai dang sau
    }
    n--;
}

int main()

{
    int n;
    int a[n];
    cin >> n;
    nhapmang(n, a);
    xuatmang(n, a);
    xoaphantu(n, a);
    xuatmang(n, a);
    cout << "Cac phan tu cua mang sau khi xoa: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
