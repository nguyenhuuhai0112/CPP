#include <iostream>
using namespace std;

int find_max(int arr[], int size)
{
    int max_num = arr[0];

    // Tìm số lớn nhất trong mảng
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max_num)
        {
            max_num = arr[i];
        }
    }

    return max_num;
}

int main()
{
    int size;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> size;

    int arr[size];
    cout << "Nhập các phần tử của mảng: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Tìm số lớn nhất trong mảng và in kết quả
    int max_num = find_max(arr, size);
    cout << "Số lớn nhất trong mảng là: " << max_num << endl;

    return 0;
}
