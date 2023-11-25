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

    int maxElement = arr[0];
    int minElement = arr[0];
    int sum = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
        sum += arr[i];
    }

    double average = static_cast<double>(maxElement + minElement) / 2;

    cout << "Trung bình cộng của phần tử lớn nhất và phần tử nhỏ nhất là: " << average << endl;

    return 0;
}
