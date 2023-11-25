// 2. Sắp xếp các giá trị mảng nguyên arr có n phần tử tăng dần (1 <= n <= 100)
#include <iostream>
#include <algorithm>

const int MAX_SIZE = 100;

using namespace std;

int main()
{
    int arr[MAX_SIZE];
    int n; // Số phần tử mảng

    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    cout << "Nhap mang: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Mang sau khi sap xep tang dan: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
