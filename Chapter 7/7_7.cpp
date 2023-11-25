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

    cout << "Các giá trị xuất hiện 2 lần trở lên trong mảng là: ";
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count >= 2)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
