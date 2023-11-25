// 1. Viết hàm chèn giá trị x tại vị trí k trong mảng nguyên arr có n phần tử (1 <= n <= 100)

#include <iostream>

const int MAX_SIZE = 100;

using namespace std;

{
    if (n >= MAX_SIZE)
    {
        cout << "Vuot qua kich thuoc toi da cua mang!" << endl;
        return;
    }

    if (k < 0 || k > n)
    {
        cout << "Vi tri chen khong hop le!" << endl;
        return;
    }

    for (int i = n; i > k; --i)
    {
        arr[i] = arr[i - 1];
    }

    arr[k] = x;
    ++n;
}

int main()
{
    int arr[MAX_SIZE];
    int n; // Số phần tử ban đầu

    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    cout << "Nhap mang ban dau: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int x, k;
    cout << "Nhap gia tri can chen: ";
    cin >> x;
    cout << "Nhap vi tri can chen: ";
    cin >> k;

    chenGiaTri(arr, n, x, k);

    cout << "Mang sau khi chen gia tri: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
