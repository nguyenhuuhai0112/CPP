#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    int arr[n];
    cout << "Nhập giá trị cho các phần tử của mảng:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Phần tử thứ " << i + 1 << ": ";
        cin >> arr[i];
    }

    int newIndex;
    cout << "Nhập chỉ số để chèn phần tử mới: ";
    cin >> newIndex;

    if (newIndex < 0 || newIndex > n)
    {
        cout << "N";
        return 0;
    }

    int newValue;
    cout << "Nhập giá trị của phần tử mới: ";
    cin >> newValue;

    int newArr[n + 1];

    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];
    }

    for (int i = n; i > newIndex; i--)
    {
        newArr[i] = newArr[i - 1];
    }

    newArr[newIndex] = newValue;

    cout << "Các phần tử của mảng sau khi chèn là: ";
    for (int i = 0; i < n + 1; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}
