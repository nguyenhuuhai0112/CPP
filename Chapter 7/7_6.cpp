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

    int sumEven = 0;
    int countEven = 0;
    int sumOdd = 0;
    int countOdd = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
            countEven++;
        }
        else
        {
            sumOdd += arr[i];
            countOdd++;
        }
    }

    double averageEven = static_cast<double>(sumEven) / countEven;
    double averageOdd = static_cast<double>(sumOdd) / countOdd;

    cout << "Trung bình cộng của các số chẵn trong mảng là: " << averageEven << endl;
    cout << "Trung bình cộng của các số lẻ trong mảng là: " << averageOdd << endl;

    return 0;
}
