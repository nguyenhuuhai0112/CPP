#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Nhap vi tri can xoa (khong phai chi so): ";
    cin >> k;

    for (int i = k - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Cac phan tu cua mang sau khi xoa: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
